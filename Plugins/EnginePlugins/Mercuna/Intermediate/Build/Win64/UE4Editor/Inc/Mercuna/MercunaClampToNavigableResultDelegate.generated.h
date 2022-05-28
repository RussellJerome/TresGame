// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MERCUNA_MercunaClampToNavigableResultDelegate_generated_h
#error "MercunaClampToNavigableResultDelegate.generated.h already included, missing '#pragma once' in MercunaClampToNavigableResultDelegate.h"
#endif
#define MERCUNA_MercunaClampToNavigableResultDelegate_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableResultDelegate_h_6_DELEGATE \
struct _Script_Mercuna_eventMercunaClampToNavigableResult_Parms \
{ \
	FVector ClampedPosition; \
}; \
static inline void FMercunaClampToNavigableResult_DelegateWrapper(const FMulticastScriptDelegate& MercunaClampToNavigableResult, FVector ClampedPosition) \
{ \
	_Script_Mercuna_eventMercunaClampToNavigableResult_Parms Parms; \
	Parms.ClampedPosition=ClampedPosition; \
	MercunaClampToNavigableResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaClampToNavigableResultDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
