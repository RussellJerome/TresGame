// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
struct FVector;
class AActor;
class UMercunaTask_MoveTo;
struct FAIRequestID;
#ifdef MERCUNA_MercunaTask_MoveTo_generated_h
#error "MercunaTask_MoveTo.generated.h already included, missing '#pragma once' in MercunaTask_MoveTo.h"
#endif
#define MERCUNA_MercunaTask_MoveTo_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMercunaMoveTo) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Controller); \
		P_GET_STRUCT(FVector,Z_Param_GoalLocation); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_UBOOL(Z_Param_AcceptPartialPath); \
		P_GET_UBOOL(Z_Param_bLockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaTask_MoveTo**)Z_Param__Result=UMercunaTask_MoveTo::MercunaMoveTo(Z_Param_Controller,Z_Param_GoalLocation,Z_Param_GoalActor,Z_Param_EndDistance,Z_Param_AcceptPartialPath,Z_Param_bLockAILogic); \
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


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMercunaMoveTo) \
	{ \
		P_GET_OBJECT(AAIController,Z_Param_Controller); \
		P_GET_STRUCT(FVector,Z_Param_GoalLocation); \
		P_GET_OBJECT(AActor,Z_Param_GoalActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndDistance); \
		P_GET_UBOOL(Z_Param_AcceptPartialPath); \
		P_GET_UBOOL(Z_Param_bLockAILogic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMercunaTask_MoveTo**)Z_Param__Result=UMercunaTask_MoveTo::MercunaMoveTo(Z_Param_Controller,Z_Param_GoalLocation,Z_Param_GoalActor,Z_Param_EndDistance,Z_Param_AcceptPartialPath,Z_Param_bLockAILogic); \
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


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercunaTask_MoveTo(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaTask_MoveTo(); \
public: \
	DECLARE_CLASS(UMercunaTask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(UMercunaTask_MoveTo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMercunaTask_MoveTo(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_UMercunaTask_MoveTo(); \
public: \
	DECLARE_CLASS(UMercunaTask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(UMercunaTask_MoveTo) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMercunaTask_MoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaTask_MoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercunaTask_MoveTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaTask_MoveTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercunaTask_MoveTo(UMercunaTask_MoveTo&&); \
	NO_API UMercunaTask_MoveTo(const UMercunaTask_MoveTo&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercunaTask_MoveTo(UMercunaTask_MoveTo&&); \
	NO_API UMercunaTask_MoveTo(const UMercunaTask_MoveTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercunaTask_MoveTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercunaTask_MoveTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercunaTask_MoveTo)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnRequestFailed() { return STRUCT_OFFSET(UMercunaTask_MoveTo, OnRequestFailed); } \
	FORCEINLINE static uint32 __PPO__OnMoveFinished() { return STRUCT_OFFSET(UMercunaTask_MoveTo, OnMoveFinished); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_15_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaTask_MoveTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
