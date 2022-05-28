// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomTrackKeyframe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTrackKeyframe"), sizeof(FAtomTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomTrackKeyframe(FAtomTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTrackKeyframe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomTrackKeyframe"), sizeof(FAtomTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomTrackKeyframe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAtomTrackKeyframe>, EStructFlags(0x00000001));
			UProperty* NewProp_Cue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Cue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Cue, FAtomTrackKeyframe), 0x0010000000000001, Z_Construct_UClass_USoundAtomCue_NoRegister());
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FAtomTrackKeyframe), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomTrackKeyframe.h"));
			MetaData->SetValue(NewProp_Cue, TEXT("Category"), TEXT("AtomTrackKeyframe"));
			MetaData->SetValue(NewProp_Cue, TEXT("ModuleRelativePath"), TEXT("Public/AtomTrackKeyframe.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("AtomTrackKeyframe"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/AtomTrackKeyframe.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomTrackKeyframe_CRC() { return 872317560U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
