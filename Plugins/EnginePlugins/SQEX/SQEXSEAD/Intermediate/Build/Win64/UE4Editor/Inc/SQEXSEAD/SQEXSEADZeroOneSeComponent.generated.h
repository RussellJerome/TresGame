// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQEXSEAD_SQEXSEADZeroOneSeComponent_generated_h
#error "SQEXSEADZeroOneSeComponent.generated.h already included, missing '#pragma once' in SQEXSEADZeroOneSeComponent.h"
#endif
#define SQEXSEAD_SQEXSEADZeroOneSeComponent_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZeroOneValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetZeroOneValue(Z_Param_Slot,Z_Param_Value,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetZeroOneValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetZeroOneValue(Z_Param_Slot,Z_Param_Value,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQEXSEADZeroOneSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADZeroOneSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADZeroOneSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADZeroOneSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSQEXSEADZeroOneSeComponent(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADZeroOneSeComponent(); \
public: \
	DECLARE_CLASS(USQEXSEADZeroOneSeComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADZeroOneSeComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQEXSEADZeroOneSeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQEXSEADZeroOneSeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADZeroOneSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADZeroOneSeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADZeroOneSeComponent(USQEXSEADZeroOneSeComponent&&); \
	NO_API USQEXSEADZeroOneSeComponent(const USQEXSEADZeroOneSeComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADZeroOneSeComponent(USQEXSEADZeroOneSeComponent&&); \
	NO_API USQEXSEADZeroOneSeComponent(const USQEXSEADZeroOneSeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADZeroOneSeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADZeroOneSeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USQEXSEADZeroOneSeComponent)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyAudioComponent() { return STRUCT_OFFSET(USQEXSEADZeroOneSeComponent, MyAudioComponent); }


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_11_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADZeroOneSeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
