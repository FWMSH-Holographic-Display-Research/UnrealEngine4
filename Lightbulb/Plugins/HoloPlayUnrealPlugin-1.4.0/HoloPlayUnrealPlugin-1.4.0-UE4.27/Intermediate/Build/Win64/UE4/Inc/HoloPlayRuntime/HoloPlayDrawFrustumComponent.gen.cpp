// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/Game/HoloPlayDrawFrustumComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlayDrawFrustumComponent() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayDrawFrustumComponent_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayDrawFrustumComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UHoloPlayDrawFrustumComponent::StaticRegisterNativesUHoloPlayDrawFrustumComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoloPlayDrawFrustumComponent_NoRegister()
	{
		return UHoloPlayDrawFrustumComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumMidDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumMidDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrustumColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidFrustumColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MidFrustumColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidPlaneLineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidPlaneLineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MidLineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MidLineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumAspectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumAspectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumStartDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumStartDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrustumEndDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrustumEndDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class\x09UHoloPlayDrawFrustumComponent\n *\n * @brief\x09Utility component for drawing a view frustum. Origin is at the component location,\n * \x09\x09\x09""frustum points down position X axis.\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Game/HoloPlayDrawFrustumComponent.h" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "@class      UHoloPlayDrawFrustumComponent\n\n@brief      Utility component for drawing a view frustum. Origin is at the component location,\n                    frustum points down position X axis." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumMidDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance to HoloPlay Draw Plane. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Distance to HoloPlay Draw Plane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumMidDist = { "FrustumMidDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumMidDist), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumMidDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumMidDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Color to draw the wireframe frustum. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Color to draw the wireframe frustum." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumColor = { "FrustumColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumLineThickness_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Line Thickness for Frustum. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Line Thickness for Frustum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumLineThickness = { "FrustumLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumLineThickness), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidFrustumColor_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Color to draw the HoloPlayPlane. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Color to draw the HoloPlayPlane." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidFrustumColor = { "MidFrustumColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, MidFrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidFrustumColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidFrustumColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidPlaneLineLength_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Line Length for Mid Plane. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Line Length for Mid Plane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidPlaneLineLength = { "MidPlaneLineLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, MidPlaneLineLength), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidPlaneLineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidPlaneLineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidLineThickness_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Line Thickness for Mid Plane. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Line Thickness for Mid Plane." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidLineThickness = { "MidLineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, MidLineThickness), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidLineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Angle of longest dimension of view shape.\n\x09  * If the angle is 0 then an orthographic projection is used */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Angle of longest dimension of view shape.\nIf the angle is 0 then an orthographic projection is used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAngle = { "FrustumAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumAngle), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Ratio of horizontal size over vertical size. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Ratio of horizontal size over vertical size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio = { "FrustumAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance from origin to start drawing the frustum. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to start drawing the frustum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumStartDist = { "FrustumStartDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumStartDist), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance from origin to stop drawing the frustum. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to stop drawing the frustum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumEndDist = { "FrustumEndDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, FrustumEndDist), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_VerticalAngle_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Vertical Angle for Vertical Offset. */" },
		{ "ModuleRelativePath", "Public/Game/HoloPlayDrawFrustumComponent.h" },
		{ "ToolTip", "Vertical Angle for Vertical Offset." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_VerticalAngle = { "VerticalAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHoloPlayDrawFrustumComponent, VerticalAngle), METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_VerticalAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_VerticalAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumMidDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidFrustumColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidPlaneLineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_MidLineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumStartDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_FrustumEndDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::NewProp_VerticalAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlayDrawFrustumComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::ClassParams = {
		&UHoloPlayDrawFrustumComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlayDrawFrustumComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlayDrawFrustumComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlayDrawFrustumComponent, 58403527);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlayDrawFrustumComponent>()
	{
		return UHoloPlayDrawFrustumComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlayDrawFrustumComponent(Z_Construct_UClass_UHoloPlayDrawFrustumComponent, &UHoloPlayDrawFrustumComponent::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlayDrawFrustumComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlayDrawFrustumComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
