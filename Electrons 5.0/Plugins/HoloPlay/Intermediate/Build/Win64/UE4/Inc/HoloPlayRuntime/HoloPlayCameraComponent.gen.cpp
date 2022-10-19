// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/Game/HoloPlayCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlayCameraComponent() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayCameraComponent_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
// End Cross Module References
	void UHoloPlayCameraComponent::StaticRegisterNativesUHoloPlayCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoloPlayCameraComponent_NoRegister()
	{
		return UHoloPlayCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlayCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlayCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Game/HoloPlayCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayCameraComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlayCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlayCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlayCameraComponent_Statics::ClassParams = {
		&UHoloPlayCameraComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlayCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlayCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlayCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlayCameraComponent, 3154136085);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlayCameraComponent>()
	{
		return UHoloPlayCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlayCameraComponent(Z_Construct_UClass_UHoloPlayCameraComponent, &UHoloPlayCameraComponent::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlayCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlayCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
