// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentBodyInitParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentBodyInitParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentBodyInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentBodyInitParams"), sizeof(FSQEXSEADAutoSeComponentBodyInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams(FSQEXSEADAutoSeComponentBodyInitParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentBodyInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentBodyInitParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentBodyInitParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentBodyInitParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentBodyInitParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentBodyInitParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentBodyInitParams"), sizeof(FSQEXSEADAutoSeComponentBodyInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentBodyInitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentBodyInitParams>, EStructFlags(0x00000201));
			UProperty* NewProp_WaistName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WaistName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WaistName, FSQEXSEADAutoSeComponentBodyInitParams), 0x0010000000000015);
			UProperty* NewProp_BaseName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BaseName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(BaseName, FSQEXSEADAutoSeComponentBodyInitParams), 0x0010000000000015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentBodyInitParams.h"));
			MetaData->SetValue(NewProp_WaistName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentBodyInitParams"));
			MetaData->SetValue(NewProp_WaistName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentBodyInitParams.h"));
			MetaData->SetValue(NewProp_BaseName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentBodyInitParams"));
			MetaData->SetValue(NewProp_BaseName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentBodyInitParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams_CRC() { return 1988086330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
