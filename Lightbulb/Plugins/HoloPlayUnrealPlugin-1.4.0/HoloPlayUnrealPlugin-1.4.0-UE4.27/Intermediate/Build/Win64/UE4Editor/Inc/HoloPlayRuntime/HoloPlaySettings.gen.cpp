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
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayPlacement();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayRenderingSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayWindowSettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayWindowLocation();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayTilingQuality();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySettings_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayLaunchSettings_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayLaunchSettings();
// End Cross Module References
	static UEnum* EHoloPlayPlacement_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayPlacement, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("EHoloPlayPlacement"));
		}
		return Singleton;
	}
	template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayPlacement>()
	{
		return EHoloPlayPlacement_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoloPlayPlacement(EHoloPlayPlacement_StaticEnum, TEXT("/Script/HoloPlayRuntime"), TEXT("EHoloPlayPlacement"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayPlacement_Hash() { return 1245648335U; }
	UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayPlacement()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoloPlayPlacement"), 0, Get_Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayPlacement_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoloPlayPlacement::Automatic", (int64)EHoloPlayPlacement::Automatic },
				{ "EHoloPlayPlacement::CustomWindow", (int64)EHoloPlayPlacement::CustomWindow },
				{ "EHoloPlayPlacement::AlwaysDebugWindow", (int64)EHoloPlayPlacement::AlwaysDebugWindow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysDebugWindow.DisplayName", "Always render in popup window" },
				{ "AlwaysDebugWindow.Name", "EHoloPlayPlacement::AlwaysDebugWindow" },
				{ "Automatic.DisplayName", "Automatically place on device" },
				{ "Automatic.Name", "EHoloPlayPlacement::Automatic" },
				{ "BlueprintType", "true" },
				{ "CustomWindow.DisplayName", "Specify display location" },
				{ "CustomWindow.Name", "EHoloPlayPlacement::CustomWindow" },
				{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
				{ "ScriptName", "HoloPlayPlacement" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
				nullptr,
				"EHoloPlayPlacement",
				"EHoloPlayPlacement",
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiltMode_MetaData[];
#endif
		static void NewProp_QuiltMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_QuiltMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRender2D_MetaData[];
#endif
		static void NewProp_bRender2D_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRender2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomAspect_MetaData[];
#endif
		static void NewProp_bUseCustomAspect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomAspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomAspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomAspect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct\x09""FHoloPlayRenderingSettings\n *\n * @brief\x09""A HoloPlay rendering settings.\n * \x09\x09\x09""Contains options for disable some part of rendering and manage rendering pipeline\n */" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@struct     FHoloPlayRenderingSettings\n\n@brief      A HoloPlay rendering settings.\n                    Contains options for disable some part of rendering and manage rendering pipeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayRenderingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_MetaData[] = {
		{ "Category", "HoloPlay|Rendering" },
		{ "Comment", "// This property controls r.vsync engine's cvar\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "This property controls r.vsync engine's cvar" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bVsync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync = { "bVsync", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode_MetaData[] = {
		{ "Category", "HoloPlay|Rendering" },
		{ "Comment", "// Render quilt instead of hologram\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Render quilt instead of hologram" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->QuiltMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode = { "QuiltMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_MetaData[] = {
		{ "Category", "HoloPlay|Rendering" },
		{ "Comment", "// Render regular \"2D\" image instead of hologram\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Render regular \"2D\" image instead of hologram" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bRender2D = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D = { "bRender2D", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect_MetaData[] = {
		{ "Category", "HoloPlay|Rendering" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect_SetBit(void* Obj)
	{
		((FHoloPlayRenderingSettings*)Obj)->bUseCustomAspect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect = { "bUseCustomAspect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayRenderingSettings), &Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_CustomAspect_MetaData[] = {
		{ "Category", "HoloPlay|Rendering" },
		{ "Comment", "// Custom aspect for rendering, using value X/Y, also configurable from plugin's toolbar\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Custom aspect for rendering, using value X/Y, also configurable from plugin's toolbar" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_CustomAspect = { "CustomAspect", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayRenderingSettings, CustomAspect), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_CustomAspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_CustomAspect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bVsync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_QuiltMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bRender2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_bUseCustomAspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::NewProp_CustomAspect,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		nullptr,
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
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Hash() { return 4007217745U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResolutionVisible_MetaData[];
#endif
		static void NewProp_bResolutionVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResolutionVisible;
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
		{ "Comment", "// Prefix of the generated screenshot file name\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Prefix of the generated screenshot file name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "Comment", "// Hotkey used to activate this screenshot\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Hotkey used to activate this screenshot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "// Resolution of the generated image file\n" },
		{ "EditCondition", "bResolutionVisible" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Resolution of the generated image file" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayScreenshotSettings, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible_MetaData[] = {
		{ "Comment", "// Hidden property used to control visibility of \"Resolution\" property\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Hidden property used to control visibility of \"Resolution\" property" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible_SetBit(void* Obj)
	{
		((FHoloPlayScreenshotSettings*)Obj)->bResolutionVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible = { "bResolutionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayScreenshotSettings), &Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::NewProp_bResolutionVisible,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		nullptr,
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
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Hash() { return 1951543440U; }
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlacementMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlacementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomWindowLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomWindowLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugWindowLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugWindowLocation;
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode_MetaData[] = {
		{ "Category", "HoloPlay|Window" },
		{ "Comment", "// Where to place rendering window\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Where to place rendering window" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode = { "PlacementMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, PlacementMode), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayPlacement, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex_MetaData[] = {
		{ "Category", "HoloPlay|Window" },
		{ "Comment", "// Index of HoloPlay device where we'll render\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Index of HoloPlay device where we'll render" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex = { "ScreenIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, ScreenIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_CustomWindowLocation_MetaData[] = {
		{ "Category", "HoloPlay|Window" },
		{ "Comment", "// Location of device, use when automatic detection fails\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Location of device, use when automatic detection fails" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_CustomWindowLocation = { "CustomWindowLocation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, CustomWindowLocation), Z_Construct_UScriptStruct_FHoloPlayWindowLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_CustomWindowLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_CustomWindowLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_DebugWindowLocation_MetaData[] = {
		{ "Category", "HoloPlay|Window" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_DebugWindowLocation = { "DebugWindowLocation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, DebugWindowLocation), Z_Construct_UScriptStruct_FHoloPlayWindowLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_DebugWindowLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_DebugWindowLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType = { "LastExecutedPlayModeType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowSettings, LastExecutedPlayModeType), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayModeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_MetaData[] = {
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_SetBit(void* Obj)
	{
		((FHoloPlayWindowSettings*)Obj)->bLockInMainViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport = { "bLockInMainViewport", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayWindowSettings), &Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_PlacementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_ScreenIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_CustomWindowLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_DebugWindowLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_LastExecutedPlayModeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::NewProp_bLockInMainViewport,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		nullptr,
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
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Hash() { return 1649525657U; }
class UScriptStruct* FHoloPlayWindowLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOLOPLAYRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloPlayWindowLocation, Z_Construct_UPackage__Script_HoloPlayRuntime(), TEXT("HoloPlayWindowLocation"), sizeof(FHoloPlayWindowLocation), Get_Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Hash());
	}
	return Singleton;
}
template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<FHoloPlayWindowLocation>()
{
	return FHoloPlayWindowLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoloPlayWindowLocation(FHoloPlayWindowLocation::StaticStruct, TEXT("/Script/HoloPlayRuntime"), TEXT("HoloPlayWindowLocation"), false, nullptr, nullptr);
static struct FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayWindowLocation
{
	FScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayWindowLocation()
	{
		UScriptStruct::DeferCppStructOps<FHoloPlayWindowLocation>(FName(TEXT("HoloPlayWindowLocation")));
	}
} ScriptStruct_HoloPlayRuntime_StaticRegisterNativesFHoloPlayWindowLocation;
	struct Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloPlayWindowLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ClientSize_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ClientSize = { "ClientSize", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowLocation, ClientSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ClientSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ClientSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayWindowLocation, ScreenPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ScreenPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ClientSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::NewProp_ScreenPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		nullptr,
		&NewStructOps,
		"HoloPlayWindowLocation",
		sizeof(FHoloPlayWindowLocation),
		alignof(FHoloPlayWindowLocation),
		Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayWindowLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_HoloPlayRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoloPlayWindowLocation"), sizeof(FHoloPlayWindowLocation), Get_Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayWindowLocation_Hash() { return 3740330073U; }
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilesX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TilesY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiltW_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuiltW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuiltH_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuiltH;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overscan_MetaData[];
#endif
		static void NewProp_Overscan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Overscan;
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
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX = { "TilesX", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, TilesX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "160" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bTilingEditable" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY = { "TilesY", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, TilesY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "512" },
		{ "EditCondition", "bTilingEditable" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "8192" },
		{ "UIMin", "512" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW = { "QuiltW", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, QuiltW), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "512" },
		{ "EditCondition", "bTilingEditable" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "UIMax", "8192" },
		{ "UIMin", "512" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH = { "QuiltH", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHoloPlayTilingQuality, QuiltH), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "EditCondition", "bTilingEditable" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_SetBit(void* Obj)
	{
		((FHoloPlayTilingQuality*)Obj)->Overscan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan = { "Overscan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayTilingQuality), &Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_MetaData[] = {
		{ "Comment", "// Hidden property used to enable/disable editing of other properties\n" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "Hidden property used to enable/disable editing of other properties" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_SetBit(void* Obj)
	{
		((FHoloPlayTilingQuality*)Obj)->bTilingEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable = { "bTilingEditable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHoloPlayTilingQuality), &Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_TilesY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_QuiltH,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_Overscan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::NewProp_bTilingEditable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
		nullptr,
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
	uint32 Get_Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Hash() { return 1172687325U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoloPlayRenderingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HoloPlayRenderingSettings;
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
		{ "Comment", "/**\n * @class\x09UHoloPlaySettings\n *\n * @brief\x09""All HoloPlay plugin settings\n */" },
		{ "IncludePath", "HoloPlaySettings.h" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ToolTip", "@class      UHoloPlaySettings\n\n@brief      All HoloPlay plugin settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings_MetaData[] = {
		{ "Category", "HoloPlay" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings = { "HoloPlayWindowSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayWindowSettings), Z_Construct_UScriptStruct_FHoloPlayWindowSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayWindowSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "DisplayName", "Lenticular Screenshot" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings = { "HoloPlayLenticularScreenshotSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayLenticularScreenshotSettings), Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayLenticularScreenshotSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "DisplayName", "Quilt Screenshot" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings = { "HoloPlayScreenshotQuiltSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayScreenshotQuiltSettings), Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshotQuiltSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings_MetaData[] = {
		{ "Category", "HoloPlay|Screenshot Settings" },
		{ "DisplayName", "2D Screenshot" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings = { "HoloPlayScreenshot2DSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayScreenshot2DSettings), Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayScreenshot2DSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "Automatic" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings = { "AutomaticSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, AutomaticSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_AutomaticSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "Portrait" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings = { "PortraitSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, PortraitSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "PortraitHiRes" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings = { "PortraitHiResSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, PortraitHiResSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_PortraitHiResSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "4K Display" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings = { "FourKSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, FourKSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_FourKSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "8K Display" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings = { "EightKSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, EightKSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightKSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "8.9 Inch (Legacy)" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy = { "EightNineLegacy", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, EightNineLegacy), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_EightNineLegacy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings_MetaData[] = {
		{ "Category", "HoloPlay|Tiling Settings" },
		{ "DisplayName", "Custom" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings = { "CustomSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, CustomSettings), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_CustomSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings_MetaData[] = {
		{ "Category", "HoloPlay" },
		{ "ModuleRelativePath", "Public/HoloPlaySettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings = { "HoloPlayRenderingSettings", nullptr, (EPropertyFlags)0x0010000000044015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlaySettings, HoloPlayRenderingSettings), Z_Construct_UScriptStruct_FHoloPlayRenderingSettings, METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlaySettings_Statics::NewProp_HoloPlayRenderingSettings,
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
	IMPLEMENT_CLASS(UHoloPlaySettings, 2749309466);
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
