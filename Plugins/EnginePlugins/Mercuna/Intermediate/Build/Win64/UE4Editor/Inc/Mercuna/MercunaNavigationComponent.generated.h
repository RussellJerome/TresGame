// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
struct FVector;
class UObject;
struct FLatentActionInfo;
struct FMercunaNavigationConfiguration;
class AActor;
#ifdef MERCUNA_MercunaNavigationComponent_generated_h
#error "MercunaNavigationComponent.generated.h already included, missing '#pragma once' in MercunaNavigationComponent.h"
#endif
#define MERCUNA_MercunaNavigationComponent_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_18_DELEGATE \
struct MercunaNavigationComponent_eventMercunaMoveComplete_Parms \
{ \
	FAIRequestID RequestID; \
	TEnumAsByte<EMercunaMoveResult::Type> Result; \
}; \
static inline void FMercunaMoveComplete_DelegateWrapper(const FMulticastScriptDelegate& MercunaMoveComplete, FAIRequestID RequestID, const EMercunaMoveResult::Type Result) \
{ \
	MercunaNavigationComponent_eventMercunaMoveComplete_Parms Parms; \
	Parms.RequestID=RequestID; \
	Parms.Result=Result; \
	MercunaMoveComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelLookAt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CancelLookAt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CancelMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckReachable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheckReachable(Z_Param_Point,Z_Param_Out_Success,Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAvoidanceExclusions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAvoidanceExclusions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfigure) \
	{ \
		P_GET_STRUCT_REF(FMercunaNavigationConfiguration,Z_Param_Out_NewConfiguration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Configure(Z_Param_Out_NewConfiguration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfigureMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bUseDynamicAvoidance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConfigureMovement(Z_Param_bUsePathfinding,Z_Param_bUseDynamicAvoidance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathInfo) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Valid); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DistanceToEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NextPathPoint); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsFinalPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPathInfo(Z_Param_Out_Valid,Z_Param_Out_DistanceToEnd,Z_Param_Out_NextPathPoint,Z_Param_Out_bIsFinalPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookAt) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LookAt(Z_Param_Actor,Z_Param_MaxPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveToActor(Z_Param_Actor,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Destination); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveToLocation(Z_Param_Out_Destination,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceAgainst) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceAgainst(Z_Param_Actor,Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrackActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TrackActor(Z_Param_Actor,Z_Param_Distance,Z_Param_Speed); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelLookAt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CancelLookAt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CancelMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckReachable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheckReachable(Z_Param_Point,Z_Param_Out_Success,Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAvoidanceExclusions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearAvoidanceExclusions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfigure) \
	{ \
		P_GET_STRUCT_REF(FMercunaNavigationConfiguration,Z_Param_Out_NewConfiguration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Configure(Z_Param_Out_NewConfiguration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConfigureMovement) \
	{ \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bUseDynamicAvoidance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConfigureMovement(Z_Param_bUsePathfinding,Z_Param_bUseDynamicAvoidance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPathInfo) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_Valid); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_DistanceToEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NextPathPoint); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsFinalPoint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPathInfo(Z_Param_Out_Valid,Z_Param_Out_DistanceToEnd,Z_Param_Out_NextPathPoint,Z_Param_Out_bIsFinalPoint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookAt) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LookAt(Z_Param_Actor,Z_Param_MaxPitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveToActor(Z_Param_Actor,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Destination); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_GET_UBOOL(Z_Param_UsePartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveToLocation(Z_Param_Out_Destination,Z_Param_EndDistance,Z_Param_Speed,Z_Param_UsePartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceAgainst) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAvoidanceAgainst(Z_Param_Actor,Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrackActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TrackActor(Z_Param_Actor,Z_Param_Distance,Z_Param_Speed); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaNavigationComponent(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaNavigationComponent(); \
public: \
	DECLARE_CLASS(UMercunaNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(UMercunaNavigationComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaNavigationComponent(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaNavigationComponent(); \
public: \
	DECLARE_CLASS(UMercunaNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(UMercunaNavigationComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMercunaNavigationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaNavigationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercunaNavigationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaNavigationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercunaNavigationComponent(UMercunaNavigationComponent&&); \
	NO_API UMercunaNavigationComponent(const UMercunaNavigationComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercunaNavigationComponent(UMercunaNavigationComponent&&); \
	NO_API UMercunaNavigationComponent(const UMercunaNavigationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercunaNavigationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaNavigationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercunaNavigationComponent)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Configuration() { return STRUCT_OFFSET(UMercunaNavigationComponent, Configuration); } \
	FORCEINLINE static uint32 __PPO__Pathfinding() { return STRUCT_OFFSET(UMercunaNavigationComponent, Pathfinding); } \
	FORCEINLINE static uint32 __PPO__DynamicAvoidance() { return STRUCT_OFFSET(UMercunaNavigationComponent, DynamicAvoidance); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_14_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavigationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
