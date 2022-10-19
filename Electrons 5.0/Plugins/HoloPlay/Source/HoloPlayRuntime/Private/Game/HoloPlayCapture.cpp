// Fill out your copyright notice in the Description page of Project Settings.

#include "Game/HoloPlayCapture.h"
#include "Game/HoloPlayCameraComponent.h"

#include "Misc/HoloPlayLog.h"
#include "Misc/HoloPlayStats.h"

#include "IHoloPlayRuntime.h"

#include "GameFramework/SpringArmComponent.h"
#include "Engine.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Game/HoloPlaySceneCaptureComponent2D.h"
#include "Managers/HoloPlayDisplayManager.h"

void UHoloPlayRenderingConfig::CalculateViewRect(int32& MinX, int32& MinY, int32& MaxX, int32& MaxY, uint32 SizeX, uint32 SizeY, int32 ViewRows, int32 ViewColumns, int32 ViewIndex)
{
	MinX = (ViewIndex % ViewColumns) * SizeX;
	MaxX = MinX + SizeX;
	int32 Row = ViewIndex / ViewColumns;
	MinY = Row * SizeY;
	MaxY = MinY + SizeY;

	//UE_LOG(HoloPlayLogGame, Warning, TEXT("ViewRows %d, ViewColumns %d, ViewIndex %d, Row %d,  MinX %d, MaxX %d, MinY %d, MaxY %d"), ViewRows, ViewColumns, ViewIndex, Row, MinX, MaxX, MinY, MaxY);
}

void UHoloPlayRenderingConfig::CalculateViewRect(float& U, float& V, float& SizeU, float& SizeV, int32 ViewRows, int32 ViewColumns, int32 ViewCount, int32 ViewIndex)
{
	SizeU = 1.f / ViewColumns;
	SizeV = 1.f / ViewRows;

	U = (ViewIndex % ViewColumns) * SizeU;
	int32 Row = ViewIndex / ViewColumns;
	V = Row * SizeV;

	//UE_LOG(HoloPlayLogGame, Warning, TEXT("U %f, V %f, SizeU %f, SizeV %f, ViewRows %d, ViewColumns %d, ViewCount %d, ViewIndex %d"), U, V, SizeU, SizeV, ViewRows, ViewColumns, ViewCount, ViewIndex);
}

UHoloPlayRenderingConfig::UHoloPlayRenderingConfig()
	: RenderTarget(nullptr)
	, ViewsRange(0, 7)
	, TextureSize(1, 1)
	, ViewSize(0, 0)
{
}

UHoloPlayRenderingConfig::~UHoloPlayRenderingConfig()
{
	Release();
}

void UHoloPlayRenderingConfig::Release()
{
	if (RenderTarget != nullptr && RenderTarget->IsValidLowLevel())
	{
		RenderTarget->ConditionalBeginDestroy();
	}

	RenderTarget = nullptr;
}

