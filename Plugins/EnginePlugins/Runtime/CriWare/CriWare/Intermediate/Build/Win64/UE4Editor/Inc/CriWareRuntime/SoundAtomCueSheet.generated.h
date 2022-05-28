// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCueSheet;
#ifdef CRIWARERUNTIME_SoundAtomCueSheet_generated_h
#error "SoundAtomCueSheet.generated.h already included, missing '#pragma once' in SoundAtomCueSheet.h"
#endif
#define CRIWARERUNTIME_SoundAtomCueSheet_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDspBusSnapshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SnapshotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachDspBusSetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SettingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::AttachDspBusSetting(Z_Param_SettingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachDspBusSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::DetachDspBusSetting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAcb) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AcbName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAcb(Z_Param_AcbName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseAcb) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AcbName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::ReleaseAcb(Z_Param_AcbName); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDspBusSnapshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SnapshotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachDspBusSetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SettingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::AttachDspBusSetting(Z_Param_SettingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachDspBusSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::DetachDspBusSetting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAcb) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AcbName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAcb(Z_Param_AcbName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseAcb) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AcbName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USoundAtomCueSheet::ReleaseAcb(Z_Param_AcbName); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomCueSheet(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_USoundAtomCueSheet(); \
public: \
	DECLARE_CLASS(USoundAtomCueSheet, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCueSheet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAtomCueSheet(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_USoundAtomCueSheet(); \
public: \
	DECLARE_CLASS(USoundAtomCueSheet, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCueSheet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundAtomCueSheet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCueSheet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCueSheet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCueSheet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCueSheet(USoundAtomCueSheet&&); \
	NO_API USoundAtomCueSheet(const USoundAtomCueSheet&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCueSheet(USoundAtomCueSheet&&); \
	NO_API USoundAtomCueSheet(const USoundAtomCueSheet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCueSheet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCueSheet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundAtomCueSheet)


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_9_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
