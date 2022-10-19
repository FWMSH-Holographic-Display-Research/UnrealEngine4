 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"

#include "HoloPlaySettings.generated.h"

class UFont;

UENUM(BlueprintType, meta = (ScriptName = "HoloPlayPlayMode"))

/**
 * @enum	EHoloPlayModeType
 *
 * @brief	Values that represent HoloPlay mode types
 */

enum class EHoloPlayModeType : uint8
{
	PlayMode_InSeparateWindow	UMETA(DisplayName = "In Separate Window"),
	PlayMode_InMainViewport		UMETA(DisplayName = "In Main Viewport")
};

UENUM(BlueprintType, meta = (ScriptName = "HoloPlayWindowType"))

/**
 * @enum	EHoloPlayWindowType
 *
 * @brief	Values that represent HoloPlay window types
 */

enum class EHoloPlayWindowType : uint8
{
	/** The window is in true fullscreen mode */
	Fullscreen			UMETA(DisplayName = "Fullscreen"),
	/** The window has no border and takes up the entire area of the screen */
	WindowedFullscreen	UMETA(DisplayName = "WindowedFullscreen"),
	/** The window has a border and may not take up the entire screen area */
	Windowed			UMETA(DisplayName = "Windowed"),
};

UENUM(BlueprintType, meta = (ScriptName = "HoloPlayWindowAutoCenter"))

/**
 * @enum	EHoloPlayWindowAutoCenter
 *
 * @brief	Values that represent HoloPlay window Automatic centers
 */

enum class EHoloPlayWindowAutoCenter : uint8
{
	/** Don't auto-center the window */
	None,

	/** Auto-center the window on the primary work area */
	PrimaryWorkArea,

	/** Auto-center the window on the preferred work area, determined using GetPreferredWorkArea() */
	PreferredWorkArea,
};

// Tiling Quality Settings Enum (For UI)
UENUM(BlueprintType, meta = (ScriptName = "HoloPlayQualitySettings"))

/**
 * @enum	EHoloPlayQualitySettings
 *
 * @brief	Values that represent HoloPlay quality settings
 */

enum class EHoloPlayQualitySettings : uint8
{
	Q_Automatic 			UMETA(DisplayName = "Automatic"),
	Q_Portrait 				UMETA(DisplayName = "Portrait"),
	Q_PortraitHighRes 		UMETA(DisplayName = "Portrait High Res"),
	Q_FourK 				UMETA(DisplayName = "4K Res"),
	Q_EightK 				UMETA(DisplayName = "8K Res"),
	Q_EightPointNineLegacy 	UMETA(DisplayName = "8.9 Inch Legacy"),
	Q_Custom				UMETA(DisplayName = "Custom")
};

USTRUCT()

/**
 * @struct	FHoloPlaySettingsBase
 *
 * @brief	Base settings class for using shared functionality between different settings
 */

struct FHoloPlaySettingsBase
{
	GENERATED_USTRUCT_BODY()

	/**
	 * @fn	virtual void PostEngineInit()
	 *
	 * @brief	Called after engine initialized
	 */

	virtual void PostEngineInit() {};

	/**
	 * @fn	virtual void PreSave()
	 *
	 * @brief	called each time before save settings
	 */

	virtual void PreSave() {};
};


// Tiling Quality Settings Structure
USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayTilingQuality
 *
 * @brief	A HoloPlay tiling quality.
 */

struct FHoloPlayTilingQuality : public FHoloPlaySettingsBase
{
	GENERATED_USTRUCT_BODY()

	virtual ~FHoloPlayTilingQuality(){}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TilingSettings", meta = (EditCondition = "bTilingEditable", ClampMin = "1", ClampMax = "16", UIMin = "1", UIMax = "16"))
	int TilesX = 4;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TilingSettings", meta = (EditCondition = "bTilingEditable", ClampMin = "1", ClampMax = "160", UIMin = "1", UIMax = "16"))
	int TilesY = 8;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TilingSettings", meta = (EditCondition = "bTilingEditable", ClampMin = "512", ClampMax = "8192", UIMin = "512", UIMax = "8192"))
	int QuiltW = 2048;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TilingSettings", meta = (EditCondition = "bTilingEditable", ClampMin = "512", ClampMax = "8192", UIMin = "512", UIMax = "8192"))
	int QuiltH = 2048;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TilingSettings")
	bool Overscan = false;