void UHoloPlayRenderingConfig::Init(uint32 InMinTextureIndex, uint32 InMaxTextureIndex, const FIntPoint& InViewSize)
{
	ViewsRange.Min = InMinTextureIndex;
	ViewsRange.Max = InMaxTextureIndex;
	NumViews = ViewsRange.Max - ViewsRange.Min + 1;
	ViewSize = InViewSize;

	if (NumViews > 0)
	{
		static int32 GMaxTextureDimensionsLocal = (int32)GMaxTextureDimensions;
		check(ViewSize.X < GMaxTextureDimensionsLocal);
		check(ViewSize.Y < GMaxTextureDimensionsLocal);
		int32 TextureSizeX = float(ViewSize.X * NumViews);
		ViewRows = 1;
		if ((TextureSizeX - GMaxTextureDimensionsLocal) > 0)
		{
			ViewRows = FMath::RoundFromZero(float(NumViews) / float(GMaxTextureDimensionsLocal / ViewSize.X));
		}

		ViewColumns = FMath::RoundFromZero(float(NumViews) / float(ViewRows));
		int32 SizeX = ViewSize.X * ViewColumns;
		int32 SizeY = ViewSize.Y * ViewRows;

		TextureSize = FIntPoint(SizeX, SizeY);
		//UE_LOG(HoloPlayLogGame, Warning, TEXT("ViewColumns %d, ViewRows %d, TextureSize %s"), ViewColumns, ViewRows, *TextureSize.ToString());


		const FName TargetName = MakeUniqueObjectName(this, UTextureRenderTarget2D::StaticClass());
		RenderTarget = NewObject<UTextureRenderTarget2D>(this, TargetName);
		RenderTarget->InitCustomFormat(TextureSize.X, TextureSize.Y, PF_A16B16G16R16, false); // Resolution will be changes later, dynamically
		RenderTarget->ClearColor = FLinearColor::Red;
		RenderTarget->UpdateResourceImmediate();

		ViewInfoArr.AddZeroed(NumViews);
		for (int32 CaptureIndex = 0; CaptureIndex < ViewInfoArr.Num(); ++CaptureIndex)
		{
			ViewInfoArr[CaptureIndex].StereoPass = EStereoscopicPass::eSSP_FULL;
			ViewInfoArr[CaptureIndex].StereoIPD = 0.0f;

			int32 MinX = 0;
			int32 MinY = 0;
			int32 MaxX = 0;
			int32 MaxY = 0;
			CalculateViewRect(MinX, MinY, MaxX, MaxY, ViewSize.X, ViewSize.Y, ViewRows, ViewColumns, CaptureIndex);
			ViewInfoArr[CaptureIndex].ViewRect = FIntRect(MinX, MinY, MaxX, MaxY);
		}
	}
	else
	{
		UE_LOG(HoloPlayLogGame, Warning, TEXT("Wrong new number index"));
	}
}

// Sets default values
AHoloPlayCapture::AHoloPlayCapture()
{
	TextureTarget2DRendering = nullptr;

	// Camera Boom for Camera Visible in Editor Setup
	PreviewCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	PreviewCameraSpringArm->SetupAttachment(RootComponent);
	PreviewCameraSpringArm->bDoCollisionTest = false;

	// Camera Visible in Editor Setup
	PreviewCamera = CreateDefaultSubobject<UHoloPlayCameraComponent>(TEXT("PreviewCamera"));
	PreviewCamera->SetupAttachment(PreviewCameraSpringArm, USpringArmComponent::SocketName);

	// Render Camera Setup
	RenderCamera = CreateDefaultSubobject<UHoloPlaySceneCaptureComponent2D>(TEXT("RenderCamera"));
	RenderCamera->SetupAttachment(PreviewCamera);

	// Init Config Values
	auto HoloPlaySettings = GetDefault<UHoloPlaySettings>();
	TilingValues = HoloPlaySettings->AutomaticSettings;
	CustomTilingValues = HoloPlaySettings->CustomSettings;
	VerticalAngle = HoloPlaySettings->HoloPlayShaderSettings.verticalAngle;
	ViewCone = HoloPlaySettings->HoloPlayShaderSettings.viewCone;
	ResetCam();
}

AHoloPlayCapture::~AHoloPlayCapture()
{
	// It should automaticly clean all render texture targets
	ReleaseRenderingConfigs();
}

// Called when the game starts or when spawned
void AHoloPlayCapture::BeginPlay()
{
	Super::BeginPlay();

	// Initialize TilingQuality (important when it's set to "Automatic")
	UpdateTillingProperties(TilingQuality);

	// Set Post Processing settings
	SetRenderingFeatures();

	IHoloPlayRuntime::Get().GameHoloPlayCapture = this;
}

// Called when the game ends
void AHoloPlayCapture::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// It should automaticly clean all render texture targets
	ReleaseRenderingConfigs();

	IHoloPlayRuntime::Get().GameHoloPlayCapture = this;
	bIsEditor = false;
}

