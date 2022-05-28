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
struct FHitResult;
struct FVector;
#ifdef SQEXSEAD_SQEXSEADCollisionEventSeComponent_generated_h
#error "SQEXSEADCollisionEventSeComponent.generated.h already included, missing '#pragma once' in SQEXSEADCollisionEventSeComponent.h"
#endif
#define SQEXSEAD_SQEXSEADCollisionEventSeComponent_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFracture) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnFracture(Z_Param_Out_HitPoint,Z_Param_Out_HitDirection); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFracture) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnFracture(Z_Param_Out_HitPoint,Z_Param_Out_HitDirection); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQEXSEADCollisionEventSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADCollisionEventSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADCollisionEventSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADCollisionEventSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSQEXSEADCollisionEventSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADCollisionEventSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADCollisionEventSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADCollisionEventSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQEXSEADCollisionEventSeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQEXSEADCollisionEventSeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADCollisionEventSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADCollisionEventSeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADCollisionEventSeComponent(USQEXSEADCollisionEventSeComponent&&); \
	NO_API USQEXSEADCollisionEventSeComponent(const USQEXSEADCollisionEventSeComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADCollisionEventSeComponent(USQEXSEADCollisionEventSeComponent&&); \
	NO_API USQEXSEADCollisionEventSeComponent(const USQEXSEADCollisionEventSeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADCollisionEventSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADCollisionEventSeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USQEXSEADCollisionEventSeComponent)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyMeshComponent() { return STRUCT_OFFSET(USQEXSEADCollisionEventSeComponent, MyMeshComponent); } \
	FORCEINLINE static uint32 __PPO__MyDestructibleComponent() { return STRUCT_OFFSET(USQEXSEADCollisionEventSeComponent, MyDestructibleComponent); }


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_14_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADCollisionEventSeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