	UPROPERTY(BlueprintReadWrite, Category = "TilingSettings")
	int TileSizeX = 0;

	UPROPERTY(BlueprintReadWrite, Category = "TilingSettings")
	int TileSizeY = 0;

	UPROPERTY(BlueprintReadWrite, Category = "TilingSettings")
	int PaddingX = 0;

	UPROPERTY(BlueprintReadWrite, Category = "TilingSettings")
	int PaddingY = 0;

	UPROPERTY(BlueprintReadWrite, Category = "TilingSettings")
	float PortionX = 0.f;

	UPROPERTY(BlueprintReadWrite, Category = "TilingSettings")
	float PortionY = 0.f;

	UPROPERTY(BlueprintReadOnly, Category = "TilingSettings")
	bool bTilingEditable = false;

	FString Text = "Default";

	FHoloPlayTilingQuality() {};
	FHoloPlayTilingQuality(FString InText, int InTilesX, int InTilesY, int InQuiltW, int InQuiltH, bool InEditable = false, bool InOverscan = false, float InAspect = 1.f)
	{
		Text = InText;
		TilesX = InTilesX;
		TilesY = InTilesY;
		QuiltW = InQuiltW;
		QuiltH = InQuiltH;
		Overscan = InOverscan;
		bTilingEditable = InEditable;
		Setup();
	}

	void Setup()
	{
		TileSizeX = (int)QuiltW / TilesX;
		TileSizeY = (int)QuiltH / TilesY;
		PaddingX = (int)QuiltW - TilesX * TileSizeX;
		PaddingY = (int)QuiltH - TilesY * TileSizeY;
		PortionX = (float)TilesX * TileSizeX / (float)QuiltW;
		PortionY = (float)TilesY * TileSizeY / (float)QuiltH;
	}

	int GetNumViews()
	{
		return TilesX * TilesY;
	}
};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayConfigValues
 *
 * @brief	Default Screen Config Values
 */

struct FHoloPlayConfigValues : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlayConfigValues() {}

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float DefaultValue = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float Min = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float Max = 0.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	FString Name;

	FHoloPlayConfigValues() {};
	FHoloPlayConfigValues(float InDefalutValue, float InMin, float InMax, FString InName, bool isInit = false)
	{
		DefaultValue = InDefalutValue;
		Min = InMin;
		Max = InMax;
		Name = InName;
	}
};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayWindowSettings
 *
 * @brief	A HoloPlay window settings.
 */

struct FHoloPlayWindowSettings : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlayWindowSettings() {}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "HoloPlay Window Size"))
	FVector2D ClientSize = FVector2D(2560, 1600);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "HoloPlay Screen Position"))
	FVector2D ScreenPosition = FVector2D(2560, 0);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "Borderless Window"))
	bool bUseBorderlessWindow = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "Using OS Native Window Border"))
	bool bUseOSWindowBorder = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "Render Directly to Separate Window"))
	bool RenderDirectlyToWindowInSeparateWindow = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "Window Type"))
	EHoloPlayWindowType WindowType = EHoloPlayWindowType::WindowedFullscreen;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "Window Location"))
	EHoloPlayWindowAutoCenter WindowAutoCenter = EHoloPlayWindowAutoCenter::None;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "Window Location"))
	EHoloPlayModeType LastExecutedPlayModeType = EHoloPlayModeType::PlayMode_InSeparateWindow;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings")
	bool bLockInMainViewport = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings")
	bool bAutoPlacementInHoloPlay = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Window Settings")
	int ScreenIndex = 0;
};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayShaderSettings
 *
 * @brief	A HoloPlay shader settings.
 */

