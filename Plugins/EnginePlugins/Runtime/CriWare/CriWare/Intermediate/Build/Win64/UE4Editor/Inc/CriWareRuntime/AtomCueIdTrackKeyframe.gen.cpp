// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomCueIdTrackKeyframe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueIdTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomCueIdTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueIdTrackKeyframe"), sizeof(FAtomCueIdTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueIdTrackKeyframe(FAtomCueIdTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueIdTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueIdTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueIdTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueIdTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomCueIdTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueIdTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueIdTrackKeyframe"), sizeof(FAtomCueIdTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomCueIdTrackKeyframe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAtomCueIdTrackKeyframe>, EStructFlags(0x00000001));
			UProperty* NewProp_CueId = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CueId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CueId, FAtomCueIdTrackKeyframe), 0x0010000000000001);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FAtomCueIdTrackKeyframe), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomCueIdTrackKeyframe.h"));
			MetaData->SetValue(NewProp_CueId, TEXT("Category"), TEXT("AtomCueIdTrackKeyframe"));
			MetaData->SetValue(NewProp_CueId, TEXT("ModuleRelativePath"), TEXT("Public/AtomCueIdTrackKeyframe.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("AtomCueIdTrackKeyframe"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/AtomCueIdTrackKeyframe.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe_CRC() { return 4074270048U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