void AHoloPlayCapture::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	ResetCam();

	// Set Post Processing settings
	SetRenderingFeatures();

	UpdateTillingProperties();

	if (GIsEditor && bTexturesDirty)
	{
		IHoloPlayRuntime::Get().EditorHoloPlayCapture = this;
		bIsEditor = true;
		bTexturesDirty = false;
	}
}

void AHoloPlayCapture::SetRenderingFeatures()
{
	if (EnableAdvancedRenderingFeatures)
	{
		RenderCamera->ShowFlags.EnableAdvancedFeatures();
	}
	else
	{
		RenderCamera->ShowFlags.DisableAdvancedFeatures();
	}

	RenderCamera->ShowFlags.SetTemporalAA(false);
}

// Recalculates tiling values and sets new values used for frustum visualization
// Called on OnConstruction and whenever any values are modified.
void AHoloPlayCapture::ResetCam()
{
	float vertAngle = (bUseCustomVerticalAngle) ? CustomVerticalAngle : VerticalAngle.DefaultValue;
	TilingValues.Setup();

	ResetCam(vertAngle, FOV);
}

void AHoloPlayCapture::ResetCam(float InVerticalAngle, float fov, bool resetOffset)
{
	auto HoloPlaySettings = GetDefault<UHoloPlaySettings>();

	float CamDistance = GetCamDistance();

	float NearClipMax = (NearClipFactor * Size > CamDistance) ? CamDistance / Size : NearClipFactor;
	NearClipFactor = (NearClipFactor < 0.0f) ? 0.0f : NearClipMax;
	FarClipFactor = (FarClipFactor < 0.0f) ? 0.0f : FarClipFactor;

	// Clipping Plane Distance
	NearClipPlane = CamDistance - NearClipFactor * Size;
	if (NearClipPlane <= NearClipMin)
	{
		NearClipPlane = NearClipMin;
	}
	FarClipPlane = CamDistance + FarClipFactor * Size;

	// Preview Camera Distance
	PreviewCameraSpringArm->TargetArmLength = CamDistance;

#if WITH_EDITOR
	// Preview Camera Setup - Pass data to camera component and draw frustum component
	PreviewCamera->NearClipPlane = NearClipPlane;
	PreviewCamera->FarClipPlane = FarClipPlane;
	PreviewCamera->HoloPlayPlane = CamDistance;
	float fAspectRatio = ( float ) TilingValues.TileSizeX / ( float ) TilingValues.TileSizeY;
	PreviewCamera->AspectRatio = fAspectRatio;//HoloPlaySettings->HoloPlayShaderSettings.GetPreviewAspect();
	PreviewCamera->FieldOfView = fov;
	PreviewCamera->VertAngle = InVerticalAngle;
	PreviewCamera->MidPlaneLineLength = MidPlaneLineLength;
	PreviewCamera->FrustumLineThickness = FrustumLineThickness;
	PreviewCamera->MidLineThickness = MidLineThickness;
	PreviewCamera->ProjectionMode = ECameraProjectionMode::Perspective;

	PreviewCamera->OverrideFrustumColor(FrustumColor, MidPlaneFrustumColor);
	PreviewCamera->RefreshVisualRepresentation();
#endif
}

void AHoloPlayCapture::ResetAllRenderTextures()
{
	ReleaseRenderingConfigs();

	int32 MaxViewCount = UHoloPlayRenderingConfig::MaxView;
	if (bSingleViewMode)
	{
		MaxViewCount = 1;
	}

	int32 CurrentView = 0;
	uint32 MinTextureIndex = 0;
	uint32 MaxTextureIndex = 0;
	int32 NumViews = TilingValues.GetNumViews();
	for (CurrentView; CurrentView < NumViews; CurrentView++)
	{
		// Add new render target
		if ((CurrentView + 1) % MaxViewCount == 0)
		{
			MaxTextureIndex = CurrentView;

			FIntPoint ViewSize(TilingValues.TileSizeX, TilingValues.TileSizeY);
			AddNewRenderConfig(MinTextureIndex, MaxTextureIndex, ViewSize);

			MinTextureIndex = MaxTextureIndex + 1;
		}
		// Add last render target
		else if (CurrentView + 1 == NumViews)
		{
			MaxTextureIndex = CurrentView;

			FIntPoint ViewSize(TilingValues.TileSizeX, TilingValues.TileSizeY);
			AddNewRenderConfig(MinTextureIndex, MaxTextureIndex, ViewSize);
		}
	}

	if (RenderingConfigs.Num() == 0)
	{
		UE_LOG(HoloPlayLogGame, Warning, TEXT("Something went wrong, RenderingConfigs never should be 0"));
	}
}

