// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_CriWareFunctionLibrary_generated_h
#error "CriWareFunctionLibrary.generated.h already included, missing '#pragma once' in CriWareFunctionLibrary.h"
#endif
#define CRIWARERUNTIME_CriWareFunctionLibrary_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGameVariableByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameVariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCriWareFunctionLibrary::SetGameVariableByName(Z_Param_GameVariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalLabelToSelectorByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SelectorName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LabelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(Z_Param_SelectorName,Z_Param_LabelName); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGameVariableByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameVariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCriWareFunctionLibrary::SetGameVariableByName(Z_Param_GameVariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGlobalLabelToSelectorByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SelectorName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LabelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(Z_Param_SelectorName,Z_Param_LabelName); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriWareFunctionLibrary(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UCriWareFunctionLibrary(); \
public: \
	DECLARE_CLASS(UCriWareFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriWareFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUCriWareFunctionLibrary(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UCriWareFunctionLibrary(); \
public: \
	DECLARE_CLASS(UCriWareFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriWareFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCriWareFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriWareFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriWareFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriWareFunctionLibrary(UCriWareFunctionLibrary&&); \
	NO_API UCriWareFunctionLibrary(const UCriWareFunctionLibrary&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriWareFunctionLibrary(UCriWareFunctionLibrary&&); \
	NO_API UCriWareFunctionLibrary(const UCriWareFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriWareFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriWareFunctionLibrary)


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_6_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
