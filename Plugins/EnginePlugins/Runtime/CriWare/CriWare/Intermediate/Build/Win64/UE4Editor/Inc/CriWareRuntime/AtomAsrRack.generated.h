// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomAsrRack;
#ifdef CRIWARERUNTIME_AtomAsrRack_generated_h
#error "AtomAsrRack.generated.h already included, missing '#pragma once' in AtomAsrRack.h"
#endif
#define CRIWARERUNTIME_AtomAsrRack_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDspBusSnapshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SnapshotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachDspBusSetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SettingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AttachDspBusSetting(Z_Param_SettingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachDspBusSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DetachDspBusSetting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsrRack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AsrRackId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetAsrRack(Z_Param_AsrRackId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultAsrRack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetDefaultAsrRack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusSendLevelByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceBusName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestBusName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusSendLevelByName(Z_Param_SourceBusName,Z_Param_DestBusName,Z_Param_Level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusVolumeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BusName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusVolumeByName(Z_Param_BusName,Z_Param_Volume); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDspBusSnapshot) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SnapshotName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Milliseconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachDspBusSetting) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SettingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AttachDspBusSetting(Z_Param_SettingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetachDspBusSetting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DetachDspBusSetting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAsrRack) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AsrRackId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetAsrRack(Z_Param_AsrRackId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultAsrRack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetDefaultAsrRack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusSendLevelByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SourceBusName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DestBusName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusSendLevelByName(Z_Param_SourceBusName,Z_Param_DestBusName,Z_Param_Level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBusVolumeByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BusName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBusVolumeByName(Z_Param_BusName,Z_Param_Volume); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomAsrRack(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomAsrRack(); \
public: \
	DECLARE_CLASS(UAtomAsrRack, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomAsrRack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAtomAsrRack(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomAsrRack(); \
public: \
	DECLARE_CLASS(UAtomAsrRack, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomAsrRack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomAsrRack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomAsrRack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomAsrRack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomAsrRack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomAsrRack(UAtomAsrRack&&); \
	NO_API UAtomAsrRack(const UAtomAsrRack&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomAsrRack(UAtomAsrRack&&); \
	NO_API UAtomAsrRack(const UAtomAsrRack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomAsrRack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomAsrRack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomAsrRack)


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_PRIVATE_PROPERTY_OFFSET
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_8_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
