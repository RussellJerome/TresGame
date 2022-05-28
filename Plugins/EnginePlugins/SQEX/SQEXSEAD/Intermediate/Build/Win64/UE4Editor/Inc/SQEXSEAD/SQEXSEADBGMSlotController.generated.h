// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSQEXSEAD_Timing;
struct FSQEXSEAD_BGMOptions;
class USoundBase;
enum class ESQEXSEAD_BGMStoreBehaviour : uint8;
#ifdef SQEXSEAD_SQEXSEADBGMSlotController_generated_h
#error "SQEXSEADBGMSlotController.generated.h already included, missing '#pragma once' in SQEXSEADBGMSlotController.h"
#endif
#define SQEXSEAD_SQEXSEADBGMSlotController_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJustTiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSQEXSEAD_Timing*)Z_Param__Result=this->GetJustTiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModeIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetModeIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMusicalTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMusicalTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNearTiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSQEXSEAD_Timing*)Z_Param__Result=this->GetNearTiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNextSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTempo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTempo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSuspended(); \
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
	DECLARE_FUNCTION(execReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Ready(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetToDefaultOptions) \
	{ \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_NewOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetToDefaultOptions(Z_Param_NewOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSet) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Set(Z_Param_Sound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultOptions) \
	{ \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_NewOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDefaultOptions(Z_Param_NewOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMode(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModeByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetModeByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOptions) \
	{ \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_NewOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOptions(Z_Param_NewOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPath) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_SoundReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPath(Z_Param_SoundReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayFadeInTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayFadeInTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPriority(Z_Param_Priority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRestoreAfterFinish) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreAfterFinish); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRestoreAfterFinish(Z_Param_bRestoreAfterFinish); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResumeFadeInTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResumeFadeInTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSection(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSeekTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SeekTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSeekTime(Z_Param_SeekTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSilent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSilent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStaySuspendTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StaySuspendTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStaySuspendTime(Z_Param_StaySuspendTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStopFadeOutTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStopFadeOutTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStoreBehaviour) \
	{ \
		P_GET_ENUM(ESQEXSEAD_BGMStoreBehaviour,Z_Param_StoreBehaviour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour(Z_Param_StoreBehaviour)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuspendFadeOutTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSuspendFadeOutTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuspendSilent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSuspendSilent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolume(Z_Param_Volume,Z_Param_FadeTime); \
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
	DECLARE_FUNCTION(execUnreference) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Unreference(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJustTiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSQEXSEAD_Timing*)Z_Param__Result=this->GetJustTiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModeIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetModeIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMusicalTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMusicalTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNearTiming) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSQEXSEAD_Timing*)Z_Param__Result=this->GetNearTiming(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNextSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTempo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTempo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSuspended) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSuspended(); \
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
	DECLARE_FUNCTION(execReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Ready(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Reset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetToDefaultOptions) \
	{ \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_NewOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetToDefaultOptions(Z_Param_NewOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSet) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Set(Z_Param_Sound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultOptions) \
	{ \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_NewOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDefaultOptions(Z_Param_NewOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMode(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetModeByName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetModeByName(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOptions) \
	{ \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_NewOptions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOptions(Z_Param_NewOptions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPath) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_SoundReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPath(Z_Param_SoundReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayFadeInTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPlayFadeInTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Priority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPriority(Z_Param_Priority); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRestoreAfterFinish) \
	{ \
		P_GET_UBOOL(Z_Param_bRestoreAfterFinish); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRestoreAfterFinish(Z_Param_bRestoreAfterFinish); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResumeFadeInTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResumeFadeInTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSection(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSeekTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SeekTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSeekTime(Z_Param_SeekTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSilent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSilent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStaySuspendTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StaySuspendTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStaySuspendTime(Z_Param_StaySuspendTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStopFadeOutTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStopFadeOutTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStoreBehaviour) \
	{ \
		P_GET_ENUM(ESQEXSEAD_BGMStoreBehaviour,Z_Param_StoreBehaviour); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour(Z_Param_StoreBehaviour)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuspendFadeOutTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSuspendFadeOutTime(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSuspendSilent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSuspendSilent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolume(Z_Param_Volume,Z_Param_FadeTime); \
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
	DECLARE_FUNCTION(execUnreference) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Unreference(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQEXSEADBGMSlotController(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADBGMSlotController(); \
public: \
	DECLARE_CLASS(USQEXSEADBGMSlotController, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADBGMSlotController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSQEXSEADBGMSlotController(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADBGMSlotController(); \
public: \
	DECLARE_CLASS(USQEXSEADBGMSlotController, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADBGMSlotController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQEXSEADBGMSlotController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQEXSEADBGMSlotController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADBGMSlotController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADBGMSlotController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADBGMSlotController(USQEXSEADBGMSlotController&&); \
	NO_API USQEXSEADBGMSlotController(const USQEXSEADBGMSlotController&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADBGMSlotController(USQEXSEADBGMSlotController&&); \
	NO_API USQEXSEADBGMSlotController(const USQEXSEADBGMSlotController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADBGMSlotController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADBGMSlotController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USQEXSEADBGMSlotController)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Slot_() { return STRUCT_OFFSET(USQEXSEADBGMSlotController, Slot_); }


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_12_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADBGMSlotController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
