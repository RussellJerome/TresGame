// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomCueNameTrackKeyframe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueNameTrackKeyframe() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomCueNameTrackKeyframe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueNameTrackKeyframe"), sizeof(FAtomCueNameTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueNameTrackKeyframe(FAtomCueNameTrackKeyframe::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueNameTrackKeyframe"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueNameTrackKeyframe
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueNameTrackKeyframe()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCueNameTrackKeyframe")),new UScriptStruct::TCppStructOps<FAtomCueNameTrackKeyframe>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueNameTrackKeyframe;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueNameTrackKeyframe"), sizeof(FAtomCueNameTrackKeyframe), Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomCueNameTrackKeyframe"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAtomCueNameTrackKeyframe>, EStructFlags(0x00000001));
			UProperty* NewProp_CueName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("CueName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CueName, FAtomCueNameTrackKeyframe), 0x0010000000000001);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FAtomCueNameTrackKeyframe), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomCueNameTrackKeyframe.h"));
			MetaData->SetValue(NewProp_CueName, TEXT("Category"), TEXT("AtomCueNameTrackKeyframe"));
			MetaData->SetValue(NewProp_CueName, TEXT("ModuleRelativePath"), TEXT("Public/AtomCueNameTrackKeyframe.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("AtomCueNameTrackKeyframe"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/AtomCueNameTrackKeyframe.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueNameTrackKeyframe_CRC() { return 765324660U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