void AHoloPlayCapture::AddNewRenderConfig(uint32 InMinTextureIndex, uint32 InMaxTextureIndex, const FIntPoint& InViewSize)
{
	UHoloPlayRenderingConfig* Config = NewObject<UHoloPlayRenderingConfig>(this);
	Config->Init(InMinTextureIndex, InMaxTextureIndex, InViewSize);

	RenderingConfigs.Add(Config);
}

void AHoloPlayCapture::ReleaseRenderingConfigs()
{
	for (UHoloPlayRenderingConfig* Config : RenderingConfigs)
	{
		Config->Release();
		Config = nullptr;
	}

	RenderingConfigs.Empty();
}

#if WITH_EDITOR
void AHoloPlayCapture::PostEditChangeProperty(struct FPropertyChangedEvent& e)
{
	Super::PostEditChangeProperty(e);

	FName PropertyName = (e.Property != NULL) ? e.Property->GetFName() : NAME_None;

	if (PropertyName == GET_MEMBER_NAME_CHECKED(AHoloPlayCapture, TilingQuality))
	{
		UpdateTillingProperties(TilingQuality);
	}
	else if (PropertyName == GET_MEMBER_NAME_CHECKED(FHoloPlayTilingQuality, TilesX) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(FHoloPlayTilingQuality, TilesY) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(FHoloPlayTilingQuality, QuiltW) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(FHoloPlayTilingQuality, QuiltH) ||
		PropertyName == GET_MEMBER_NAME_CHECKED(AHoloPlayCapture, bSingleViewMode)
		)
	{
		// Reset our render textures and configuration after it
		ResetAllRenderTextures();
	}

	if (PropertyName == GET_MEMBER_NAME_CHECKED(AHoloPlayCapture, FrustumColor))
	{
		PreviewCamera->OverrideFrustumColor(FrustumColor, MidPlaneFrustumColor);
	}

	// @TODO. For some reason it works only in GameMode
	if (PropertyName == GET_MEMBER_NAME_CHECKED(AHoloPlayCapture, EnableAdvancedRenderingFeatures))
	{
		SetRenderingFeatures();
	}

	// Check if Game is running
	if (AHoloPlayCapture::GetWorld() && AHoloPlayCapture::GetWorld()->IsGameWorld())
	{
		ResetCam();
	}
}
#endif // WITH_EDITOR

