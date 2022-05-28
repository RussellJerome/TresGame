// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FManaEventPointInfo;
enum class EManaComponentStatus : uint8;
class UTexture;
class UManaTexture;
#ifdef CRIWARERUNTIME_ManaComponent_generated_h
#error "ManaComponent.generated.h already included, missing '#pragma once' in ManaComponent.h"
#endif
#define CRIWARERUNTIME_ManaComponent_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_17_DELEGATE \
struct ManaComponent_eventOnEventPoint_Parms \
{ \
	FManaEventPointInfo EventPointInfo; \
}; \
static inline void FOnEventPoint_DelegateWrapper(const FScriptDelegate& OnEventPoint, FManaEventPointInfo EventPointInfo) \
{ \
	ManaComponent_eventOnEventPoint_Parms Parms; \
	Parms.EventPointInfo=EventPointInfo; \
	OnEventPoint.ProcessDelegate<UObject>(&Parms); \
}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_16_DELEGATE \
struct ManaComponent_eventOnSubtitleChanged_Parms \
{ \
	FText Subtitle; \
}; \
static inline void FOnSubtitleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSubtitleChanged, const FText& Subtitle) \
{ \
	ManaComponent_eventOnSubtitleChanged_Parms Parms; \
	Parms.Subtitle=Subtitle; \
	OnSubtitleChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeSubtitlesChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeSubtitlesChannel(Z_Param_Channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSubtitles) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableSubtitles(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EManaComponentStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=this->GetTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVolume(); \
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
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrepare) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Prepare(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCachedData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetCachedData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeekToPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FrameNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SeekToPosition(Z_Param_FrameNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCachedData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCachedData(Z_Param_Out_DataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTexture) \
	{ \
		P_GET_OBJECT(UManaTexture,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTexture(Z_Param_Texture); \
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
	} \
 \
	DECLARE_FUNCTION(execStopAndWaitCompletion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAndWaitCompletion(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeSubtitlesChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeSubtitlesChannel(Z_Param_Channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSubtitles) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableSubtitles(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EManaComponentStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture**)Z_Param__Result=this->GetTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetVolume(); \
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
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrepare) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Prepare(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCachedData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetCachedData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSeekToPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_FrameNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SeekToPosition(Z_Param_FrameNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCachedData) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_DataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCachedData(Z_Param_Out_DataArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTexture) \
	{ \
		P_GET_OBJECT(UManaTexture,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTexture(Z_Param_Texture); \
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
	} \
 \
	DECLARE_FUNCTION(execStopAndWaitCompletion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAndWaitCompletion(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UManaComponent(); \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UManaComponent(); \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaComponent)


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_12_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
