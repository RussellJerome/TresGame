// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADBGMControlTrackKey.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADBGMControlTrackKey() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes();
// End Cross Module References
class UScriptStruct* FSQEXSEADBGMControlTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADBGMControlTrackKey"), sizeof(FSQEXSEADBGMControlTrackKey), Get_Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADBGMControlTrackKey(FSQEXSEADBGMControlTrackKey::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADBGMControlTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADBGMControlTrackKey
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADBGMControlTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADBGMControlTrackKey")),new UScriptStruct::TCppStructOps<FSQEXSEADBGMControlTrackKey>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADBGMControlTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADBGMControlTrackKey"), sizeof(FSQEXSEADBGMControlTrackKey), Get_Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADBGMControlTrackKey"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADBGMControlTrackKey>, EStructFlags(0x00000001));
			UProperty* NewProp_ModeIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ModeIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ModeIndex, FSQEXSEADBGMControlTrackKey), 0x0010000000000001);
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, FSQEXSEADBGMControlTrackKey), 0x0010000000000001);
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SlotName, FSQEXSEADBGMControlTrackKey), 0x0010000000000001);
			UProperty* NewProp_ControlType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ControlType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ControlType, FSQEXSEADBGMControlTrackKey), 0x0010000000000001, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes());
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FSQEXSEADBGMControlTrackKey), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMControlTrackKey.h"));
			MetaData->SetValue(NewProp_ModeIndex, TEXT("Category"), TEXT("SQEXSEADBGMControlTrackKey"));
			MetaData->SetValue(NewProp_ModeIndex, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMControlTrackKey.h"));
			MetaData->SetValue(NewProp_SectionIndex, TEXT("Category"), TEXT("SQEXSEADBGMControlTrackKey"));
			MetaData->SetValue(NewProp_SectionIndex, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMControlTrackKey.h"));
			MetaData->SetValue(NewProp_SlotName, TEXT("Category"), TEXT("SQEXSEADBGMControlTrackKey"));
			MetaData->SetValue(NewProp_SlotName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMControlTrackKey.h"));
			MetaData->SetValue(NewProp_ControlType, TEXT("Category"), TEXT("SQEXSEADBGMControlTrackKey"));
			MetaData->SetValue(NewProp_ControlType, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMControlTrackKey.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("SQEXSEADBGMControlTrackKey"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMControlTrackKey.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey_CRC() { return 1083614648U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
