// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MERCUNA_MercunaRaycastResultDelegate_generated_h
#error "MercunaRaycastResultDelegate.generated.h already included, missing '#pragma once' in MercunaRaycastResultDelegate.h"
#endif
#define MERCUNA_MercunaRaycastResultDelegate_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastResultDelegate_h_6_DELEGATE \
struct _Script_Mercuna_eventMercunaRaycastResult_Parms \
{ \
	FVector HitPosition; \
}; \
static inline void FMercunaRaycastResult_DelegateWrapper(const FMulticastScriptDelegate& MercunaRaycastResult, FVector HitPosition) \
{ \
	_Script_Mercuna_eventMercunaRaycastResult_Parms Parms; \
	Parms.HitPosition=HitPosition; \
	MercunaRaycastResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaRaycastResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
