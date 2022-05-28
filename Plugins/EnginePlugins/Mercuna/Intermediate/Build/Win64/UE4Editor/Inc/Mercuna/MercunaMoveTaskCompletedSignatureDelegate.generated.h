// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
#ifdef MERCUNA_MercunaMoveTaskCompletedSignatureDelegate_generated_h
#error "MercunaMoveTaskCompletedSignatureDelegate.generated.h already included, missing '#pragma once' in MercunaMoveTaskCompletedSignatureDelegate.h"
#endif
#define MERCUNA_MercunaMoveTaskCompletedSignatureDelegate_generated_h

#define TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveTaskCompletedSignatureDelegate_h_8_DELEGATE \
struct _Script_Mercuna_eventMercunaMoveTaskCompletedSignature_Parms \
{ \
	TEnumAsByte<EMercunaMoveResult::Type> Result; \
	AAIController* AIController; \
}; \
static inline void FMercunaMoveTaskCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& MercunaMoveTaskCompletedSignature, EMercunaMoveResult::Type Result, AAIController* AIController) \
{ \
	_Script_Mercuna_eventMercunaMoveTaskCompletedSignature_Parms Parms; \
	Parms.Result=Result; \
	Parms.AIController=AIController; \
	MercunaMoveTaskCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TresGame_Plugins_EnginePlugins_Mercuna_Source_Mercuna_Public_MercunaMoveTaskCompletedSignatureDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
