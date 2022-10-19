// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HoloPlaySettings.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent.h"

#include "HoloPlayCapture.generated.h"

class USpringArmComponent;
class UHoloPlaySceneCaptureComponent2D;
class UHoloPlayCameraComponent;
class UTextureRenderTarget2D;
struct FSceneCaptureViewInfo;
class AHoloPlayCapture;

/**
* Render configuration, which holds the texture and CaptureViewInfo
*/
UCLASS()
class UHoloPlayRenderingConfig 
	: public UObject
{
	GENERATED_BODY()

	friend class AHoloPlayCapture;

public:

	UHoloPlayRenderingConfig();
	~UHoloPlayRenderingConfig();

	/** Init should be called separatly, because we do not controll costructior of UObject directly */
	void Init(uint32 InMinTextureIndex, uint32 InMaxTextureIndex, const FIntPoint& InViewSize);

	UTextureRenderTarget2D* GetRenderTarget() const { return RenderTarget; }

	const TArray<FSceneCaptureViewInfo>& GetViewInfoArr() const { return ViewInfoArr; }

	int32 GetViewRows() const { return ViewRows; }

	int32 GetViewColumns() const { return ViewColumns; }

	void Release();

public:
	static constexpr uint8 MaxView = 8;

public:
	static void CalculateViewRect(int32& MinX, int32& MinY, int32& MaxX, int32& MaxY, uint32 SizeX, uint32 SizeY, int32 ViewRows, int32 ViewColumns, int32 ViewIndex);
	static void CalculateViewRect(float& U, float& V, float& SizeU, float& SizeV, int32 ViewRows, int32 ViewColumns, int32 ViewCount, int32 ViewIndex);

private:
	UPROPERTY()
	UTextureRenderTarget2D* RenderTarget;

	UPROPERTY()
	uint32 NumViews;

	TInterval<uint32> ViewsRange;

	FIntPoint TextureSize;

	FIntPoint ViewSize;

	TArray<FSceneCaptureViewInfo> ViewInfoArr;

	int32 ViewRows;

	int32 ViewColumns;
};

UCLASS(hidecategories = ("Actor", "LOD", "Cooking", "Rendering", "Replication", "Input"), meta = (AllowPrivateAccess = "true"))

/**
 * @class	AHoloPlayCapture
 *
 * @brief	The primary actor that handles visualisation and projection
 */

class HOLOPLAYRUNTIME_API AHoloPlayCapture : public AActor
{
	GENERATED_BODY()
	
public:	

	/**
	 * @fn	AHoloPlayCapture::AHoloPlayCapture();
	 *
	 * @brief	Sets default values for this actor's properties
	 */

	AHoloPlayCapture();

	~AHoloPlayCapture();

	FHoloPlayTilingQuality GetTilingValues() { return TilingValues; }

	UTexture2D* GetOverrideQuiltTexture2D() { return OverrideQuiltTexture2D; }

	UHoloPlaySceneCaptureComponent2D* GetRenderCamera() { return RenderCamera; }

	UTextureRenderTarget2D* GetTextureTarget2DRendering() const { return TextureTarget2DRendering; }

	const TArray<UHoloPlayRenderingConfig*> GetRenderingConfigs() const { return RenderingConfigs; }
	/**
	 * @fn	virtual void AHoloPlayCapture::BeginPlay() override;
	 *
	 * @brief	Called when the game starts or when spawned
	 */

	virtual void BeginPlay() override;

	/**
	 * @fn	virtual void AHoloPlayCapture::EndPlay(const EEndPlayReason::Type EndPlayReason);
	 *
	 * @brief	called on ends a play
	 *
	 * @param	EndPlayReason	The end play reason.
	 */

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

	/**
	 * @fn	virtual void AHoloPlayCapture::OnConstruction(const FTransform & Transform) override;
	 *
	 * @brief	Called on after reaading setting all variables from UObject loader
	 *
	 * @param	Transform	The transform.
	 */

	virtual void OnConstruction(const FTransform & Transform) override;

	float GetCamDistance();

	/**
	 * @fn	FMatrix AHoloPlayCapture::GenerateProjectionMatrix(float FOV, float Near, float Far, float OffsetX, float OffsetY);
	 *
	 * @brief	Generates a projection matrix
	 *
	 * @param	FOV	   	The fov.
	 * @param	Near   	The near.
	 * @param	Far	   	The far.
	 * @param	OffsetX	The offset x coordinate.
	 * @param	OffsetY	The offset y coordinate.
	 *
	 * @returns	The projection matrix.
	 */

	FMatrix GenerateProjectionMatrix(float FOV, float Near, float Far, float OffsetX, float OffsetY);

	/**
	 * @fn	void AHoloPlayCapture::UpdateTillingProperties(EHoloPlayQualitySettings TilingQuailty);
	 *
	 * @brief	Called when Properties are Updated
	 *
	 * @param	TilingQuailty	The tiling quality.
	 */

