// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SQEXSEAD_SQEXSEADPhysObjSeComponent_generated_h
#error "SQEXSEADPhysObjSeComponent.generated.h already included, missing '#pragma once' in SQEXSEADPhysObjSeComponent.h"
#endif
#define SQEXSEAD_SQEXSEADPhysObjSeComponent_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCalculation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StopInnerSoundsFadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopCalculation(Z_Param_StopInnerSoundsFadeTime); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCalculation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StopInnerSoundsFadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopCalculation(Z_Param_StopInnerSoundsFadeTime); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQEXSEADPhysObjSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADPhysObjSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADPhysObjSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSQEXSEADPhysObjSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADPhysObjSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADPhysObjSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQEXSEADPhysObjSeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQEXSEADPhysObjSeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADPhysObjSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADPhysObjSeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADPhysObjSeComponent(USQEXSEADPhysObjSeComponent&&); \
	NO_API USQEXSEADPhysObjSeComponent(const USQEXSEADPhysObjSeComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADPhysObjSeComponent(USQEXSEADPhysObjSeComponent&&); \
	NO_API USQEXSEADPhysObjSeComponent(const USQEXSEADPhysObjSeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADPhysObjSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADPhysObjSeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USQEXSEADPhysObjSeComponent)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyMeshComponent() { return STRUCT_OFFSET(USQEXSEADPhysObjSeComponent, MyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__VelocityAudioComponent() { return STRUCT_OFFSET(USQEXSEADPhysObjSeComponent, VelocityAudioComponent); }


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_14_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADPhysObjSeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
