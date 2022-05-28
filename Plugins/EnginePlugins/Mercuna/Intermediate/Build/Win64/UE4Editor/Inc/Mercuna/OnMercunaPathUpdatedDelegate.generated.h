// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MERCUNA_OnMercunaPathUpdatedDelegate_generated_h
#error "OnMercunaPathUpdatedDelegate.generated.h already included, missing '#pragma once' in OnMercunaPathUpdatedDelegate.h"
#endif
#define MERCUNA_OnMercunaPathUpdatedDelegate_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_OnMercunaPathUpdatedDelegate_h_6_DELEGATE \
struct _Script_Mercuna_eventOnMercunaPathUpdated_Parms \
{ \
	TEnumAsByte<EMercunaPathEvent::Type> PathEvent; \
}; \
static inline void FOnMercunaPathUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnMercunaPathUpdated, EMercunaPathEvent::Type PathEvent) \
{ \
	_Script_Mercuna_eventOnMercunaPathUpdated_Parms Parms; \
	Parms.PathEvent=PathEvent; \
	OnMercunaPathUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_OnMercunaPathUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
