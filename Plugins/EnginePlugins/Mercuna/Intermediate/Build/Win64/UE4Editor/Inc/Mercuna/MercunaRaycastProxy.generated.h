// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class UMercunaRaycastProxy;
#ifdef MERCUNA_MercunaRaycastProxy_generated_h
#error "MercunaRaycastProxy.generated.h already included, missing '#pragma once' in MercunaRaycastProxy.h"
#endif
#define MERCUNA_MercunaRaycastProxy_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMercunaRaycast) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaRaycastProxy**)Z_Param__Result=UMercunaRaycastProxy::MercunaRaycast(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMercunaRaycast) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaRaycastProxy**)Z_Param__Result=UMercunaRaycastProxy::MercunaRaycast(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaRaycastProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaRaycastProxy(); \
public: \
	DECLARE_CLASS(UMercunaRaycastProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaRaycastProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaRaycastProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaRaycastProxy(); \
public: \
	DECLARE_CLASS(UMercunaRaycastProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaRaycastProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MERCUNA_API UMercunaRaycastProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaRaycastProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaRaycastProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaRaycastProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaRaycastProxy(UMercunaRaycastProxy&&); \
	MERCUNA_API UMercunaRaycastProxy(const UMercunaRaycastProxy&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaRaycastProxy(UMercunaRaycastProxy&&); \
	MERCUNA_API UMercunaRaycastProxy(const UMercunaRaycastProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaRaycastProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaRaycastProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercunaRaycastProxy)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_11_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