void AHoloPlayCapture::UpdateTillingProperties(EHoloPlayQualitySettings TilingSettings)
{
	if (TilingValues.Text == "Custom")
	{
		CustomTilingValues = TilingValues;
	}
	switch (TilingSettings)
	{
		case EHoloPlayQualitySettings::Q_PortraitHighRes:
		{
			TilingValues = GetDefault<UHoloPlaySettings>()->PortraitHiResSettings;
			break;
		}
		case EHoloPlayQualitySettings::Q_Portrait:
		{
			TilingValues = GetDefault<UHoloPlaySettings>()->PortraitSettings;
			break;
		}
		case EHoloPlayQualitySettings::Q_Automatic:
		{
			TilingValues = GetDefault<UHoloPlaySettings>()->AutomaticSettings;
			auto HoloPlayDisplayManager = IHoloPlayRuntime::Get().GetHoloPlayDisplayManager();
			EHoloPlayDeviceType deviceType = HoloPlayDisplayManager->GetCalibrationSettings().Type;
			switch ( deviceType )
			{
			case EHoloPlayDeviceType::FourK:
				TilingValues = GetDefault<UHoloPlaySettings>()->FourKSettings;
				break;

			case EHoloPlayDeviceType::EightK:
		        TilingValues = GetDefault<UHoloPlaySettings>()->EightKSettings;
			    break;

			case EHoloPlayDeviceType::EightPointNineInchLegacy:
		        TilingValues = GetDefault<UHoloPlaySettings>()->EightNineLegacy;
			    break;

			default:
				TilingValues = GetDefault<UHoloPlaySettings>()->PortraitSettings;

			}
			break;
		}
		case EHoloPlayQualitySettings::Q_FourK:
		{
			TilingValues = GetDefault<UHoloPlaySettings>()->FourKSettings;
			break;
		}
		case EHoloPlayQualitySettings::Q_EightK:
		{
			TilingValues = GetDefault<UHoloPlaySettings>()->EightKSettings;
			break;
		}
		case EHoloPlayQualitySettings::Q_EightPointNineLegacy:
		{
			TilingValues = GetDefault<UHoloPlaySettings>()->EightNineLegacy;
			break;
		}
		case EHoloPlayQualitySettings::Q_Custom:
		{
			TilingValues = CustomTilingValues;
			break;
		}
	}

	// Reset our render textures and configuration after it
	ResetAllRenderTextures();

	ResetCam();
}

//Called by HoloPlayViewportClient used for capturing new snapshot of scene from SceneCapture (RenderCamera)
void AHoloPlayCapture::RenderViews()
{
	// Setup all render targets
	float CamDistance = GetCamDistance();
	float ViewConeSweep = CamDistance * FMath::Tan(FMath::DegreesToRadians(ViewCone.DefaultValue));
	int NumViews = TilingValues.GetNumViews();

	for (UHoloPlayRenderingConfig* RenderingConfig : RenderingConfigs)
	{
		// Set render target texture to SceneCaptureComponent
		RenderCamera->TextureTarget = RenderingConfig->GetRenderTarget();

		for (uint32 ViewIndex = 0; ViewIndex < RenderingConfig->NumViews; ++ViewIndex)
		{
			// Set CaptureViewInfo;
			float CurrentViewLerp = 0.f; // if numviews is 1, take center view
			if (NumViews > 1)
			{
				CurrentViewLerp = (float)(RenderingConfig->ViewsRange.Min + ViewIndex) / (NumViews - 1.f) - .5f;
			}

			float ViewOffsetX = CurrentViewLerp * ViewConeSweep;
			float ProjModifier = 1.0f / Size;
			float ProjOffsetX = ViewOffsetX * ProjModifier;

			UE_LOG(HoloPlayLogGame, Verbose, TEXT("ViewOffsetX: %f, ProjOffsetX: %f"), ViewOffsetX, ProjOffsetX);

			RenderCamera->SetRelativeLocation(FVector(0.0f, ViewOffsetX, 0.0f));
			RenderCamera->CustomProjectionMatrix = GenerateProjectionMatrix(FOV, NearClipPlane, FarClipPlane, ProjOffsetX, 0.f);

			FTransform Transform = RenderCamera->GetComponentToWorld();
			FVector ViewLocation = Transform.GetTranslation();

			// Remove the translation from Transform because we only need rotation.
			Transform.SetTranslation(FVector::ZeroVector);
			Transform.SetScale3D(FVector::OneVector);
			FMatrix ViewRotationMatrix = Transform.ToInverseMatrixWithScale();

			// swap axis st. x=z,y=x,z=y (unreal coord space) so that z is up
			ViewRotationMatrix = ViewRotationMatrix * FMatrix(
				FPlane(0, 0, 1, 0),
				FPlane(1, 0, 0, 0),
				FPlane(0, 1, 0, 0),
				FPlane(0, 0, 0, 1));

			RenderingConfig->ViewInfoArr[ViewIndex].ViewRotationMatrix = ViewRotationMatrix;
			RenderingConfig->ViewInfoArr[ViewIndex].ViewLocation = ViewLocation;
			RenderingConfig->ViewInfoArr[ViewIndex].ProjectionMatrix = RenderCamera->CustomProjectionMatrix;
		}

		// Render View
		SCOPE_CYCLE_COUNTER(STAT_CaptureScene_GameThread);
		RenderCamera->CaptureHoloPlayScene(RenderingConfig);
	}
}

