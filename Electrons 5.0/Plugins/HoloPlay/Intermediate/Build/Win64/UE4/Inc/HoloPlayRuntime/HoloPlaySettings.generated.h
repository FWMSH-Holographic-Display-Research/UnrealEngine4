// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLOPLAYRUNTIME_HoloPlaySettings_generated_h
#error "HoloPlaySettings.generated.h already included, missing '#pragma once' in HoloPlaySettings.h"
#endif
#define HOLOPLAYRUNTIME_HoloPlaySettings_generated_h

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_512_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayRenderingSettings_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayRenderingSettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_465_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayDebugMenuSettings_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayDebugMenuSettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayScreenshotSettings_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayScreenshotSettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_411_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlaySceneSettings_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlaySceneSettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayShaderSettings_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayShaderSettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_243_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayWindowSettings_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayWindowSettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayConfigValues_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayConfigValues>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlayTilingQuality_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHoloPlaySettingsBase Super;


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlayTilingQuality>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHoloPlaySettingsBase_Statics; \
	HOLOPLAYRUNTIME_API static class UScriptStruct* StaticStruct();


template<> HOLOPLAYRUNTIME_API UScriptStruct* StaticStruct<struct FHoloPlaySettingsBase>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_SPARSE_DATA
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_RPC_WRAPPERS
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_RPC_WRAPPERS_NO_PURE_DECLS
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoloPlaySettings(); \
	friend struct Z_Construct_UClass_UHoloPlaySettings_Statics; \
public: \
	DECLARE_CLASS(UHoloPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoloPlayRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoloPlaySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_INCLASS \
private: \
	static void StaticRegisterNativesUHoloPlaySettings(); \
	friend struct Z_Construct_UClass_UHoloPlaySettings_Statics; \
public: \
	DECLARE_CLASS(UHoloPlaySettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoloPlayRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoloPlaySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloPlaySettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloPlaySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloPlaySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloPlaySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloPlaySettings(UHoloPlaySettings&&); \
	NO_API UHoloPlaySettings(const UHoloPlaySettings&); \
public:


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloPlaySettings(UHoloPlaySettings&&); \
	NO_API UHoloPlaySettings(const UHoloPlaySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloPlaySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloPlaySettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoloPlaySettings)


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_PRIVATE_PROPERTY_OFFSET
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_547_PROLOG
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_PRIVATE_PROPERTY_OFFSET \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_SPARSE_DATA \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_RPC_WRAPPERS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_INCLASS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_PRIVATE_PROPERTY_OFFSET \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_SPARSE_DATA \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_RPC_WRAPPERS_NO_PURE_DECLS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_INCLASS_NO_PURE_DECLS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_558_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLOPLAYRUNTIME_API UClass* StaticClass<class UHoloPlaySettings>();

#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_SPARSE_DATA
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_RPC_WRAPPERS
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_RPC_WRAPPERS_NO_PURE_DECLS
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoloPlayLaunchSettings(); \
	friend struct Z_Construct_UClass_UHoloPlayLaunchSettings_Statics; \
public: \
	DECLARE_CLASS(UHoloPlayLaunchSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoloPlayRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoloPlayLaunchSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_INCLASS \
private: \
	static void StaticRegisterNativesUHoloPlayLaunchSettings(); \
	friend struct Z_Construct_UClass_UHoloPlayLaunchSettings_Statics; \
public: \
	DECLARE_CLASS(UHoloPlayLaunchSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HoloPlayRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoloPlayLaunchSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloPlayLaunchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloPlayLaunchSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloPlayLaunchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloPlayLaunchSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloPlayLaunchSettings(UHoloPlayLaunchSettings&&); \
	NO_API UHoloPlayLaunchSettings(const UHoloPlayLaunchSettings&); \
public:


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloPlayLaunchSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloPlayLaunchSettings(UHoloPlayLaunchSettings&&); \
	NO_API UHoloPlayLaunchSettings(const UHoloPlayLaunchSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloPlayLaunchSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloPlayLaunchSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloPlayLaunchSettings)


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_PRIVATE_PROPERTY_OFFSET
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_670_PROLOG
#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_PRIVATE_PROPERTY_OFFSET \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_SPARSE_DATA \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_RPC_WRAPPERS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_INCLASS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_PRIVATE_PROPERTY_OFFSET \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_SPARSE_DATA \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_RPC_WRAPPERS_NO_PURE_DECLS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_INCLASS_NO_PURE_DECLS \
	Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h_674_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLOPLAYRUNTIME_API UClass* StaticClass<class UHoloPlayLaunchSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Electrons_Plugins_HoloPlay_Source_HoloPlayRuntime_Public_HoloPlaySettings_h


#define FOREACH_ENUM_EHOLOPLAYQUALITYSETTINGS(op) \
	op(EHoloPlayQualitySettings::Q_Automatic) \
	op(EHoloPlayQualitySettings::Q_Portrait) \
	op(EHoloPlayQualitySettings::Q_PortraitHighRes) \
	op(EHoloPlayQualitySettings::Q_FourK) \
	op(EHoloPlayQualitySettings::Q_EightK) \
	op(EHoloPlayQualitySettings::Q_EightPointNineLegacy) \
	op(EHoloPlayQualitySettings::Q_Custom) 

enum class EHoloPlayQualitySettings : uint8;
template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayQualitySettings>();

#define FOREACH_ENUM_EHOLOPLAYWINDOWAUTOCENTER(op) \
	op(EHoloPlayWindowAutoCenter::None) \
	op(EHoloPlayWindowAutoCenter::PrimaryWorkArea) \
	op(EHoloPlayWindowAutoCenter::PreferredWorkArea) 

enum class EHoloPlayWindowAutoCenter : uint8;
template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayWindowAutoCenter>();

#define FOREACH_ENUM_EHOLOPLAYWINDOWTYPE(op) \
	op(EHoloPlayWindowType::Fullscreen) \
	op(EHoloPlayWindowType::WindowedFullscreen) \
	op(EHoloPlayWindowType::Windowed) 

enum class EHoloPlayWindowType : uint8;
template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayWindowType>();

#define FOREACH_ENUM_EHOLOPLAYMODETYPE(op) \
	op(EHoloPlayModeType::PlayMode_InSeparateWindow) \
	op(EHoloPlayModeType::PlayMode_InMainViewport) 

enum class EHoloPlayModeType : uint8;
template<> HOLOPLAYRUNTIME_API UEnum* StaticEnum<EHoloPlayModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
