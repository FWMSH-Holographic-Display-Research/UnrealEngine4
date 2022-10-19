// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/Game/HoloPlayCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlayCapture() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayRenderingConfig_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayRenderingConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_AHoloPlayCapture_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_AHoloPlayCapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayTilingQuality();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayConfigValues();
// End Cross Module References
	void UHoloPlayRenderingConfig::StaticRegisterNativesUHoloPlayRenderingConfig()
	{
	}
	UClass* Z_Construct_UClass_UHoloPlayRenderingConfig_NoRegister()
	{
		return UHoloPlayRenderingConfig::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlayRenderingConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumViews;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Render configuration, which holds the texture and CaptureViewInfo\n*/" },
		{ "IncludePath", "Game/HoloPlayCapture.h" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Render configuration, which holds the texture and CaptureViewInfo" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayRenderingConfig, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_NumViews_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_NumViews = { "NumViews", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayRenderingConfig, NumViews), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_NumViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_NumViews_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::NewProp_NumViews,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlayRenderingConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::ClassParams = {
		&UHoloPlayRenderingConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlayRenderingConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlayRenderingConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlayRenderingConfig, 2241887789);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlayRenderingConfig>()
	{
		return UHoloPlayRenderingConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlayRenderingConfig(Z_Construct_UClass_UHoloPlayRenderingConfig, &UHoloPlayRenderingConfig::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlayRenderingConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlayRenderingConfig);
	DEFINE_FUNCTION(AHoloPlayCapture::execResetCam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCam();
		P_NATIVE_END;
	}
	void AHoloPlayCapture::StaticRegisterNativesAHoloPlayCapture()
	{
		UClass* Class = AHoloPlayCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetCam", &AHoloPlayCapture::execResetCam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHoloPlayCapture_ResetCam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHoloPlayCapture_ResetCam_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloPlay" },
		{ "Comment", "/**\n\x09 * @fn\x09void AHoloPlayCapture::ResetCam();\n\x09 *\n\x09 * @brief\x09Setup all cameras\n\x09 */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "@fn  void AHoloPlayCapture::ResetCam();\n\n@brief       Setup all cameras" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHoloPlayCapture_ResetCam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHoloPlayCapture, nullptr, "ResetCam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHoloPlayCapture_ResetCam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHoloPlayCapture_ResetCam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHoloPlayCapture_ResetCam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHoloPlayCapture_ResetCam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHoloPlayCapture_NoRegister()
	{
		return AHoloPlayCapture::StaticClass();
	}
	struct Z_Construct_UClass_AHoloPlayCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidPlaneFrustumColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MidPlaneFrustumColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidPlaneLineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidPlaneLineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearClipFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearClipFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFarClipPlane_MetaData[];
#endif
		static void NewProp_bUseFarClipPlane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFarClipPlane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarClipFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarClipFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomVerticalAngle_MetaData[];
#endif
		static void NewProp_bUseCustomVerticalAngle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomVerticalAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomVerticalAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomVerticalAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomViewCone_MetaData[];
#endif
		static void NewProp_bUseCustomViewCone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomViewCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomViewCone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomViewCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAdvancedRenderingFeatures_MetaData[];
#endif
		static void NewProp_EnableAdvancedRenderingFeatures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAdvancedRenderingFeatures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideQuiltTexture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideQuiltTexture2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleViewMode_MetaData[];
#endif
		static void NewProp_bSingleViewMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleViewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TilingQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TilingQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilingValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TilingValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticalAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewCone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aspect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aspect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetCamerasView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetCamerasView;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderingConfigs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RenderingConfigs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoloPlayCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHoloPlayCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHoloPlayCapture_ResetCam, "ResetCam" }, // 873504848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::Class_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "HideCategories", "Actor LOD Cooking Rendering Replication Input" },
		{ "IncludePath", "Game/HoloPlayCapture.h" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumColor_MetaData[] = {
		{ "Category", "CaptureSettings|Visual" },
		{ "Comment", "//Customizable DrawFrustum Settings\n" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Customizable DrawFrustum Settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumColor = { "FrustumColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, FrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumLineThickness_MetaData[] = {
		{ "Category", "CaptureSettings|Visual" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumLineThickness = { "FrustumLineThickness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, FrustumLineThickness), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneFrustumColor_MetaData[] = {
		{ "Category", "CaptureSettings|Visual" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneFrustumColor = { "MidPlaneFrustumColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, MidPlaneFrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneFrustumColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneFrustumColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneLineLength_MetaData[] = {
		{ "Category", "CaptureSettings|Visual" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneLineLength = { "MidPlaneLineLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, MidPlaneLineLength), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneLineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneLineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidLineThickness_MetaData[] = {
		{ "Category", "CaptureSettings|Visual" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidLineThickness = { "MidLineThickness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, MidLineThickness), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Customizable Capture Settings\n" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Customizable Capture Settings" },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, Size), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor = { "NearClipFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, NearClipFactor), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->bUseFarClipPlane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane = { "bUseFarClipPlane", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditCondition", "bUseFarClipPlane" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor = { "FarClipFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, FarClipFactor), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "8.0" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "UIMax", "90.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, FOV), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle_MetaData[] = {
		{ "Category", "CaptureSettings|Advanced" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->bUseCustomVerticalAngle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle = { "bUseCustomVerticalAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomVerticalAngle_MetaData[] = {
		{ "Category", "CaptureSettings|Advanced" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "-60.0" },
		{ "EditCondition", "bUseCustomVerticalAngle" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "UIMax", "60.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomVerticalAngle = { "CustomVerticalAngle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, CustomVerticalAngle), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomVerticalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomVerticalAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone_MetaData[] = {
		{ "Category", "CaptureSettings|Advanced" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->bUseCustomViewCone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone = { "bUseCustomViewCone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomViewCone_MetaData[] = {
		{ "Category", "CaptureSettings|Advanced" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "EditCondition", "bUseCustomViewCone" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomViewCone = { "CustomViewCone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, CustomViewCone), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomViewCone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomViewCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures_MetaData[] = {
		{ "Category", "CaptureSettings|Advanced" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->EnableAdvancedRenderingFeatures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures = { "EnableAdvancedRenderingFeatures", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D_MetaData[] = {
		{ "Category", "QuiltSettings" },
		{ "Comment", "// Customizable Quilting Settings\n" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Customizable Quilting Settings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D = { "OverrideQuiltTexture2D", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, OverrideQuiltTexture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "Comment", "// When disabled, the plugin will render 8 pictures at a time. Enable it if you're experiencing issues with rendering (e.g. out of VRAM problem), with a cost of slower performance.\n" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "When disabled, the plugin will render 8 pictures at a time. Enable it if you're experiencing issues with rendering (e.g. out of VRAM problem), with a cost of slower performance." },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->bSingleViewMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode = { "bSingleViewMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "Comment", "// Customizable Tiling Settings\n" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Customizable Tiling Settings" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality = { "TilingQuality", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, TilingQuality), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues_MetaData[] = {
		{ "Category", "TilingSettings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues = { "TilingValues", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, TilingValues), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_VerticalAngle_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_VerticalAngle = { "VerticalAngle", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, VerticalAngle), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_VerticalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_VerticalAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ViewCone_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ViewCone = { "ViewCone", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, ViewCone), Z_Construct_UScriptStruct_FHoloPlayConfigValues, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ViewCone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ViewCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Aspect_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Aspect = { "Aspect", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, Aspect), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Aspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Aspect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ResetCamerasView_MetaData[] = {
		{ "Category", "Projection Settings" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ResetCamerasView = { "ResetCamerasView", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, ResetCamerasView), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ResetCamerasView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ResetCamerasView_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs_Inner = { "RenderingConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHoloPlayRenderingConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs = { "RenderingConfigs", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, RenderingConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoloPlayCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FrustumLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneFrustumColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidPlaneLineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_MidLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomVerticalAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomVerticalAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseCustomViewCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CustomViewCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_EnableAdvancedRenderingFeatures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_VerticalAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ViewCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Aspect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_ResetCamerasView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderingConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoloPlayCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoloPlayCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoloPlayCapture_Statics::ClassParams = {
		&AHoloPlayCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHoloPlayCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHoloPlayCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHoloPlayCapture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoloPlayCapture, 117985290);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<AHoloPlayCapture>()
	{
		return AHoloPlayCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoloPlayCapture(Z_Construct_UClass_AHoloPlayCapture, &AHoloPlayCapture::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("AHoloPlayCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoloPlayCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
