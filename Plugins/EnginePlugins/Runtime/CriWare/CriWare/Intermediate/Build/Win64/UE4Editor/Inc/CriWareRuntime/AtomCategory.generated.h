// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_AtomCategory_generated_h
#error "AtomCategory.generated.h already included, missing '#pragma once' in AtomCategory.h"
#endif
#define CRIWARERUNTIME_AtomCategory_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVolumeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAtomCategory::GetVolumeByName(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPausedByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAtomCategory::IsPausedByName(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAtomCategory::PauseByName(Z_Param_CategoryName,Z_Param_bPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAisacControlByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AisacName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAtomCategory::SetAisacControlByName(Z_Param_CategoryName,Z_Param_AisacName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAtomCategory::SetVolumeByName(Z_Param_CategoryName,Z_Param_Volume); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVolumeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAtomCategory::GetVolumeByName(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPausedByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAtomCategory::IsPausedByName(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAtomCategory::PauseByName(Z_Param_CategoryName,Z_Param_bPause); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAisacControlByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AisacName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAtomCategory::SetAisacControlByName(Z_Param_CategoryName,Z_Param_AisacName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolumeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAtomCategory::SetVolumeByName(Z_Param_CategoryName,Z_Param_Volume); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomCategory(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomCategory(); \
public: \
	DECLARE_CLASS(UAtomCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCategory) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUAtomCategory(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomCategory(); \
public: \
	DECLARE_CLASS(UAtomCategory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCategory) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomCategory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCategory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCategory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCategory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCategory(UAtomCategory&&); \
	NO_API UAtomCategory(const UAtomCategory&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCategory(UAtomCategory&&); \
	NO_API UAtomCategory(const UAtomCategory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCategory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCategory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomCategory)


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_6_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
