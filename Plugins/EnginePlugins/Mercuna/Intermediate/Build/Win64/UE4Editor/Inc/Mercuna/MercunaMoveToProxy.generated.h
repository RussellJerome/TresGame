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
class UMercunaMoveToProxy;
struct FVector;
struct FAIRequestID;
#ifdef MERCUNA_MercunaMoveToProxy_generated_h
#error "MercunaMoveToProxy.generated.h already included, missing '#pragma once' in MercunaMoveToProxy.h"
#endif
#define MERCUNA_MercunaMoveToProxy_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMercunaMoveToActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaMoveToProxy**)Z_Param__Result=UMercunaMoveToProxy::MercunaMoveToActor(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Actor,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMercunaMoveToLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Destination); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaMoveToProxy**)Z_Param__Result=UMercunaMoveToProxy::MercunaMoveToLocation(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Out_Destination,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
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


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMercunaMoveToActor) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaMoveToProxy**)Z_Param__Result=UMercunaMoveToProxy::MercunaMoveToActor(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Actor,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMercunaMoveToLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Destination); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaMoveToProxy**)Z_Param__Result=UMercunaMoveToProxy::MercunaMoveToLocation(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Out_Destination,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
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


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaMoveToProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaMoveToProxy(); \
public: \
	DECLARE_CLASS(UMercunaMoveToProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaMoveToProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaMoveToProxy(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaMoveToProxy(); \
public: \
	DECLARE_CLASS(UMercunaMoveToProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), MERCUNA_API) \
	DECLARE_SERIALIZER(UMercunaMoveToProxy) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MERCUNA_API UMercunaMoveToProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaMoveToProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaMoveToProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaMoveToProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaMoveToProxy(UMercunaMoveToProxy&&); \
	MERCUNA_API UMercunaMoveToProxy(const UMercunaMoveToProxy&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MERCUNA_API UMercunaMoveToProxy(UMercunaMoveToProxy&&); \
	MERCUNA_API UMercunaMoveToProxy(const UMercunaMoveToProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MERCUNA_API, UMercunaMoveToProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaMoveToProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercunaMoveToProxy)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_15_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveToProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
