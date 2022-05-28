// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADEventTrackKey.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADEventTrackKey() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADEventTrackKey"), sizeof(FSQEXSEADEventTrackKey), Get_Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADEventTrackKey(FSQEXSEADEventTrackKey::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADEventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADEventTrackKey
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADEventTrackKey")),new UScriptStruct::TCppStructOps<FSQEXSEADEventTrackKey>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADEventTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADEventTrackKey"), sizeof(FSQEXSEADEventTrackKey), Get_Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADEventTrackKey"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADEventTrackKey>, EStructFlags(0x00000001));
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(EventName, FSQEXSEADEventTrackKey), 0x0010000000000001);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FSQEXSEADEventTrackKey), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADEventTrackKey.h"));
			MetaData->SetValue(NewProp_EventName, TEXT("Category"), TEXT("SQEXSEADEventTrackKey"));
			MetaData->SetValue(NewProp_EventName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADEventTrackKey.h"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADEventTrackKey.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey_CRC() { return 2751793140U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
