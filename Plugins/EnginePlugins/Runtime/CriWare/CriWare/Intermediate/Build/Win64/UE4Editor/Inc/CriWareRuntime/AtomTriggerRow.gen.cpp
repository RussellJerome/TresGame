// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomTriggerRow.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerRow() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomTriggerRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTriggerRow, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTriggerRow"), sizeof(FAtomTriggerRow), Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomTriggerRow(FAtomTriggerRow::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomTriggerRow"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomTriggerRow")),new UScriptStruct::TCppStructOps<FAtomTriggerRow>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomTriggerRow;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomTriggerRow"), sizeof(FAtomTriggerRow), Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomTriggerRow"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FTableRowBase(), new UScriptStruct::TCppStructOps<FAtomTriggerRow>, EStructFlags(0x00000201));
			UProperty* NewProp_Cue = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Cue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Cue, FAtomTriggerRow), 0x0010000000000005, Z_Construct_UClass_USoundAtomCue_NoRegister());
			UProperty* NewProp_Bone = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Bone"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Bone, FAtomTriggerRow), 0x0010000000000005);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FAtomTriggerRow), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomTriggerRow.h"));
			MetaData->SetValue(NewProp_Cue, TEXT("Category"), TEXT("AtomTriggerRow"));
			MetaData->SetValue(NewProp_Cue, TEXT("ModuleRelativePath"), TEXT("Public/AtomTriggerRow.h"));
			MetaData->SetValue(NewProp_Bone, TEXT("Category"), TEXT("AtomTriggerRow"));
			MetaData->SetValue(NewProp_Bone, TEXT("ModuleRelativePath"), TEXT("Public/AtomTriggerRow.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("AtomTriggerRow"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/AtomTriggerRow.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomTriggerRow_CRC() { return 1319632506U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
