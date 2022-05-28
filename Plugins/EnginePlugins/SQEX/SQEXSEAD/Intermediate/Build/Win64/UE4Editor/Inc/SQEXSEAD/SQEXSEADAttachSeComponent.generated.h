// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQEXSEAD_SQEXSEADAttachSeComponent_generated_h
#error "SQEXSEADAttachSeComponent.generated.h already included, missing '#pragma once' in SQEXSEADAttachSeComponent.h"
#endif
#define SQEXSEAD_SQEXSEADAttachSeComponent_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQEXSEADAttachSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADAttachSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADAttachSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADAttachSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSQEXSEADAttachSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADAttachSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADAttachSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADAttachSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQEXSEADAttachSeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQEXSEADAttachSeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADAttachSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADAttachSeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADAttachSeComponent(USQEXSEADAttachSeComponent&&); \
	NO_API USQEXSEADAttachSeComponent(const USQEXSEADAttachSeComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADAttachSeComponent(USQEXSEADAttachSeComponent&&); \
	NO_API USQEXSEADAttachSeComponent(const USQEXSEADAttachSeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADAttachSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADAttachSeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USQEXSEADAttachSeComponent)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyAudioComponent() { return STRUCT_OFFSET(USQEXSEADAttachSeComponent, MyAudioComponent); } \
	FORCEINLINE static uint32 __PPO__MyAttachComponent() { return STRUCT_OFFSET(USQEXSEADAttachSeComponent, MyAttachComponent); }


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_10_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADAttachSeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
