// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MERCUNA3DMOVEMENT_Mercuna3DMovementComponent_generated_h
#error "Mercuna3DMovementComponent.generated.h already included, missing '#pragma once' in Mercuna3DMovementComponent.h"
#endif
#define MERCUNA3DMOVEMENT_Mercuna3DMovementComponent_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocalVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetLocalVelocity(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocalVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetLocalVelocity(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMercuna3DMovementComponent(); \
	friend MERCUNA3DMOVEMENT_API class UClass* Z_Construct_UClass_UMercuna3DMovementComponent(); \
public: \
	DECLARE_CLASS(UMercuna3DMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Mercuna3DMovement"), NO_API) \
	DECLARE_SERIALIZER(UMercuna3DMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMercuna3DMovementComponent*>(this); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMercuna3DMovementComponent(); \
	friend MERCUNA3DMOVEMENT_API class UClass* Z_Construct_UClass_UMercuna3DMovementComponent(); \
public: \
	DECLARE_CLASS(UMercuna3DMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Mercuna3DMovement"), NO_API) \
	DECLARE_SERIALIZER(UMercuna3DMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UMercuna3DMovementComponent*>(this); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMercuna3DMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercuna3DMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercuna3DMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercuna3DMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercuna3DMovementComponent(UMercuna3DMovementComponent&&); \
	NO_API UMercuna3DMovementComponent(const UMercuna3DMovementComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercuna3DMovementComponent(UMercuna3DMovementComponent&&); \
	NO_API UMercuna3DMovementComponent(const UMercuna3DMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercuna3DMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercuna3DMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMercuna3DMovementComponent)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementProperties() { return STRUCT_OFFSET(UMercuna3DMovementComponent, MovementProperties); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(UMercuna3DMovementComponent, Acceleration); } \
	FORCEINLINE static uint32 __PPO__AngularVelocity() { return STRUCT_OFFSET(UMercuna3DMovementComponent, AngularVelocity); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_9_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
