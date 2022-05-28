// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APawn;
class AActor;
class UMercunaTrackActorProxy;
struct FAIRequestID;
#ifdef MERCUNA_MercunaTrackActorProxy_generated_h
#error "MercunaTrackActorProxy.generated.h already included, missing '#pragma once' in MercunaTrackActorProxy.h"
#endif
#define MERCUNA_MercunaTrackActorProxy_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMercunaTrackActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaTrackActorProxy**)Z_Param__Result=UMercunaTrackActorProxy::MercunaTrackActor(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Actor,Z_Param_Distance,Z_Param_Speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMoveComplete) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnMoveComplete(Z_Param_RequestID,EMercunaMoveResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMercunaTrackActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaTrackActorProxy**)Z_Param__Result=UMercunaTrackActorProxy::MercunaTrackActor(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Actor,Z_Param_Distance,Z_Param_Speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMoveComplete) \
	{ \
		P_GET_STRUCT(FAIRequestID,Z_Param_RequestID); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnMoveComplete(Z_Param_RequestID,EMercunaMoveResult::Type(Z_Param_Result)); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaTrackActorProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaTrackActorProxy(); \
public: \
	DECLARE_CLASS(UMercunaTrackActorProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaTrackActorProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaTrackActorProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaTrackActorProxy(); \
public: \
	DECLARE_CLASS(UMercunaTrackActorProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaTrackActorProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MERCUNA_API UMercunaTrackActorProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaTrackActorProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaTrackActorProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaTrackActorProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaTrackActorProxy(UMercunaTrackActorProxy&&); \
	MERCUNA_API UMercunaTrackActorProxy(const UMercunaTrackActorProxy&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaTrackActorProxy(UMercunaTrackActorProxy&&); \
	MERCUNA_API UMercunaTrackActorProxy(const UMercunaTrackActorProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaTrackActorProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaTrackActorProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercunaTrackActorProxy)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_14_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTrackActorProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
