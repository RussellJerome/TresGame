// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentWingInitParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentWingInitParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentWingInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentWingInitParams"), sizeof(FSQEXSEADAutoSeComponentWingInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams(FSQEXSEADAutoSeComponentWingInitParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentWingInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentWingInitParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentWingInitParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentWingInitParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentWingInitParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentWingInitParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentWingInitParams"), sizeof(FSQEXSEADAutoSeComponentWingInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentWingInitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentWingInitParams>, EStructFlags(0x00000201));
			UProperty* NewProp_WingEdgeName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WingEdgeName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WingEdgeName, FSQEXSEADAutoSeComponentWingInitParams), 0x0010000000000015);
			UProperty* NewProp_WingRootName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WingRootName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WingRootName, FSQEXSEADAutoSeComponentWingInitParams), 0x0010000000000015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentWingInitParams.h"));
			MetaData->SetValue(NewProp_WingEdgeName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentWingInitParams"));
			MetaData->SetValue(NewProp_WingEdgeName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentWingInitParams.h"));
			MetaData->SetValue(NewProp_WingRootName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentWingInitParams"));
			MetaData->SetValue(NewProp_WingRootName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentWingInitParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams_CRC() { return 3541228978U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
