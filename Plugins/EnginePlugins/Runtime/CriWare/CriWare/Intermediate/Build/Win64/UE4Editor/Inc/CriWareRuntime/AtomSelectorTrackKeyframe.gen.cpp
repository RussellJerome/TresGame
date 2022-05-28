// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSelectorTrackKeyframe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomSelectorTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorTrackKeyframe"), sizeof(FAtomSelectorTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorTrackKeyframe(FAtomSelectorTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSelectorTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSelectorTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomSelectorTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorTrackKeyframe"), sizeof(FAtomSelectorTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomSelectorTrackKeyframe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAtomSelectorTrackKeyframe>, EStructFlags(0x00000001));
			UProperty* NewProp_SelectorLabel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SelectorLabel"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SelectorLabel, FAtomSelectorTrackKeyframe), 0x0010000000000001);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FAtomSelectorTrackKeyframe), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomSelectorTrackKeyframe.h"));
			MetaData->SetValue(NewProp_SelectorLabel, TEXT("Category"), TEXT("AtomSelectorTrackKeyframe"));
			MetaData->SetValue(NewProp_SelectorLabel, TEXT("ModuleRelativePath"), TEXT("Public/AtomSelectorTrackKeyframe.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("AtomSelectorTrackKeyframe"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/AtomSelectorTrackKeyframe.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe_CRC() { return 2992043341U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
