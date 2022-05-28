// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAtomComponentStatus : uint8;
class USoundAtomCue;
#ifdef CRIWARERUNTIME_AtomComponent_generated_h
#error "AtomComponent.generated.h already included, missing '#pragma once' in AtomComponent.h"
#endif
#define CRIWARERUNTIME_AtomComponent_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_18_DELEGATE \
static inline void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished) \
{ \
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAtomComponentStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
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
	DECLARE_FUNCTION(execPause) \
	{ \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(Z_Param_bPause); \
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
	DECLARE_FUNCTION(execSetAisacByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ControlName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ControlValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAisacByName(Z_Param_ControlName,Z_Param_ControlValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusSendLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BusId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusSendLevel(Z_Param_BusId,Z_Param_Level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusSendLevelOffset) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BusId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LevelOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusSendLevelOffset(Z_Param_BusId,Z_Param_LevelOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextBlockIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BlockIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextBlockIndex(Z_Param_BlockIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPitch(Z_Param_Pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitchMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPitchMultiplier(Z_Param_NewPitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectorLabel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Selector); \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSelectorLabel(Z_Param_Selector,Z_Param_label); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSound) \
	{ \
		P_GET_OBJECT(USoundAtomCue,Z_Param_NewSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSound(Z_Param_NewSound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolume(Z_Param_Volume); \
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


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EAtomComponentStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsPaused(); \
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
	DECLARE_FUNCTION(execPause) \
	{ \
		P_GET_UBOOL(Z_Param_bPause); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pause(Z_Param_bPause); \
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
	DECLARE_FUNCTION(execSetAisacByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ControlName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ControlValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAisacByName(Z_Param_ControlName,Z_Param_ControlValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusSendLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BusId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusSendLevel(Z_Param_BusId,Z_Param_Level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusSendLevelOffset) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BusId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LevelOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusSendLevelOffset(Z_Param_BusId,Z_Param_LevelOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextBlockIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BlockIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetNextBlockIndex(Z_Param_BlockIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitch) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPitch(Z_Param_Pitch); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPitchMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPitchMultiplier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPitchMultiplier(Z_Param_NewPitchMultiplier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectorLabel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Selector); \
		P_GET_PROPERTY(UStrProperty,Z_Param_label); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSelectorLabel(Z_Param_Selector,Z_Param_label); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSound) \
	{ \
		P_GET_OBJECT(USoundAtomCue,Z_Param_NewSound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSound(Z_Param_NewSound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVolume(Z_Param_Volume); \
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


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomComponent(); \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAtomComponent(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomComponent(); \
public: \
	DECLARE_CLASS(UAtomComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomComponent(UAtomComponent&&); \
	NO_API UAtomComponent(const UAtomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomComponent)


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_14_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