void AHoloPlayCapture::Render2DView()
{
	const UHoloPlaySettings* HoloPlaySettings = GetDefault<UHoloPlaySettings>();

	// Check if the texture is exists
	if (TextureTarget2DRendering == nullptr)
	{
		TextureTarget2DRendering = NewObject<UTextureRenderTarget2D>(GetTransientPackage(), UTextureRenderTarget2D::StaticClass());
		TextureTarget2DRendering->InitCustomFormat(HoloPlaySettings->HoloPlayShaderSettings.ScreenWidth.DefaultValue, 
			HoloPlaySettings->HoloPlayShaderSettings.ScreenHeight.DefaultValue, PF_A16B16G16R16, false);
		TextureTarget2DRendering->ClearColor = FLinearColor::Red;
		TextureTarget2DRendering->UpdateResourceImmediate();
	}

	if (HoloPlaySettings->HoloPlayShaderSettings.ScreenWidth.DefaultValue != TextureTarget2DRendering->SizeX ||
		HoloPlaySettings->HoloPlayShaderSettings.ScreenHeight.DefaultValue != TextureTarget2DRendering->SizeY)
	{
		TextureTarget2DRendering->ResizeTarget(HoloPlaySettings->HoloPlayShaderSettings.ScreenWidth.DefaultValue, HoloPlaySettings->HoloPlayShaderSettings.ScreenHeight.DefaultValue);
		TextureTarget2DRendering->UpdateResourceImmediate();
	}

	// Set 2D texture 
	RenderCamera->TextureTarget = TextureTarget2DRendering;

	RenderCamera->SetRelativeLocation(FVector(0.0f));
	RenderCamera->CustomProjectionMatrix = GenerateProjectionMatrix(FOV, NearClipPlane, FarClipPlane, 0.f, 0.f);

	RenderCamera->CaptureScene();

}


//Get distance between the render camera and the center of the capture area
float AHoloPlayCapture::GetCamDistance()
{
	return Size / FMath::Tan(FMath::DegreesToRadians(FOV * 0.5f));
}


// Calculate and return matrix used for camera projection matrices
FMatrix AHoloPlayCapture::GenerateProjectionMatrix(float INFOV, float Near, float Far, float OffsetX, float OffsetY)
{
	float HalfFOV = FMath::DegreesToRadians(INFOV) / 2.0f;
	auto HoloPlaySettings = GetDefault<UHoloPlaySettings>();

	float Width = HoloPlaySettings->HoloPlayShaderSettings.ScreenWidth.DefaultValue;
	float Height = HoloPlaySettings->HoloPlayShaderSettings.ScreenHeight.DefaultValue;

	float MaxZ = 0.f;
	float MinZ = 0.f;
	if (bUseFarClipPlane)
	{
		MaxZ = ((Near == Far) ? 0.0f : Near / (Near - Far));
		MinZ = ((Near == Far) ? Near : -Far * Near / (Near - Far));
	}
	else
	{
		MinZ = Near;
	}

	FMatrix PerspectiveMatrix(
		FPlane(1.0f / FMath::Tan(HalfFOV), 0.0f, 0.0f, 0.0f),
		FPlane(0.0f, Width / FMath::Tan(HalfFOV) / Height, 0.0f, 0.0f),
		FPlane(OffsetX, OffsetY, MaxZ, 1.0f),
		FPlane(0.0f, 0.0f, MinZ, 0.0f)
	);

	UE_LOG(HoloPlayLogGame, Verbose, TEXT("PerspectiveMatrix: %s"), *PerspectiveMatrix.ToString());

	return PerspectiveMatrix;
}

