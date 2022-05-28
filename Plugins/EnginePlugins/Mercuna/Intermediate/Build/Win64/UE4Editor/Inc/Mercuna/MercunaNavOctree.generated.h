// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
class UMercunaPath;
#ifdef MERCUNA_MercunaNavOctree_generated_h
#error "MercunaNavOctree.generated.h already included, missing '#pragma once' in MercunaNavOctree.h"
#endif
#define MERCUNA_MercunaNavOctree_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckReachable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheckReachable(Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius,Z_Param_MaxPathLength,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampToNavigable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SearchRadius); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClampedPosition); \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClampToNavigable(Z_Param_Position,Z_Param_NavigationRadius,Z_Param_SearchRadius,Z_Param_Out_ClampedPosition,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToActor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_UBOOL(Z_Param_AllowPartial); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaPath**)Z_Param__Result=this->FindPathToActor(Z_Param_Start,Z_Param_GoalActor,Z_Param_NavigationRadius,Z_Param_AllowPartial,Z_Param_MaxPathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_UBOOL(Z_Param_AllowPartial); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaPath**)Z_Param__Result=this->FindPathToLocation(Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius,Z_Param_AllowPartial,Z_Param_MaxPathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsNavigable(Z_Param_Position,Z_Param_NavigationRadius,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigableMulti) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_TARRAY_REF(bool,Z_Param_Out_Results); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsNavigableMulti(Z_Param_Out_Positions,Z_Param_NavigationRadius,Z_Param_Out_Results); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaycast) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitPosition); \
		P_GET_UBOOL_REF(Z_Param_Out_RayHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Raycast(Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius,Z_Param_Out_HitPosition,Z_Param_Out_RayHit); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckReachable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CheckReachable(Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius,Z_Param_MaxPathLength,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClampToNavigable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SearchRadius); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClampedPosition); \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClampToNavigable(Z_Param_Position,Z_Param_NavigationRadius,Z_Param_SearchRadius,Z_Param_Out_ClampedPosition,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToActor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_UBOOL(Z_Param_AllowPartial); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaPath**)Z_Param__Result=this->FindPathToActor(Z_Param_Start,Z_Param_GoalActor,Z_Param_NavigationRadius,Z_Param_AllowPartial,Z_Param_MaxPathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPathToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_UBOOL(Z_Param_AllowPartial); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaPath**)Z_Param__Result=this->FindPathToLocation(Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius,Z_Param_AllowPartial,Z_Param_MaxPathLength); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigable) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_UBOOL_REF(Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsNavigable(Z_Param_Position,Z_Param_NavigationRadius,Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNavigableMulti) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_TARRAY_REF(bool,Z_Param_Out_Results); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->IsNavigableMulti(Z_Param_Out_Positions,Z_Param_NavigationRadius,Z_Param_Out_Results); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaycast) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NavigationRadius); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitPosition); \
		P_GET_UBOOL_REF(Z_Param_Out_RayHit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Raycast(Z_Param_Start,Z_Param_End,Z_Param_NavigationRadius,Z_Param_Out_HitPosition,Z_Param_Out_RayHit); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMercunaNavOctree(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_AMercunaNavOctree(); \
public: \
	DECLARE_CLASS(AMercunaNavOctree, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(AMercunaNavOctree) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMercunaNavOctree(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_AMercunaNavOctree(); \
public: \
	DECLARE_CLASS(AMercunaNavOctree, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(AMercunaNavOctree) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMercunaNavOctree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMercunaNavOctree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMercunaNavOctree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMercunaNavOctree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMercunaNavOctree(AMercunaNavOctree&&); \
	NO_API AMercunaNavOctree(const AMercunaNavOctree&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMercunaNavOctree(AMercunaNavOctree&&); \
	NO_API AMercunaNavOctree(const AMercunaNavOctree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMercunaNavOctree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMercunaNavOctree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMercunaNavOctree)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DebugDrawMode() { return STRUCT_OFFSET(AMercunaNavOctree, DebugDrawMode); } \
	FORCEINLINE static uint32 __PPO__MerNavOctreeRenderingComponent() { return STRUCT_OFFSET(AMercunaNavOctree, MerNavOctreeRenderingComponent); } \
	FORCEINLINE static uint32 __PPO__bBuildAsSublevel() { return STRUCT_OFFSET(AMercunaNavOctree, bBuildAsSublevel); } \
	FORCEINLINE static uint32 __PPO__bNeedsRebuild() { return STRUCT_OFFSET(AMercunaNavOctree, bNeedsRebuild); } \
	FORCEINLINE static uint32 __PPO__m_origin() { return STRUCT_OFFSET(AMercunaNavOctree, m_origin); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_11_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavOctree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
