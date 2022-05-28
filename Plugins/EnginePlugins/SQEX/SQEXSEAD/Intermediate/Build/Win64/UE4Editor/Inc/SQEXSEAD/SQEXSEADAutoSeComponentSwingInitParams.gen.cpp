// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentSwingInitParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentSwingInitParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentSwingInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentSwingInitParams"), sizeof(FSQEXSEADAutoSeComponentSwingInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams(FSQEXSEADAutoSeComponentSwingInitParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentSwingInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentSwingInitParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentSwingInitParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentSwingInitParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentSwingInitParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentSwingInitParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentSwingInitParams"), sizeof(FSQEXSEADAutoSeComponentSwingInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentSwingInitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentSwingInitParams>, EStructFlags(0x00000201));
			UProperty* NewProp_ChainNodeNames = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ChainNodeNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ChainNodeNames, FSQEXSEADAutoSeComponentSwingInitParams), 0x0010000000000015);
			UProperty* NewProp_ChainNodeNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ChainNodeNames, TEXT("ChainNodeNames"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentSwingInitParams.h"));
			MetaData->SetValue(NewProp_ChainNodeNames, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentSwingInitParams"));
			MetaData->SetValue(NewProp_ChainNodeNames, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentSwingInitParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams_CRC() { return 3461919409U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
