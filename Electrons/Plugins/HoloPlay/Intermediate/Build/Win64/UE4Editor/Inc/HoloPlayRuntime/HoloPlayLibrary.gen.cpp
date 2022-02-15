// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloPlayRuntime/Public/Blueprints/HoloPlayLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloPlayLibrary() {}
// Cross Module References
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayLibrary_NoRegister();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlayLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HoloPlayRuntime();
	HOLOPLAYRUNTIME_API UClass* Z_Construct_UClass_UHoloPlaySettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHoloPlayLibrary::execGetHoloPlaySettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHoloPlaySettings**)Z_Param__Result=UHoloPlayLibrary::GetHoloPlaySettings();
		P_NATIVE_END;
	}
	void UHoloPlayLibrary::StaticRegisterNativesUHoloPlayLibrary()
	{
		UClass* Class = UHoloPlayLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHoloPlaySettings", &UHoloPlayLibrary::execGetHoloPlaySettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics
	{
		struct HoloPlayLibrary_eventGetHoloPlaySettings_Parms
		{
			UHoloPlaySettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloPlayLibrary_eventGetHoloPlaySettings_Parms, ReturnValue), Z_Construct_UClass_UHoloPlaySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloPlay" },
		{ "Comment", "/**\n\x09 * @fn\x09static UHoloPlaySettings* UHoloPlayLibrary::GetHoloPlaySettings();\n\x09 *\n\x09 * @brief\x09Gets all HoloPlay runtime settings  \n\x09 *\n\x09 * @returns\x09Null if it fails, else the HoloPlay settings.\n\x09 */" },
		{ "DisplayName", "Get HoloPlay settings" },
		{ "ModuleRelativePath", "Public/Blueprints/HoloPlayLibrary.h" },
		{ "ToolTip", "@fn  static UHoloPlaySettings* UHoloPlayLibrary::GetHoloPlaySettings();\n\n@brief       Gets all HoloPlay runtime settings\n\n@returns     Null if it fails, else the HoloPlay settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloPlayLibrary, nullptr, "GetHoloPlaySettings", nullptr, nullptr, sizeof(HoloPlayLibrary_eventGetHoloPlaySettings_Parms), Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoloPlayLibrary_NoRegister()
	{
		return UHoloPlayLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHoloPlayLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloPlayLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloPlayRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoloPlayLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoloPlayLibrary_GetHoloPlaySettings, "GetHoloPlaySettings" }, // 2703252675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloPlayLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprints/HoloPlayLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprints/HoloPlayLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloPlayLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloPlayLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloPlayLibrary_Statics::ClassParams = {
		&UHoloPlayLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloPlayLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoloPlayLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloPlayLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloPlayLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloPlayLibrary, 3261162463);
	template<> HOLOPLAYRUNTIME_API UClass* StaticClass<UHoloPlayLibrary>()
	{
		return UHoloPlayLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloPlayLibrary(Z_Construct_UClass_UHoloPlayLibrary, &UHoloPlayLibrary::StaticClass, TEXT("/Script/HoloPlayRuntime"), TEXT("UHoloPlayLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloPlayLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