struct FHoloPlayShaderSettings : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlayShaderSettings() {}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings")
	int QuiltMode = 0;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings")
	int FlipYTexCoords = 1;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings")
	bool bUseCustomAspect = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Pitch"))
	FHoloPlayConfigValues Pitch = FHoloPlayConfigValues(47.567680f, 1.f, 200.f, "Pitch");

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Slope"))
	FHoloPlayConfigValues slope = FHoloPlayConfigValues(-5.422609, -30.f, 30.f, "Slope");

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Center"))
	FHoloPlayConfigValues center = FHoloPlayConfigValues(-0.082337, -1.f, 1.f, "Center");

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Calibration Aspect"))
	FHoloPlayConfigValues CalibrationAspect = FHoloPlayConfigValues(1.6f, 0.f, 1.f, "Calibration Aspect", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "View Cone"))
	FHoloPlayConfigValues viewCone = FHoloPlayConfigValues(40.f, 0.f, 180.f, "View Cone");

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "View Inversion"))
	FHoloPlayConfigValues invView = FHoloPlayConfigValues(1.f, 0.f, 1.f, "View Inversion", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Vertical Angle"))
	FHoloPlayConfigValues verticalAngle = FHoloPlayConfigValues(0.f, -20.f, 20.f, "Vert Angle");

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "DPI"))
	FHoloPlayConfigValues DPI = FHoloPlayConfigValues(338.f, 1.f, 1000.f, "DPI", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Flip Image X"))
	FHoloPlayConfigValues flipImageX = FHoloPlayConfigValues(0.f, 0.f, 1.f, "Flip Image X", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Flip Image Y"))
	FHoloPlayConfigValues flipImageY = FHoloPlayConfigValues(0.f, 0.f, 1.f, "Flip Image Y", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings")
	float CustomAspectX = 16.f;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings")
	float CustomAspectY = 10.f;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Flip Subpixels"))
	FHoloPlayConfigValues flipSubp = FHoloPlayConfigValues(0.f, 0.f, 1.f, "Flip Subpixels", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Screen Width"))
	FHoloPlayConfigValues ScreenWidth = FHoloPlayConfigValues(2560.0f, 0.f, 7860.f, "Screen Width", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Screen Height"))
	FHoloPlayConfigValues ScreenHeight = FHoloPlayConfigValues(1600.0f, 0.f, 7860.f, "Screen Height", true);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "Model"))
	FHoloPlayConfigValues Model = FHoloPlayConfigValues(0.0f, 0.f, 1.f, "Model", true);

	void SetDefaults(float newPitch, float newSlope, float newCenter, float newViewCone, float newDPI, float newAspect, float newScreenWidth, float newScreenHeight, int newModel)
	{
		Pitch.DefaultValue = newPitch;
		slope.DefaultValue = newSlope;
		center.DefaultValue = newCenter;
		viewCone.DefaultValue = newViewCone;
		DPI.DefaultValue = newDPI;
		CalibrationAspect.DefaultValue = newAspect;
		ScreenWidth.DefaultValue = newScreenWidth;
		ScreenHeight.DefaultValue = newScreenHeight;
		Model.DefaultValue = (float)newModel;
	}

	float GetPreviewAspect() const
	{
		if (bUseCustomAspect)
		{
			return CustomAspectX / CustomAspectY;
		}
		else
		{
			return ScreenWidth.DefaultValue / ScreenHeight.DefaultValue;
		}
	}


	float GetCustomAspect() const
	{
		return CustomAspectX / CustomAspectY;
	}

	void SetCustomAspect(float InX, float InY)
	{
		CustomAspectX = InX;
		CustomAspectY = InY;
	}

	void SetCustomAspectX(float InX)
	{
		CustomAspectX = InX;
	}

	void SetCustomAspectY(float InY)
	{
		CustomAspectY = InY;
	}
};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlaySceneSettings
 *
 * @brief	A HoloPlay scene settings.
 * 			Using mostly for debugging
 */

struct FHoloPlaySceneSettings : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlaySceneSettings() {}
};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayScreenshotSettings
 *
 * @brief	A HoloPlay screenshot settings.
 */

struct FHoloPlayScreenshotSettings : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlayScreenshotSettings() {}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Screenshot Settings")
	FString FileName = "";

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Screenshot Settings")
	FKey InputKey = EKeys::F9;

	/* X Resolution for high res shots */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Screenshot Settings", Meta = (ClampMin = "0", ClampMax = "10000", UIMin = "0", UIMax = "10000"))
	int ScreenshotResolutionX = 0;

	/* Y Resolution for high res shots */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Screenshot Settings", Meta = (ClampMin = "0", ClampMax = "10000", UIMin = "0", UIMax = "10000"))
	int ScreenshotResolutionY = 0;

	FHoloPlayScreenshotSettings() {};
	FHoloPlayScreenshotSettings(FString InFileName, FKey InInputKey, int InScreenshotResolutionX = 0, int InScreenshotResolutionY = 0)
	{
		FileName = InFileName;
		InputKey = InInputKey;
		ScreenshotResolutionX = InScreenshotResolutionX;
		ScreenshotResolutionY = InScreenshotResolutionY;
	}
};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayDebugMenuSettings
 *
 * @brief	A HoloPlay debug menu settings.
 * 			2D debug menu with all calibration data from the device
 */

