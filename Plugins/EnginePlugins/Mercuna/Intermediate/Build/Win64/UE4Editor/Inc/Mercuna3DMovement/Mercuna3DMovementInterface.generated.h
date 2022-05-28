// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MERCUNA3DMOVEMENT_Mercuna3DMovementInterface_generated_h
#error "Mercuna3DMovementInterface.generated.h already included, missing '#pragma once' in Mercuna3DMovementInterface.h"
#endif
#define MERCUNA3DMOVEMENT_Mercuna3DMovementInterface_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_RPC_WRAPPERS
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMercuna3DMovementInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercuna3DMovementInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercuna3DMovementInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercuna3DMovementInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercuna3DMovementInterface(UMercuna3DMovementInterface&&); \
	NO_API UMercuna3DMovementInterface(const UMercuna3DMovementInterface&); \
public:


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMercuna3DMovementInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMercuna3DMovementInterface(UMercuna3DMovementInterface&&); \
	NO_API UMercuna3DMovementInterface(const UMercuna3DMovementInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMercuna3DMovementInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMercuna3DMovementInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMercuna3DMovementInterface)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
private: \
	static void StaticRegisterNativesUMercuna3DMovementInterface(); \
	friend MERCUNA3DMOVEMENT_API class UClass* Z_Construct_UClass_UMercuna3DMovementInterface(); \
public: \
	DECLARE_CLASS(UMercuna3DMovementInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Mercuna3DMovement"), NO_API) \
	DECLARE_SERIALIZER(UMercuna3DMovementInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMercuna3DMovementInterface() {} \
public: \
	typedef UMercuna3DMovementInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IMercuna3DMovementInterface() {} \
public: \
	typedef UMercuna3DMovementInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_6_PROLOG
#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_RPC_WRAPPERS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna3DMovement_Public_Mercuna3DMovementInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
