// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MERCUNA_MercunaPath_generated_h
#error "MercunaPath.generated.h already included, missing '#pragma once' in MercunaPath.h"
#endif
#define MERCUNA_MercunaPath_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPathLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_I); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPoint(Z_Param_I); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPartial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsValid(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPathLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPoint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_I); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetPoint(Z_Param_I); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartial) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPartial(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsValid(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaPath(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaPath(); \
public: \
	DECLARE_CLASS(UMercunaPath, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(UMercunaPath) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaPath(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaPath(); \
public: \
	DECLARE_CLASS(UMercunaPath, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(UMercunaPath) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMercunaPath(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaPath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercunaPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaPath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercunaPath(UMercunaPath&&); \
	NO_API UMercunaPath(const UMercunaPath&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercunaPath(UMercunaPath&&); \
	NO_API UMercunaPath(const UMercunaPath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercunaPath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaPath); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercunaPath)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_8_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
