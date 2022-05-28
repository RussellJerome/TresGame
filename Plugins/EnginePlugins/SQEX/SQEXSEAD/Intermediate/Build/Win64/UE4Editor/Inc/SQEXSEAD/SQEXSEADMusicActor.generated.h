// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SQEXSEAD_SQEXSEADMusicActor_generated_h
#error "SQEXSEADMusicActor.generated.h already included, missing '#pragma once' in SQEXSEADMusicActor.h"
#endif
#define SQEXSEAD_SQEXSEADMusicActor_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlendMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_modeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BlendMode(Z_Param_modeName,Z_Param_Rate,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlendModeIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ModeIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BlendModeIndex(Z_Param_ModeIndex,Z_Param_Rate,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_modeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMode(Z_Param_modeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModeIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetModeIndex(Z_Param_ModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextSection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextSection(Z_Param_SectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextSectionIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextSectionIndex(Z_Param_SectionIndex); \
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


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AdjustVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlendMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_modeName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BlendMode(Z_Param_modeName,Z_Param_Rate,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlendModeIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ModeIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BlendModeIndex(Z_Param_ModeIndex,Z_Param_Rate,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeIn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeVolumeLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(Z_Param_StartTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_modeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMode(Z_Param_modeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModeIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ModeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetModeIndex(Z_Param_ModeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextSection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextSection(Z_Param_SectionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextSectionIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextSectionIndex(Z_Param_SectionIndex); \
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


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASQEXSEADMusicActor(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_ASQEXSEADMusicActor(); \
public: \
	DECLARE_CLASS(ASQEXSEADMusicActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), SQEXSEAD_API) \
	DECLARE_SERIALIZER(ASQEXSEADMusicActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASQEXSEADMusicActor(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_ASQEXSEADMusicActor(); \
public: \
	DECLARE_CLASS(ASQEXSEADMusicActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), SQEXSEAD_API) \
	DECLARE_SERIALIZER(ASQEXSEADMusicActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SQEXSEAD_API ASQEXSEADMusicActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASQEXSEADMusicActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SQEXSEAD_API, ASQEXSEADMusicActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASQEXSEADMusicActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SQEXSEAD_API ASQEXSEADMusicActor(ASQEXSEADMusicActor&&); \
	SQEXSEAD_API ASQEXSEADMusicActor(const ASQEXSEADMusicActor&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SQEXSEAD_API ASQEXSEADMusicActor(ASQEXSEADMusicActor&&); \
	SQEXSEAD_API ASQEXSEADMusicActor(const ASQEXSEADMusicActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SQEXSEAD_API, ASQEXSEADMusicActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASQEXSEADMusicActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASQEXSEADMusicActor)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_8_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADMusicActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
