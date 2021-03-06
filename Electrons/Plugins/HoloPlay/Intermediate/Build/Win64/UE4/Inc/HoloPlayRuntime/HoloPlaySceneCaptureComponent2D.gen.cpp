// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/Game/HoloPlaySceneCaptureComponent2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlaySceneCaptureComponent2D() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
// End Cross Module References
	void UHoloPlaySceneCaptureComponent2D::StaticRegisterNativesUHoloPlaySceneCaptureComponent2D()
	{
	}
	UClass* Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_NoRegister()
	{
		return UHoloPlaySceneCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Capture looking glass multi views\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Game/HoloPlaySceneCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Public/Game/HoloPlaySceneCaptureComponent2D.h" },
		{ "ToolTip", "Capture looking glass multi views" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlaySceneCaptureComponent2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::ClassParams = {
		&UHoloPlaySceneCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlaySceneCaptureComponent2D, 4038941076);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlaySceneCaptureComponent2D>()
	{
		return UHoloPlaySceneCaptureComponent2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlaySceneCaptureComponent2D(Z_Construct_UClass_UHoloPlaySceneCaptureComponent2D, &UHoloPlaySceneCaptureComponent2D::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlaySceneCaptureComponent2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlaySceneCaptureComponent2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
