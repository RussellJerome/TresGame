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
class UMercunaClampToNavigableProxy;
#ifdef MERCUNA_MercunaClampToNavigableProxy_generated_h
#error "MercunaClampToNavigableProxy.generated.h already included, missing '#pragma once' in MercunaClampToNavigableProxy.h"
#endif
#define MERCUNA_MercunaClampToNavigableProxy_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMercunaClampToNavigable) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SearchRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaClampToNavigableProxy**)Z_Param__Result=UMercunaClampToNavigableProxy::MercunaClampToNavigable(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_NavigationRadius,Z_Param_SearchRadius); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMercunaClampToNavigable) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SearchRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaClampToNavigableProxy**)Z_Param__Result=UMercunaClampToNavigableProxy::MercunaClampToNavigable(Z_Param_WorldContextObject,Z_Param_Position,Z_Param_NavigationRadius,Z_Param_SearchRadius); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaClampToNavigableProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaClampToNavigableProxy(); \
public: \
	DECLARE_CLASS(UMercunaClampToNavigableProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaClampToNavigableProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaClampToNavigableProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaClampToNavigableProxy(); \
public: \
	DECLARE_CLASS(UMercunaClampToNavigableProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaClampToNavigableProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MERCUNA_API UMercunaClampToNavigableProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaClampToNavigableProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaClampToNavigableProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaClampToNavigableProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaClampToNavigableProxy(UMercunaClampToNavigableProxy&&); \
	MERCUNA_API UMercunaClampToNavigableProxy(const UMercunaClampToNavigableProxy&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaClampToNavigableProxy(UMercunaClampToNavigableProxy&&); \
	MERCUNA_API UMercunaClampToNavigableProxy(const UMercunaClampToNavigableProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaClampToNavigableProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaClampToNavigableProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercunaClampToNavigableProxy)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_11_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
