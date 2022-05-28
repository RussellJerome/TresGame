// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetComponent_generated_h
#error "HoudiniAssetComponent.generated.h already included, missing '#pragma once' in HoudiniAssetComponent.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetComponent_generated_h

#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetAssetId(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssetId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetAssetId(); \
		P_NATIVE_END; \
	}


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniAssetComponent(); \
	friend HOUDINIENGINERUNTIME_API class UClass* Z_Construct_UClass_UHoudiniAssetComponent(); \
public: \
	DECLARE_CLASS(UHoudiniAssetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniAssetComponent(); \
	friend HOUDINIENGINERUNTIME_API class UClass* Z_Construct_UClass_UHoudiniAssetComponent(); \
public: \
	DECLARE_CLASS(UHoudiniAssetComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HoudiniEngineRuntime"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniAssetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniAssetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetComponent(UHoudiniAssetComponent&&); \
	NO_API UHoudiniAssetComponent(const UHoudiniAssetComponent&); \
public:


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniAssetComponent(UHoudiniAssetComponent&&); \
	NO_API UHoudiniAssetComponent(const UHoudiniAssetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniAssetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniAssetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniAssetComponent)


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BakeFolder() { return STRUCT_OFFSET(UHoudiniAssetComponent, BakeFolder); } \
	FORCEINLINE static uint32 __PPO__TempCookFolder() { return STRUCT_OFFSET(UHoudiniAssetComponent, TempCookFolder); }


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_12_PROLOG
#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_INCLASS \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_INCLASS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Public_HoudiniAssetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
