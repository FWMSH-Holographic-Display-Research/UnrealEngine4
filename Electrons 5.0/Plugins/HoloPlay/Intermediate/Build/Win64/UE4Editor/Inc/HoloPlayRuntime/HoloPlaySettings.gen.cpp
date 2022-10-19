// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/HoloPlaySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlaySettings() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowAutoCenter();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowType();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayRenderingSettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlaySettingsBase();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlaySceneSettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayShaderSettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayConfigValues();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayWindowSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayTilingQuality();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySettings_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayLaunchSettings_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayLaunchSettings();
// End Cross Module References
	static UEnum* EHoloPlayQualitySettings_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("EHoloPlayQualitySettings"));
		}
		return Singleton;
	}
	template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayQualitySettings>()
	{
		return EHoloPlayQualitySettings_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoloPlayQualitySettings(EHoloPlayQualitySettings_StaticEnum, TEXT("/Script/HoloPlayRuntime"), TEXT("EHoloPlayQualitySettings"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings_Hash() { return 2499600980U; }
	UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoloPlayQualitySettings"), 0, Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoloPlayQualitySettings::Q_Automatic", (int64)EHoloPlayQualitySettings::Q_Automatic },
				{ "EHoloPlayQualitySettings::Q_Portrait", (int64)EHoloPlayQualitySettings::Q_Portrait },
				{ "EHoloPlayQualitySettings::Q_PortraitHighRes", (int64)EHoloPlayQualitySettings::Q_PortraitHighRes },
				{ "EHoloPlayQualitySettings::Q_FourK", (int64)EHoloPlayQualitySettings::Q_FourK },
				{ "EHoloPlayQualitySettings::Q_EightK", (int64)EHoloPlayQualitySettings::Q_EightK },
				{ "EHoloPlayQualitySettings::Q_EightPointNineLegacy", (int64)EHoloPlayQualitySettings::Q_EightPointNineLegacy },
				{ "EHoloPlayQualitySettings::Q_Custom", (int64)EHoloPlayQualitySettings::Q_Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * @enum\x09""EHoloPlayQualitySettings\n *\n * @brief\x09Values that represent HoloPlay quality settings\n */" },
				{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
				{ "Q_Automatic.DisplayName", "Automatic" },
				{ "Q_Automatic.Name", "EHoloPlayQualitySettings::Q_Automatic" },
				{ "Q_Custom.DisplayName", "Custom" },
				{ "Q_Custom.Name", "EHoloPlayQualitySettings::Q_Custom" },
				{ "Q_EightK.DisplayName", "8K Res" },
				{ "Q_EightK.Name", "EHoloPlayQualitySettings::Q_EightK" },
				{ "Q_EightPointNineLegacy.DisplayName", "8.9 Inch Legacy" },
				{ "Q_EightPointNineLegacy.Name", "EHoloPlayQualitySettings::Q_EightPointNineLegacy" },
				{ "Q_FourK.DisplayName", "4K Res" },
				{ "Q_FourK.Name", "EHoloPlayQualitySettings::Q_FourK" },
				{ "Q_Portrait.DisplayName", "Portrait" },
				{ "Q_Portrait.Name", "EHoloPlayQualitySettings::Q_Portrait" },
				{ "Q_PortraitHighRes.DisplayName", "Portrait High Res" },
				{ "Q_PortraitHighRes.Name", "EHoloPlayQualitySettings::Q_PortraitHighRes" },
				{ "ScriptName", "HoloPlayQualitySettings" },
				{ "ToolTip", "@enum       EHoloPlayQualitySettings\n\n@brief      Values that represent HoloPlay quality settings" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
				nullptr,
				"EHoloPlayQualitySettings",
				"EHoloPlayQualitySettings",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoloPlayWindowAutoCenter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowAutoCenter, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("EHoloPlayWindowAutoCenter"));
		}
		return Singleton;
	}
	template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayWindowAutoCenter>()
	{
		return EHoloPlayWindowAutoCenter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoloPlayWindowAutoCenter(EHoloPlayWindowAutoCenter_StaticEnum, TEXT("/Script/HoloPlayRuntime"), TEXT("EHoloPlayWindowAutoCenter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowAutoCenter_Hash() { return 2659056616U; }
	UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowAutoCenter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoloPlayWindowAutoCenter"), 0, Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowAutoCenter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoloPlayWindowAutoCenter::None", (int64)EHoloPlayWindowAutoCenter::None },
				{ "EHoloPlayWindowAutoCenter::PrimaryWorkArea", (int64)EHoloPlayWindowAutoCenter::PrimaryWorkArea },
				{ "EHoloPlayWindowAutoCenter::PreferredWorkArea", (int64)EHoloPlayWindowAutoCenter::PreferredWorkArea },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * @enum\x09""EHoloPlayWindowAutoCenter\n *\n * @brief\x09Values that represent HoloPlay window Automatic centers\n */" },
				{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
				{ "None.Comment", "/** Don't auto-center the window */" },
				{ "None.Name", "EHoloPlayWindowAutoCenter::None" },
				{ "None.ToolTip", "Don't auto-center the window" },
				{ "PreferredWorkArea.Comment", "/** Auto-center the window on the preferred work area, determined using GetPreferredWorkArea() */" },
				{ "PreferredWorkArea.Name", "EHoloPlayWindowAutoCenter::PreferredWorkArea" },
				{ "PreferredWorkArea.ToolTip", "Auto-center the window on the preferred work area, determined using GetPreferredWorkArea()" },
				{ "PrimaryWorkArea.Comment", "/** Auto-center the window on the primary work area */" },
				{ "PrimaryWorkArea.Name", "EHoloPlayWindowAutoCenter::PrimaryWorkArea" },
				{ "PrimaryWorkArea.ToolTip", "Auto-center the window on the primary work area" },
				{ "ScriptName", "HoloPlayWindowAutoCenter" },
				{ "ToolTip", "@enum       EHoloPlayWindowAutoCenter\n\n@brief      Values that represent HoloPlay window Automatic centers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
				nullptr,
				"EHoloPlayWindowAutoCenter",
				"EHoloPlayWindowAutoCenter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoloPlayWindowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowType, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("EHoloPlayWindowType"));
		}
		return Singleton;
	}
	template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayWindowType>()
	{
		return EHoloPlayWindowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoloPlayWindowType(EHoloPlayWindowType_StaticEnum, TEXT("/Script/HoloPlayRuntime"), TEXT("EHoloPlayWindowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowType_Hash() { return 1905448371U; }
	UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoloPlayWindowType"), 0, Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoloPlayWindowType::Fullscreen", (int64)EHoloPlayWindowType::Fullscreen },
				{ "EHoloPlayWindowType::WindowedFullscreen", (int64)EHoloPlayWindowType::WindowedFullscreen },
				{ "EHoloPlayWindowType::Windowed", (int64)EHoloPlayWindowType::Windowed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * @enum\x09""EHoloPlayWindowType\n *\n * @brief\x09Values that represent HoloPlay window types\n */" },
				{ "Fullscreen.Comment", "/** The window is in true fullscreen mode */" },
				{ "Fullscreen.DisplayName", "Fullscreen" },
				{ "Fullscreen.Name", "EHoloPlayWindowType::Fullscreen" },
				{ "Fullscreen.ToolTip", "The window is in true fullscreen mode" },
				{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
				{ "ScriptName", "HoloPlayWindowType" },
				{ "ToolTip", "@enum       EHoloPlayWindowType\n\n@brief      Values that represent HoloPlay window types" },
				{ "Windowed.Comment", "/** The window has a border and may not take up the entire screen area */" },
				{ "Windowed.DisplayName", "Windowed" },
				{ "Windowed.Name", "EHoloPlayWindowType::Windowed" },
				{ "Windowed.ToolTip", "The window has a border and may not take up the entire screen area" },
				{ "WindowedFullscreen.Comment", "/** The window has no border and takes up the entire area of the screen */" },
				{ "WindowedFullscreen.DisplayName", "WindowedFullscreen" },
				{ "WindowedFullscreen.Name", "EHoloPlayWindowType::WindowedFullscreen" },
				{ "WindowedFullscreen.ToolTip", "The window has no border and takes up the entire area of the screen" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
				nullptr,
				"EHoloPlayWindowType",
				"EHoloPlayWindowType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHoloPlayModeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("EHoloPlayModeType"));
		}
		return Singleton;
	}
	template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayModeType>()
	{
		return EHoloPlayModeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoloPlayModeType(EHoloPlayModeType_StaticEnum, TEXT("/Script/HoloPlayRuntime"), TEXT("EHoloPlayModeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType_Hash() { return 2505137947U; }
	UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoloPlayModeType"), 0, Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoloPlayModeType::PlayMode_InSeparateWindow", (int64)EHoloPlayModeType::PlayMode_InSeparateWindow },
				{ "EHoloPlayModeType::PlayMode_InMainViewport", (int64)EHoloPlayModeType::PlayMode_InMainViewport },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * @enum\x09""EHoloPlayModeType\n *\n * @brief\x09Values that represent HoloPlay mode types\n */" },
				{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
				{ "PlayMode_InMainViewport.DisplayName", "In Main Viewport" },
				{ "PlayMode_InMainViewport.Name", "EHoloPlayModeType::PlayMode_InMainViewport" },
				{ "PlayMode_InSeparateWindow.DisplayName", "In Separate Window" },
				{ "PlayMode_InSeparateWindow.Name", "EHoloPlayModeType::PlayMode_InSeparateWindow" },
				{ "ScriptName", "HoloPlayPlayMode" },
				{ "ToolTip", "@enum       EHoloPlayModeType\n\n@brief      Values that represent HoloPlay mode types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
				nullptr,
				"EHoloPlayModeType",
				"EHoloPlayModeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FHoloPlayRenderingSettings>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayRenderingSettings cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayRenderingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayRenderingSettings"), sizeof(FHoloPlayRenderingSettings), Get_Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayRenderingSettings>()
{
	return FHoloPlayRenderingSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayRenderingSettings(FHoloPlayRenderingSettings::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayRenderingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayRenderingSettings
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayRenderingSettings()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayRenderingSettings>(FName(TEXT("HoloPlayRenderingSettings")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayRenderingSettings;
	struct Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVsync_MetaData[];
#endif
		static void NewProp_bVsync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVsync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRender_MetaData[];
#endif
		static void NewProp_bRender_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderScene_MetaData[];
#endif
		static void NewProp_bRenderScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyToQuilt_MetaData[];
#endif
		static void NewProp_bCopyToQuilt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyToQuilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderLenticularShader_MetaData[];
#endif
		static void NewProp_bRenderLenticularShader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderLenticularShader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRender2D_MetaData[];
#endif
		static void NewProp_bRender2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRender2D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayRenderingSettings\n *\n * @brief\x09""A HoloPlay rendering settings.\n * \x09\x09\x09""Containts options for disable some part of rendering and manage rendering pipiline\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayRenderingSettings\n\n@brief      A HoloPlay rendering settings.\n                    Containts options for disable some part of rendering and manage rendering pipiline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayRenderingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bVsync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync = { "bVsync", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bRender = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender = { "bRender", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bRenderScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene = { "bRenderScene", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bCopyToQuilt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt = { "bCopyToQuilt", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bRenderLenticularShader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader = { "bRenderLenticularShader", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bRender2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D = { "bRender2D", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bCopyToQuilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRenderLenticularShader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayRenderingSettings",
		sizeof(FHoloPlayRenderingSettings),
		alignof(FHoloPlayRenderingSettings),
		Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayRenderingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayRenderingSettings"), sizeof(FHoloPlayRenderingSettings), Get_Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Hash() { return 2441123464U; }

static_assert(std::is_polymorphic<FHoloPlayDebugMenuSettings>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayDebugMenuSettings cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayDebugMenuSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayDebugMenuSettings"), sizeof(FHoloPlayDebugMenuSettings), Get_Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayDebugMenuSettings>()
{
	return FHoloPlayDebugMenuSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayDebugMenuSettings(FHoloPlayDebugMenuSettings::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayDebugMenuSettings"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayDebugMenuSettings
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayDebugMenuSettings()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayDebugMenuSettings>(FName(TEXT("HoloPlayDebugMenuSettings")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayDebugMenuSettings;
	struct Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_debugMode_MetaData[];
#endif
		static void NewProp_debugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_debugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFontScaleLG_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugFontScaleLG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugFontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugBackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugFontLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugFontLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayDebugMenuSettings\n *\n * @brief\x09""A HoloPlay debug menu settings.\n * \x09\x09\x09""2D debug menu with all calibration data from the device\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayDebugMenuSettings\n\n@brief      A HoloPlay debug menu settings.\n                    2D debug menu with all calibration data from the device" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayDebugMenuSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayDebugMenuSettings, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode_SetBit(void* Obj)
	{
		((FHoloPlayDebugMenuSettings*)Obj)->debugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode = { "debugMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayDebugMenuSettings), &Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFont_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFont = { "DebugFont", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayDebugMenuSettings, DebugFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontScaleLG_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontScaleLG = { "DebugFontScaleLG", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayDebugMenuSettings, DebugFontScaleLG), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontScaleLG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontScaleLG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontColor_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontColor = { "DebugFontColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayDebugMenuSettings, DebugFontColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugBackgroundColor_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugBackgroundColor = { "DebugBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayDebugMenuSettings, DebugBackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontLocation_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontLocation = { "DebugFontLocation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayDebugMenuSettings, DebugFontLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_debugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontScaleLG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugBackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::NewProp_DebugFontLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayDebugMenuSettings",
		sizeof(FHoloPlayDebugMenuSettings),
		alignof(FHoloPlayDebugMenuSettings),
		Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayDebugMenuSettings"), sizeof(FHoloPlayDebugMenuSettings), Get_Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Hash() { return 3708330498U; }

static_assert(std::is_polymorphic<FHoloPlayScreenshotSettings>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayScreenshotSettings cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayScreenshotSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayScreenshotSettings"), sizeof(FHoloPlayScreenshotSettings), Get_Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayScreenshotSettings>()
{
	return FHoloPlayScreenshotSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayScreenshotSettings(FHoloPlayScreenshotSettings::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayScreenshotSettings"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayScreenshotSettings
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayScreenshotSettings()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayScreenshotSettings>(FName(TEXT("HoloPlayScreenshotSettings")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayScreenshotSettings;
	struct Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotResolutionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScreenshotResolutionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotResolutionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScreenshotResolutionY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayScreenshotSettings\n *\n * @brief\x09""A HoloPlay screenshot settings.\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayScreenshotSettings\n\n@brief      A HoloPlay screenshot settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayScreenshotSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionX_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/* X Resolution for high res shots */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "X Resolution for high res shots" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionX = { "ScreenshotResolutionX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, ScreenshotResolutionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionY_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Y Resolution for high res shots */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Y Resolution for high res shots" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionY = { "ScreenshotResolutionY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, ScreenshotResolutionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_ScreenshotResolutionY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayScreenshotSettings",
		sizeof(FHoloPlayScreenshotSettings),
		alignof(FHoloPlayScreenshotSettings),
		Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayScreenshotSettings"), sizeof(FHoloPlayScreenshotSettings), Get_Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Hash() { return 1503523582U; }

static_assert(std::is_polymorphic<FHoloPlaySceneSettings>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlaySceneSettings cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlaySceneSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlaySceneSettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlaySceneSettings"), sizeof(FHoloPlaySceneSettings), Get_Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlaySceneSettings>()
{
	return FHoloPlaySceneSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlaySceneSettings(FHoloPlaySceneSettings::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlaySceneSettings"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlaySceneSettings
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlaySceneSettings()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlaySceneSettings>(FName(TEXT("HoloPlaySceneSettings")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlaySceneSettings;
	struct Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlaySceneSettings\n *\n * @brief\x09""A HoloPlay scene settings.\n * \x09\x09\x09Using mostly for debugging\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlaySceneSettings\n\n@brief      A HoloPlay scene settings.\n                    Using mostly for debugging" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlaySceneSettings>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlaySceneSettings",
		sizeof(FHoloPlaySceneSettings),
		alignof(FHoloPlaySceneSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlaySceneSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlaySceneSettings"), sizeof(FHoloPlaySceneSettings), Get_Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Hash() { return 2360298714U; }

static_assert(std::is_polymorphic<FHoloPlayShaderSettings>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayShaderSettings cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayShaderSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayShaderSettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayShaderSettings"), sizeof(FHoloPlayShaderSettings), Get_Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayShaderSettings>()
{
	return FHoloPlayShaderSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayShaderSettings(FHoloPlayShaderSettings::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayShaderSettings"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayShaderSettings
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayShaderSettings()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayShaderSettings>(FName(TEXT("HoloPlayShaderSettings")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayShaderSettings;
	struct Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiltMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuiltMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlipYTexCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FlipYTexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomAspect_MetaData[];
#endif
		static void NewProp_bUseCustomAspect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomAspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slope_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_slope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibrationAspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalibrationAspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewCone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_viewCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_invView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_invView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_verticalAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_verticalAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DPI_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flipImageX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flipImageX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flipImageY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flipImageY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAspectX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomAspectX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAspectY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomAspectY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flipSubp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flipSubp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Model;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayShaderSettings\n *\n * @brief\x09""A HoloPlay shader settings.\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayShaderSettings\n\n@brief      A HoloPlay shader settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayShaderSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_QuiltMode_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_QuiltMode = { "QuiltMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, QuiltMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_QuiltMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_QuiltMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_FlipYTexCoords_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_FlipYTexCoords = { "FlipYTexCoords", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, FlipYTexCoords), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_FlipYTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_FlipYTexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect_SetBit(void* Obj)
	{
		((FHoloPlayShaderSettings*)Obj)->bUseCustomAspect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect = { "bUseCustomAspect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayShaderSettings), &Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Pitch" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, Pitch), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_slope_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Slope" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_slope = { "slope", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, slope), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_slope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_slope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_center_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Center" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_center = { "center", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, center), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CalibrationAspect_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Calibration Aspect" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CalibrationAspect = { "CalibrationAspect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, CalibrationAspect), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CalibrationAspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CalibrationAspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_viewCone_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "View Cone" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_viewCone = { "viewCone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, viewCone), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_viewCone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_viewCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_invView_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "View Inversion" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_invView = { "invView", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, invView), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_invView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_invView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_verticalAngle_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Vertical Angle" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_verticalAngle = { "verticalAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, verticalAngle), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_verticalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_verticalAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_DPI_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "DPI" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_DPI = { "DPI", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, DPI), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_DPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_DPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageX_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Flip Image X" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageX = { "flipImageX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, flipImageX), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageY_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Flip Image Y" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageY = { "flipImageY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, flipImageY), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectX_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectX = { "CustomAspectX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, CustomAspectX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectY_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectY = { "CustomAspectY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, CustomAspectY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipSubp_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Flip Subpixels" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipSubp = { "flipSubp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, flipSubp), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipSubp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipSubp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenWidth_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Screen Width" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenWidth = { "ScreenWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, ScreenWidth), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenHeight_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Screen Height" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenHeight = { "ScreenHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, ScreenHeight), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "Model" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayShaderSettings, Model), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Model_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_QuiltMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_FlipYTexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_bUseCustomAspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_slope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CalibrationAspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_viewCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_invView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_verticalAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_DPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipImageY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_CustomAspectY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_flipSubp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_ScreenHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::NewProp_Model,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayShaderSettings",
		sizeof(FHoloPlayShaderSettings),
		alignof(FHoloPlayShaderSettings),
		Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayShaderSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayShaderSettings"), sizeof(FHoloPlayShaderSettings), Get_Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Hash() { return 69944252U; }

static_assert(std::is_polymorphic<FHoloPlayWindowSettings>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayWindowSettings cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayWindowSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayWindowSettings, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayWindowSettings"), sizeof(FHoloPlayWindowSettings), Get_Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayWindowSettings>()
{
	return FHoloPlayWindowSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayWindowSettings(FHoloPlayWindowSettings::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayWindowSettings"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayWindowSettings
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayWindowSettings()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayWindowSettings>(FName(TEXT("HoloPlayWindowSettings")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayWindowSettings;
	struct Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBorderlessWindow_MetaData[];
#endif
		static void NewProp_bUseBorderlessWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBorderlessWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseOSWindowBorder_MetaData[];
#endif
		static void NewProp_bUseOSWindowBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOSWindowBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderDirectlyToWindowInSeparateWindow_MetaData[];
#endif
		static void NewProp_RenderDirectlyToWindowInSeparateWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderDirectlyToWindowInSeparateWindow;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindowType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowAutoCenter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowAutoCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindowAutoCenter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastExecutedPlayModeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastExecutedPlayModeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastExecutedPlayModeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockInMainViewport_MetaData[];
#endif
		static void NewProp_bLockInMainViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockInMainViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlacementInHoloPlay_MetaData[];
#endif
		static void NewProp_bAutoPlacementInHoloPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlacementInHoloPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScreenIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayWindowSettings\n *\n * @brief\x09""A HoloPlay window settings.\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayWindowSettings\n\n@brief      A HoloPlay window settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayWindowSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ClientSize_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "HoloPlay Window Size" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ClientSize = { "ClientSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, ClientSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ClientSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ClientSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "HoloPlay Screen Position" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "Borderless Window" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow_SetBit(void* Obj)
	{
		((FHoloPlayWindowSettings*)Obj)->bUseBorderlessWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow = { "bUseBorderlessWindow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayWindowSettings), &Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "Using OS Native Window Border" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder_SetBit(void* Obj)
	{
		((FHoloPlayWindowSettings*)Obj)->bUseOSWindowBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder = { "bUseOSWindowBorder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayWindowSettings), &Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "Render Directly to Separate Window" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow_SetBit(void* Obj)
	{
		((FHoloPlayWindowSettings*)Obj)->RenderDirectlyToWindowInSeparateWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow = { "RenderDirectlyToWindowInSeparateWindow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayWindowSettings), &Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "Window Type" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, WindowType), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "Window Location" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter = { "WindowAutoCenter", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, WindowAutoCenter), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayWindowAutoCenter, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "Window Location" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType = { "LastExecutedPlayModeType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, LastExecutedPlayModeType), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_SetBit(void* Obj)
	{
		((FHoloPlayWindowSettings*)Obj)->bLockInMainViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport = { "bLockInMainViewport", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayWindowSettings), &Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay_SetBit(void* Obj)
	{
		((FHoloPlayWindowSettings*)Obj)->bAutoPlacementInHoloPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay = { "bAutoPlacementInHoloPlay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayWindowSettings), &Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex = { "ScreenIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, ScreenIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ClientSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseBorderlessWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bUseOSWindowBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_RenderDirectlyToWindowInSeparateWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_WindowAutoCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bAutoPlacementInHoloPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayWindowSettings",
		sizeof(FHoloPlayWindowSettings),
		alignof(FHoloPlayWindowSettings),
		Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayWindowSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayWindowSettings"), sizeof(FHoloPlayWindowSettings), Get_Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Hash() { return 2424935771U; }

static_assert(std::is_polymorphic<FHoloPlayConfigValues>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayConfigValues cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayConfigValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayConfigValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayConfigValues, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayConfigValues"), sizeof(FHoloPlayConfigValues), Get_Z_Construct_UScriptStruct_FHoloPlayConfigValues_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayConfigValues>()
{
	return FHoloPlayConfigValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayConfigValues(FHoloPlayConfigValues::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayConfigValues"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayConfigValues
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayConfigValues()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayConfigValues>(FName(TEXT("HoloPlayConfigValues")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayConfigValues;
	struct Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayConfigValues\n *\n * @brief\x09""Default Screen Config Values\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayConfigValues\n\n@brief      Default Screen Config Values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayConfigValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayConfigValues, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayConfigValues, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayConfigValues, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayConfigValues, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayConfigValues",
		sizeof(FHoloPlayConfigValues),
		alignof(FHoloPlayConfigValues),
		Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayConfigValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayConfigValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayConfigValues"), sizeof(FHoloPlayConfigValues), Get_Z_Construct_UScriptStruct_FHoloPlayConfigValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayConfigValues_Hash() { return 3192422684U; }

static_assert(std::is_polymorphic<FHoloPlayTilingQuality>() == std::is_polymorphic<FHoloPlaySettingsBase>(), "USTRUCT FHoloPlayTilingQuality cannot be polymorphic unless super FHoloPlaySettingsBase is polymorphic");

class UScriptStruct* FHoloPlayTilingQuality::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayTilingQuality, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayTilingQuality"), sizeof(FHoloPlayTilingQuality), Get_Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayTilingQuality>()
{
	return FHoloPlayTilingQuality::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayTilingQuality(FHoloPlayTilingQuality::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayTilingQuality"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayTilingQuality
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayTilingQuality()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayTilingQuality>(FName(TEXT("HoloPlayTilingQuality")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayTilingQuality;
	struct Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiltW_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuiltW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiltH_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_QuiltH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overscan_MetaData[];
#endif
		static void NewProp_Overscan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Overscan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TileSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TileSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PaddingX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PaddingY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PortionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PortionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTilingEditable_MetaData[];
#endif
		static void NewProp_bTilingEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTilingEditable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayTilingQuality\n *\n * @brief\x09""A HoloPlay tiling quality.\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayTilingQuality\n\n@brief      A HoloPlay tiling quality." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayTilingQuality>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bTilingEditable" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX = { "TilesX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, TilesX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "160" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bTilingEditable" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY = { "TilesY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, TilesY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "512" },
		{ "EditCondition", "bTilingEditable" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "8192" },
		{ "UIMin", "512" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW = { "QuiltW", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, QuiltW), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "512" },
		{ "EditCondition", "bTilingEditable" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "8192" },
		{ "UIMin", "512" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH = { "QuiltH", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, QuiltH), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_SetBit(void* Obj)
	{
		((FHoloPlayTilingQuality*)Obj)->Overscan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan = { "Overscan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayTilingQuality), &Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeX_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeX = { "TileSizeX", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, TileSizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeY_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeY = { "TileSizeY", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, TileSizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingX_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingX = { "PaddingX", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, PaddingX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingY_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingY = { "PaddingY", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, PaddingY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionX_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionX = { "PortionX", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, PortionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionY_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionY = { "PortionY", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, PortionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_SetBit(void* Obj)
	{
		((FHoloPlayTilingQuality*)Obj)->bTilingEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable = { "bTilingEditable", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayTilingQuality), &Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TileSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PaddingY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_PortionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		Z_Construct_UScriptStruct_FHoloPlaySettingsBase,
		&NewStructOps,
		"HoloPlayTilingQuality",
		sizeof(FHoloPlayTilingQuality),
		alignof(FHoloPlayTilingQuality),
		Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayTilingQuality()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayTilingQuality"), sizeof(FHoloPlayTilingQuality), Get_Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Hash() { return 3698159311U; }
class UScriptStruct* FHoloPlaySettingsBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlaySettingsBase, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlaySettingsBase"), sizeof(FHoloPlaySettingsBase), Get_Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlaySettingsBase>()
{
	return FHoloPlaySettingsBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlaySettingsBase(FHoloPlaySettingsBase::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlaySettingsBase"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlaySettingsBase
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlaySettingsBase()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlaySettingsBase>(FName(TEXT("HoloPlaySettingsBase")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlaySettingsBase;
	struct Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * @struct\x09""FHoloPlaySettingsBase\n *\n * @brief\x09""Base settings class for using shared functionality between different settings\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlaySettingsBase\n\n@brief      Base settings class for using shared functionality between different settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlaySettingsBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		nullptr,
		&NewStructOps,
		"HoloPlaySettingsBase",
		sizeof(FHoloPlaySettingsBase),
		alignof(FHoloPlaySettingsBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlaySettingsBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlaySettingsBase"), sizeof(FHoloPlaySettingsBase), Get_Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Hash() { return 3850445498U; }
	void UHoloPlaySettings::StaticRegisterNativesUHoloPlaySettings()
	{
	}
	UClass* Z_Construct_UClass_UHoloPlaySettings_NoRegister()
	{
		return UHoloPlaySettings::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayWindowSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayWindowSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayLenticularScreenshotSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayLenticularScreenshotSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayScreenshotQuiltSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayScreenshotQuiltSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayScreenshot2DSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayScreenshot2DSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutomaticSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortraitSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PortraitSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortraitHiResSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PortraitHiResSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourKSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FourKSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EightKSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EightKSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EightNineLegacy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EightNineLegacy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayShaderSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayShaderSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlaySceneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlaySceneSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayDebugMenuSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayDebugMenuSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayRenderingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayRenderingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Scalability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoloPlaySettings.h" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings_MetaData[] = {
		{ "Category", "HoloPlay|Window Settings" },
		{ "DisplayName", "HoloPlay Window Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings = { "HoloPlayWindowSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayWindowSettings), Z_Construct_UScriptStruct_FHoloPlayWindowSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "DisplayName", "HoloPlay Lenticular Screenshot" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings = { "HoloPlayLenticularScreenshotSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayLenticularScreenshotSettings), Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "DisplayName", "HoloPlay Quilt Screenshot" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings = { "HoloPlayScreenshotQuiltSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayScreenshotQuiltSettings), Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "DisplayName", "HoloPlay Screenshot 2D" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings = { "HoloPlayScreenshot2DSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayScreenshot2DSettings), Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "Automatic Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings = { "AutomaticSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, AutomaticSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "Portrait Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings = { "PortraitSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, PortraitSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "PortraitHiRes Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings = { "PortraitHiResSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, PortraitHiResSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "4K Res Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings = { "FourKSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, FourKSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "8K Res Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings = { "EightKSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, EightKSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "8.9 Inch (Legacy) Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy = { "EightNineLegacy", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, EightNineLegacy), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "Custom Tiling Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings = { "CustomSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, CustomSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayShaderSettings_MetaData[] = {
		{ "Category", "HoloPlay|Shader Settings" },
		{ "DisplayName", "HoloPlay Shader Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayShaderSettings = { "HoloPlayShaderSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayShaderSettings), Z_Construct_UScriptStruct_FHoloPlayShaderSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayShaderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayShaderSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlaySceneSettings_MetaData[] = {
		{ "Category", "HoloPlay|Scene Settings" },
		{ "DisplayName", "HoloPlay Debug Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlaySceneSettings = { "HoloPlaySceneSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlaySceneSettings), Z_Construct_UScriptStruct_FHoloPlaySceneSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlaySceneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlaySceneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayDebugMenuSettings_MetaData[] = {
		{ "Category", "HoloPlay|Debug Settings" },
		{ "DisplayName", "HoloPlay Display Debug" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayDebugMenuSettings = { "HoloPlayDebugMenuSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayDebugMenuSettings), Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayDebugMenuSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayDebugMenuSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings_MetaData[] = {
		{ "Category", "HoloPlay|Rendering Settings" },
		{ "DisplayName", "HoloPlay Rendering Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings = { "HoloPlayRenderingSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayRenderingSettings), Z_Construct_UScriptStruct_FHoloPlayRenderingSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_Scalability_MetaData[] = {
		{ "Category", "HoloPlay|Scalability" },
		{ "DisplayName", "Scalability Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_Scalability = { "Scalability", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, Scalability), METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_Scalability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_Scalability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoloPlaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayShaderSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlaySceneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayDebugMenuSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_Scalability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlaySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlaySettings_Statics::ClassParams = {
		&UHoloPlaySettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoloPlaySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlaySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlaySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlaySettings, 881083266);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlaySettings>()
	{
		return UHoloPlaySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlaySettings(Z_Construct_UClass_UHoloPlaySettings, &UHoloPlaySettings::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlaySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlaySettings);
	void UHoloPlayLaunchSettings::StaticRegisterNativesUHoloPlayLaunchSettings()
	{
	}
	UClass* Z_Construct_UClass_UHoloPlayLaunchSettings_NoRegister()
	{
		return UHoloPlayLaunchSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlayLaunchSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LaunchCounter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoloPlaySettings.h" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::NewProp_LaunchCounter_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::NewProp_LaunchCounter = { "LaunchCounter", nullptr, (EPropertyFlags)0x0010000000064015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayLaunchSettings, LaunchCounter), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::NewProp_LaunchCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::NewProp_LaunchCounter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::NewProp_LaunchCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlayLaunchSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::ClassParams = {
		&UHoloPlayLaunchSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlayLaunchSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlayLaunchSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlayLaunchSettings, 1094003978);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlayLaunchSettings>()
	{
		return UHoloPlayLaunchSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlayLaunchSettings(Z_Construct_UClass_UHoloPlayLaunchSettings, &UHoloPlayLaunchSettings::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlayLaunchSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlayLaunchSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
