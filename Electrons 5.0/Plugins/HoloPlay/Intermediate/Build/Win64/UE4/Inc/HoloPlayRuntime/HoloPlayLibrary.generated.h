// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHoloPlaySettings;
#ifdef HOLOPLAYRUNTIME_HoloPlayLibrary_generated_h
#error "HoloPlayLibrary.generated.h already included, missing '#pragma once' in HoloPlayLibrary.h"
#endif
#define HOLOPLAYRUNTIME_HoloPlayLibrary_generated_h

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_SPARSE_DATA
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHoloPlaySettings);


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHoloPlaySettings);


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoloPlayLibrary(); \
	friend struct Z_Construct_UClass_UHoloPlayLibrary_Statics; \
public: \
	DECLARE_CLASS(UHoloPlayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoloPlayRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoloPlayLibrary)


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUHoloPlayLibrary(); \
	friend struct Z_Construct_UClass_UHoloPlayLibrary_Statics; \
public: \
	DECLARE_CLASS(UHoloPlayLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoloPlayRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoloPlayLibrary)


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloPlayLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloPlayLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloPlayLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloPlayLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloPlayLibrary(UHoloPlayLibrary&&); \
	NO_API UHoloPlayLibrary(const UHoloPlayLibrary&); \
public:


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloPlayLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloPlayLibrary(UHoloPlayLibrary&&); \
	NO_API UHoloPlayLibrary(const UHoloPlayLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloPlayLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloPlayLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloPlayLibrary)


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_14_PROLOG
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_SPARSE_DATA \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_RPC_WRAPPERS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_INCLASS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_SPARSE_DATA \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_INCLASS_NO_PURE_DECLS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLOPLAYRUNTIME_API UClass* StaticClass<class UHoloPlayLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_Blueprints_HoloPlayLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
