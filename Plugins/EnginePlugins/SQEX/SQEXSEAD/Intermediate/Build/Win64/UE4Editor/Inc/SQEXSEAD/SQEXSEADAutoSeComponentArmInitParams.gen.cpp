// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentArmInitParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentArmInitParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentArmInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentArmInitParams"), sizeof(FSQEXSEADAutoSeComponentArmInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams(FSQEXSEADAutoSeComponentArmInitParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentArmInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentArmInitParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentArmInitParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentArmInitParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentArmInitParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentArmInitParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentArmInitParams"), sizeof(FSQEXSEADAutoSeComponentArmInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentArmInitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentArmInitParams>, EStructFlags(0x00000201));
			UProperty* NewProp_ElbowName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ElbowName, FSQEXSEADAutoSeComponentArmInitParams), 0x0010000000000015);
			UProperty* NewProp_ShoulderName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ShoulderName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ShoulderName, FSQEXSEADAutoSeComponentArmInitParams), 0x0010000000000015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentArmInitParams.h"));
			MetaData->SetValue(NewProp_ElbowName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentArmInitParams"));
			MetaData->SetValue(NewProp_ElbowName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentArmInitParams.h"));
			MetaData->SetValue(NewProp_ShoulderName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentArmInitParams"));
			MetaData->SetValue(NewProp_ShoulderName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentArmInitParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams_CRC() { return 765057350U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