struct FHoloPlayDebugMenuSettings : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlayDebugMenuSettings() {}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	FKey InputKey = EKeys::F7;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	bool debugMode = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	UFont * DebugFont = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	float DebugFontScaleLG = 5.0f;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	FColor DebugFontColor = FColor::Yellow;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	FColor DebugBackgroundColor = FColor::FromHex("2A2A2AFF");

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Debug Settings")
	FVector DebugFontLocation = FVector(0.0f, 0.0f, 0.0f);

	float DebugTileHeight = 10.0f;

	float DebugTileWidth = 150.0f;

	void ToggleDebugMode()
	{
		debugMode = !debugMode;
	}

};

USTRUCT(BlueprintType)

/**
 * @struct	FHoloPlayRenderingSettings
 *
 * @brief	A HoloPlay rendering settings.
 * 			Containts options for disable some part of rendering and manage rendering pipiline
 */

struct FHoloPlayRenderingSettings : public FHoloPlaySettingsBase
{
	GENERATED_BODY()

	virtual ~FHoloPlayRenderingSettings() {}

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Rendering Settings")
	bool bVsync = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Rendering Settings")
	bool bRender = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Rendering Settings")
	bool bRenderScene = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Rendering Settings")
	bool bCopyToQuilt = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Rendering Settings")
	bool bRenderLenticularShader = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "HoloPlay|Rendering Settings")
	bool bRender2D = false;

	virtual void PostEngineInit() override
	{
		UpdateVsync();
	}

	virtual void PreSave() override
	{
		UpdateVsync();
	}

	void UpdateVsync();
};

UCLASS(config = Engine, defaultconfig)

/**
 * @class	UHoloPlaySettings
 *
 * @brief	All HoloPlay plugin settings
 */

