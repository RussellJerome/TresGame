// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSQEXSEAD_BGMOptions;
class USQEXSEADBGMSlotController;
struct FVector;
class USoundBase;
class USoundAttenuation;
#ifdef SQEXSEAD_SQEXSEADStatics_generated_h
#error "SQEXSEADStatics.generated.h already included, missing '#pragma once' in SQEXSEADStatics.h"
#endif
#define SQEXSEAD_SQEXSEADStatics_generated_h

#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAudioVolumeCtrl_SetEnable) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AudioVolumeActorName); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USQEXSEADStatics::AudioVolumeCtrl_SetEnable(Z_Param_WorldContextObject,Z_Param_AudioVolumeActorName,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoSeCtrl_SetEnable) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::AutoSeCtrl_SetEnable(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CallEvent(Z_Param_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_DebugMute) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_UBOOL(Z_Param_bToBeMuted); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_DebugMute(Z_Param_CategoryName,Z_Param_bToBeMuted,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_GetVolume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USQEXSEADStatics::CategoryCtrl_GetVolume(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_Resume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_Resume(Z_Param_CategoryName,Z_Param_FadeInTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_SetPitch) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_SetPitch(Z_Param_CategoryName,Z_Param_Pitch,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_SetVolume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_SetVolume(Z_Param_CategoryName,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_SetVolumeWithLayer) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_SetVolumeWithLayer(Z_Param_CategoryName,Z_Param_LayerIndex,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_Stop) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_Stop(Z_Param_CategoryName,Z_Param_FadeOutTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_Suspend) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_Suspend(Z_Param_CategoryName,Z_Param_FadeOutTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBGMSlot) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USQEXSEADBGMSlotController**)Z_Param__Result=USQEXSEADStatics::CreateBGMSlot(Z_Param_Name,Z_Param_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBGMSlotController) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USQEXSEADBGMSlotController**)Z_Param__Result=USQEXSEADStatics::GetBGMSlotController(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumAudibleSoundsAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USQEXSEADStatics::GetNumAudibleSoundsAtLocation(Z_Param_WorldContextObject,Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayingBGMSlotController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USQEXSEADBGMSlotController**)Z_Param__Result=USQEXSEADStatics::GetPlayingBGMSlotController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingBGM) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USQEXSEADStatics::IsPlayingBGM(Z_Param_Sound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadySetPathBGM) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_OBJECT(USoundBase,Z_Param_SoundReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ReadySetPathBGM(Z_Param_Name,Z_Param_SoundReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllBGM) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetAllBGM(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllCategoryTemporarySettings) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_resetFadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetAllCategoryTemporarySettings(Z_Param_resetFadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetEffectPreset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_resetFadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetEffectPreset(Z_Param_resetFadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOverrideAttenuation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetOverrideAttenuation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeBGM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResumeBGM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeBGM_OptionalFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResumeBGM_OptionalFade(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConfigCategoryVolume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetConfigCategoryVolume(Z_Param_CategoryName,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConfigVolumeAllCategory) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetConfigVolumeAllCategory(Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectPreset) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PresetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetEffectPreset(Z_Param_PresetName,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableBGMAutoResume) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetEnableBGMAutoResume(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetExternalParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParamName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetExternalParameter(Z_Param_ParamName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverrideAttenuation) \
	{ \
		P_GET_OBJECT(USoundAttenuation,Z_Param_OverrideAttenuation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetOverrideAttenuation(Z_Param_OverrideAttenuation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSEADAudioVolumeUpdateEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetSEADAudioVolumeUpdateEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllBGM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::StopAllBGM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllBGM_OptionalFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::StopAllBGM_OptionalFade(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllCategorySounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::StopAllCategorySounds(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendBGM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SuspendBGM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendBGM_OptionalFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SuspendBGM_OptionalFade(Z_Param_FadeTime); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAudioVolumeCtrl_SetEnable) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AudioVolumeActorName); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USQEXSEADStatics::AudioVolumeCtrl_SetEnable(Z_Param_WorldContextObject,Z_Param_AudioVolumeActorName,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutoSeCtrl_SetEnable) \
	{ \
		P_GET_UBOOL(Z_Param_Enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::AutoSeCtrl_SetEnable(Z_Param_Enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallEvent) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CallEvent(Z_Param_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_DebugMute) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_UBOOL(Z_Param_bToBeMuted); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_DebugMute(Z_Param_CategoryName,Z_Param_bToBeMuted,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_GetVolume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=USQEXSEADStatics::CategoryCtrl_GetVolume(Z_Param_CategoryName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_Resume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeInTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_Resume(Z_Param_CategoryName,Z_Param_FadeInTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_SetPitch) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Pitch); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_SetPitch(Z_Param_CategoryName,Z_Param_Pitch,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_SetVolume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_SetVolume(Z_Param_CategoryName,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_SetVolumeWithLayer) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_SetVolumeWithLayer(Z_Param_CategoryName,Z_Param_LayerIndex,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_Stop) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_Stop(Z_Param_CategoryName,Z_Param_FadeOutTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCategoryCtrl_Suspend) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeOutTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::CategoryCtrl_Suspend(Z_Param_CategoryName,Z_Param_FadeOutTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBGMSlot) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT(FSQEXSEAD_BGMOptions,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USQEXSEADBGMSlotController**)Z_Param__Result=USQEXSEADStatics::CreateBGMSlot(Z_Param_Name,Z_Param_Options); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBGMSlotController) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USQEXSEADBGMSlotController**)Z_Param__Result=USQEXSEADStatics::GetBGMSlotController(Z_Param_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumAudibleSoundsAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=USQEXSEADStatics::GetNumAudibleSoundsAtLocation(Z_Param_WorldContextObject,Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayingBGMSlotController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USQEXSEADBGMSlotController**)Z_Param__Result=USQEXSEADStatics::GetPlayingBGMSlotController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingBGM) \
	{ \
		P_GET_OBJECT(USoundBase,Z_Param_Sound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=USQEXSEADStatics::IsPlayingBGM(Z_Param_Sound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadySetPathBGM) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_OBJECT(USoundBase,Z_Param_SoundReference); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ReadySetPathBGM(Z_Param_Name,Z_Param_SoundReference); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllBGM) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetAllBGM(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAllCategoryTemporarySettings) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_resetFadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetAllCategoryTemporarySettings(Z_Param_resetFadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetEffectPreset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_resetFadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetEffectPreset(Z_Param_resetFadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOverrideAttenuation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResetOverrideAttenuation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeBGM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResumeBGM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeBGM_OptionalFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::ResumeBGM_OptionalFade(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConfigCategoryVolume) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetConfigCategoryVolume(Z_Param_CategoryName,Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConfigVolumeAllCategory) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetConfigVolumeAllCategory(Z_Param_Volume,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectPreset) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PresetName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetEffectPreset(Z_Param_PresetName,Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnableBGMAutoResume) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetEnableBGMAutoResume(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetExternalParameter) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ParamName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetExternalParameter(Z_Param_ParamName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOverrideAttenuation) \
	{ \
		P_GET_OBJECT(USoundAttenuation,Z_Param_OverrideAttenuation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetOverrideAttenuation(Z_Param_OverrideAttenuation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSEADAudioVolumeUpdateEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SetSEADAudioVolumeUpdateEnabled(Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllBGM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::StopAllBGM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllBGM_OptionalFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::StopAllBGM_OptionalFade(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAllCategorySounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::StopAllCategorySounds(Z_Param_FadeTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendBGM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SuspendBGM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSuspendBGM_OptionalFade) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FadeTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQEXSEADStatics::SuspendBGM_OptionalFade(Z_Param_FadeTime); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQEXSEADStatics(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADStatics(); \
public: \
	DECLARE_CLASS(USQEXSEADStatics, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADStatics) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSQEXSEADStatics(); \
	friend SQEXSEAD_API class UClass* Z_Construct_UClass_USQEXSEADStatics(); \
public: \
	DECLARE_CLASS(USQEXSEADStatics, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SQEXSEAD"), NO_API) \
	DECLARE_SERIALIZER(USQEXSEADStatics) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQEXSEADStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQEXSEADStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADStatics(USQEXSEADStatics&&); \
	NO_API USQEXSEADStatics(const USQEXSEADStatics&); \
public:


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQEXSEADStatics(USQEXSEADStatics&&); \
	NO_API USQEXSEADStatics(const USQEXSEADStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQEXSEADStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQEXSEADStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USQEXSEADStatics)


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_12_PROLOG
#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_INCLASS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_SQEX_SQEXSEAD_Source_SQEXSEAD_Public_SQEXSEADStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
