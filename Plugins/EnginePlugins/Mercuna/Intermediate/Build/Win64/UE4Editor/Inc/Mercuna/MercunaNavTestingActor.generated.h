// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MERCUNA_MercunaNavTestingActor_generated_h
#error "MercunaNavTestingActor.generated.h already included, missing '#pragma once' in MercunaNavTestingActor.h"
#endif
#define MERCUNA_MercunaNavTestingActor_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPathUpdate) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PathEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPathUpdate(EMercunaPathEvent::Type(Z_Param_PathEvent)); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPathUpdate) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_PathEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPathUpdate(EMercunaPathEvent::Type(Z_Param_PathEvent)); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMercunaNavTestingActor(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_AMercunaNavTestingActor(); \
public: \
	DECLARE_CLASS(AMercunaNavTestingActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(AMercunaNavTestingActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMercunaNavTestingActor(); \
	friend MERCUNA_API class UClass* Z_Construct_UClass_AMercunaNavTestingActor(); \
public: \
	DECLARE_CLASS(AMercunaNavTestingActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Mercuna"), NO_API) \
	DECLARE_SERIALIZER(AMercunaNavTestingActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMercunaNavTestingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMercunaNavTestingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMercunaNavTestingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMercunaNavTestingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMercunaNavTestingActor(AMercunaNavTestingActor&&); \
	NO_API AMercunaNavTestingActor(const AMercunaNavTestingActor&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMercunaNavTestingActor(AMercunaNavTestingActor&&); \
	NO_API AMercunaNavTestingActor(const AMercunaNavTestingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMercunaNavTestingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMercunaNavTestingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMercunaNavTestingActor)


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AMercunaNavTestingActor, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__Path() { return STRUCT_OFFSET(AMercunaNavTestingActor, Path); }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_11_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_INCLASS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaNavTestingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