class HOLOPLAYRUNTIME_API UHoloPlaySettings : public UObject
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Window Settings", Meta = (DisplayName = "HoloPlay Window Settings"))
	FHoloPlayWindowSettings HoloPlayWindowSettings;

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Screenshot Settings", Meta = (DisplayName = "HoloPlay Lenticular Screenshot"))
	FHoloPlayScreenshotSettings HoloPlayLenticularScreenshotSettings = FHoloPlayScreenshotSettings("LenticularScreenshot", EKeys::F10);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Screenshot Settings", Meta = (DisplayName = "HoloPlay Quilt Screenshot"))
	FHoloPlayScreenshotSettings HoloPlayScreenshotQuiltSettings = FHoloPlayScreenshotSettings("ScreenshotQuilt", EKeys::F9);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Screenshot Settings", Meta = (DisplayName = "HoloPlay Screenshot 2D"))
	FHoloPlayScreenshotSettings HoloPlayScreenshot2DSettings = FHoloPlayScreenshotSettings("Screenshot2D", EKeys::F8, 1280, 720);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = (DisplayName = "Automatic Tiling Settings"))
	FHoloPlayTilingQuality AutomaticSettings = FHoloPlayTilingQuality("Automatic", 8, 6, 3360, 3360);

    UPROPERTY( BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = ( DisplayName = "Portrait Tiling Settings" ) )
    FHoloPlayTilingQuality PortraitSettings = FHoloPlayTilingQuality( "Portrait", 8, 6, 3360, 3360 );

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = (DisplayName = "PortraitHiRes Tiling Settings"))
	FHoloPlayTilingQuality PortraitHiResSettings = FHoloPlayTilingQuality("PortraitHiRes", 8, 6, 3840, 3840);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = (DisplayName = "4K Res Tiling Settings"))
	FHoloPlayTilingQuality FourKSettings = FHoloPlayTilingQuality("4K Res", 5, 9, 4096, 4096);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = (DisplayName = "8K Res Tiling Settings"))
	FHoloPlayTilingQuality EightKSettings = FHoloPlayTilingQuality("8K Res", 5, 9, 8192, 8192);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = (DisplayName = "8.9 Inch (Legacy) Tiling Settings"))
	FHoloPlayTilingQuality EightNineLegacy = FHoloPlayTilingQuality("Extra Low", 5, 9, 4096, 4096);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Tiling Settings", Meta = (DisplayName = "Custom Tiling Settings"))
	FHoloPlayTilingQuality CustomSettings = FHoloPlayTilingQuality("Custom", 5, 9, 4096, 4096, true);

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Shader Settings", Meta = (DisplayName = "HoloPlay Shader Settings"))
	FHoloPlayShaderSettings HoloPlayShaderSettings;

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Scene Settings", Meta = (DisplayName = "HoloPlay Debug Settings"))
	FHoloPlaySceneSettings HoloPlaySceneSettings;

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Debug Settings", Meta = (DisplayName = "HoloPlay Display Debug"))
	FHoloPlayDebugMenuSettings HoloPlayDebugMenuSettings;

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Rendering Settings", Meta = (DisplayName = "HoloPlay Rendering Settings"))
	FHoloPlayRenderingSettings HoloPlayRenderingSettings;

	UPROPERTY(BlueprintReadOnly, GlobalConfig, EditAnywhere, Category = "HoloPlay|Scalability", Meta = (DisplayName = "Scalability Settings"))
	int32 Scalability;

	TArray<FHoloPlaySettingsBase*> HoloPlaySettings;

	UHoloPlaySettings()
	{
		HoloPlaySettings.Add(&HoloPlayWindowSettings);
		HoloPlaySettings.Add(&HoloPlayLenticularScreenshotSettings);
		HoloPlaySettings.Add(&HoloPlayScreenshotQuiltSettings);
		HoloPlaySettings.Add(&HoloPlayScreenshot2DSettings);
		HoloPlaySettings.Add(&AutomaticSettings);
		HoloPlaySettings.Add(&PortraitSettings);
		HoloPlaySettings.Add(&PortraitHiResSettings);
		HoloPlaySettings.Add(&FourKSettings);
		HoloPlaySettings.Add(&EightKSettings);
		HoloPlaySettings.Add(&EightNineLegacy);
		HoloPlaySettings.Add(&CustomSettings);
		HoloPlaySettings.Add(&HoloPlayShaderSettings);
		HoloPlaySettings.Add(&HoloPlaySceneSettings);
		HoloPlaySettings.Add(&HoloPlayDebugMenuSettings);
		HoloPlaySettings.Add(&HoloPlayRenderingSettings);

		Scalability = 3;
	}
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	/**
	 * @fn	virtual void UHoloPlaySettings::PostEngineInit() const;
	 *
	 * @brief	Called after engine initialized
	 */

	virtual void PostEngineInit() const;

	/**
	 * @fn	virtual void UHoloPlaySettings::HoloPlayPreSave() const;
	 *
	 * @brief	Update each settings before save
	 */

	virtual void HoloPlayPreSave() const;


	/**
	 * @fn	void UHoloPlaySettings::HoloPlaySave()
	 *
	 * @brief	Custom UObject save
	 * 			in case of Build it will be save in Saved folder in Editor it will be stored in the Default config folder
	 */

	void HoloPlaySave()
	{
		HoloPlayPreSave();

#if WITH_EDITOR
		this->UpdateDefaultConfigFile();
#else
		this->SaveConfig();
#endif
	}
};

UCLASS(config = Engine)
class HOLOPLAYRUNTIME_API UHoloPlayLaunchSettings : public UObject
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Settings", GlobalConfig, VisibleAnywhere)
	int LaunchCounter = 0;
};