	void UpdateTillingProperties(EHoloPlayQualitySettings TilingQuailty);

	/**
	 * @brief	Refresh current display tiling settings
	 */
	void UpdateTillingProperties()
	{
		UpdateTillingProperties(TilingQuality);
	}

	void RenderViews();

	void Render2DView();

#if WITH_EDITOR

	/**
	 * @fn	void AHoloPlayCapture::PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
	 *
	 * @brief	Called then property was changed in Editor
	 *
	 * @param [in,out]	e	A FPropertyChangedEvent to process.
	 */

	void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
#endif

protected:
	//Customizable DrawFrustum Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Visual")
	FColor FrustumColor = FColor::Blue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Visual", meta = (ClampMin = "0.0", ClampMax = "10.0", UIMin = "0.0", UIMax = "10.0"))
	float FrustumLineThickness = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Visual")
	FColor MidPlaneFrustumColor = FColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Visual", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float MidPlaneLineLength = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Visual", meta = (ClampMin = "0.0", ClampMax = "10.0", UIMin = "0.0", UIMax = "10.0"))
	float MidLineThickness = 0.0f;

	// Customizable Capture Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings", meta = (ClampMin = "0.1", UIMin = "0.1", UIMax = "2000.0"))
	float Size = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings")
	float NearClipFactor = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings")
	bool bUseFarClipPlane = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings",  meta = (EditCondition = "bUseFarClipPlane"))
	float FarClipFactor = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings", meta = (ClampMin = "8.0", ClampMax = "90.0", UIMin = "8.0", UIMax = "90.0"))
	float FOV = 14.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Advanced")
	bool bUseCustomVerticalAngle = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Advanced", meta = (EditCondition = "bUseCustomVerticalAngle", ClampMin = "-60.0", ClampMax = "60.0", UIMin = "-60.0", UIMax = "60.0"))
	float CustomVerticalAngle = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Advanced")
	bool bUseCustomViewCone = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Advanced", meta = (EditCondition = "bUseCustomViewCone", ClampMin = "0.0", ClampMax = "90.0", UIMin = "0.0", UIMax = "90.0"))
	float CustomViewCone = 40.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CaptureSettings|Advanced")
	bool EnableAdvancedRenderingFeatures = true;

	// Customizable Quilting Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuiltSettings")
	UTexture2D* OverrideQuiltTexture2D = nullptr;

	// When disabled, the plugin will render 8 pictures at a time. Enable it if you're experiencing issues with rendering (e.g. out of VRAM problem), with a cost of slower performance.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TilingSettings")
	bool bSingleViewMode = false;

	// Customizable Tiling Settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TilingSettings")
	EHoloPlayQualitySettings TilingQuality = EHoloPlayQualitySettings::Q_Automatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TilingSettings", meta = (ShowOnlyInnerProperties))
	FHoloPlayTilingQuality TilingValues;
	
	FHoloPlayTilingQuality CustomTilingValues;

	UPROPERTY(BlueprintReadWrite, Category = "CameraSettings")
	FHoloPlayConfigValues VerticalAngle;

	UPROPERTY(BlueprintReadWrite, Category = "CameraSettings")
	FHoloPlayConfigValues ViewCone;

	UPROPERTY(BlueprintReadWrite, Category = "CameraSettings")
	float Aspect;

	UPROPERTY(BlueprintReadOnly, Category = "Projection Settings")
	float ResetCamerasView = 1.0f;

	UPROPERTY()
	TArray<UHoloPlayRenderingConfig*> RenderingConfigs;

private:
	// Components Declarations
	USpringArmComponent* PreviewCameraSpringArm = nullptr;

	UHoloPlayCameraComponent* PreviewCamera = nullptr;

	UHoloPlaySceneCaptureComponent2D* RenderCamera = nullptr;

	/** 2D rendering Camera */
	UTextureRenderTarget2D* TextureTarget2DRendering;

	float NearClipPlane = 0.f;

	float FarClipPlane = 0.f;

	float NearClipMin = 1.0f;

	bool bIsEditor = false;

	bool bTexturesDirty = true;

private:
	void SetRenderingFeatures();

	/**
	 * @fn	void AHoloPlayCapture::ResetCam();
	 *
	 * @brief	Setup all cameras
	 */

	UFUNCTION(BlueprintCallable, Category = "HoloPlay")
	void ResetCam();

	void ResetCam(float VerticalAngle, float fov, bool resetOffset = true);

	void ResetAllRenderTextures();

	void AddNewRenderConfig(uint32 InMinTextureIndex, uint32 InMaxTextureIndex, const FIntPoint& InViewSize);

	void ReleaseRenderingConfigs();
};
