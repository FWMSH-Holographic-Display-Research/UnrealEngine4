// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/Game/HoloPlayCapture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlayCapture() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_AHoloPlayCapture_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_AHoloPlayCapture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HOLOPLAYRUNTIME_API UEnum* Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings();
	HOLOPLAYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoloPlayTilingQuality();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void AHoloPlayCapture::StaticRegisterNativesAHoloPlayCapture()
	{
	}
	UClass* Z_Construct_UClass_AHoloPlayCapture_NoRegister()
	{
		return AHoloPlayCapture::StaticClass();
	}
	struct Z_Construct_UClass_AHoloPlayCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
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
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoloPlayCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::Class_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "HideCategories", "Actor LOD Cooking Rendering Replication Input" },
		{ "IncludePath", "Game/HoloPlayCapture.h" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size_MetaData[] = {
		{ "Comment", "// Legacy properties, moved to UHoloPlaySceneCaptureComponent2D. Here for backwards compatibility.\n" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Legacy properties, moved to UHoloPlaySceneCaptureComponent2D. Here for backwards compatibility." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, Size_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor = { "NearClipFactor", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, NearClipFactor_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->bUseFarClipPlane_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane = { "bUseFarClipPlane", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor = { "FarClipFactor", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, FarClipFactor_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, FOV_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D = { "OverrideQuiltTexture2D", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, OverrideQuiltTexture2D_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	void Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_SetBit(void* Obj)
	{
		((AHoloPlayCapture*)Obj)->bSingleViewMode_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode = { "bSingleViewMode", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHoloPlayCapture), &Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality = { "TilingQuality", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, TilingQuality_DEPRECATED), Z_Construct_UEnum_HoloPlayRuntime_EHoloPlayQualitySettings, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues = { "TilingValues", nullptr, (EPropertyFlags)0x0020080820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, TilingValues_DEPRECATED), Z_Construct_UScriptStruct_FHoloPlayTilingQuality, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CameraSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "Comment", "// Component which controls distance of camera from actor's location. Actor's location matches the camera focus point.\n// Note: we're not using \"VisibleAnywhere\" meta tag here to hide component's properties in editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "Component which controls distance of camera from actor's location. Actor's location matches the camera focus point.\nNote: we're not using \"VisibleAnywhere\" meta tag here to hide component's properties in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CameraSpringArm = { "CameraSpringArm", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, CameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraActor" },
		{ "Comment", "// The primary component in this actor, render camera\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCapture.h" },
		{ "ToolTip", "The primary component in this actor, render camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderCamera = { "RenderCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHoloPlayCapture, RenderCamera), Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoloPlayCapture_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_NearClipFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bUseFarClipPlane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FarClipFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_OverrideQuiltTexture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_bSingleViewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_TilingValues,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_CameraSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoloPlayCapture_Statics::NewProp_RenderCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoloPlayCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoloPlayCapture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHoloPlayCapture_Statics::ClassParams = {
		&AHoloPlayCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoloPlayCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AHoloPlayCapture, 2019819957);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<AHoloPlayCapture>()
	{
		return AHoloPlayCapture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoloPlayCapture(Z_Construct_UClass_AHoloPlayCapture, &AHoloPlayCapture::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("AHoloPlayCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoloPlayCapture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AHoloPlayCapture)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
