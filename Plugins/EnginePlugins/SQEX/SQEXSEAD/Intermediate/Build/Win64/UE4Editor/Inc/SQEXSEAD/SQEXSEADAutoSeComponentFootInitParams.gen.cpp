// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentFootInitParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentFootInitParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentFootInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentFootInitParams"), sizeof(FSQEXSEADAutoSeComponentFootInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams(FSQEXSEADAutoSeComponentFootInitParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentFootInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentFootInitParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentFootInitParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentFootInitParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentFootInitParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentFootInitParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentFootInitParams"), sizeof(FSQEXSEADAutoSeComponentFootInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentFootInitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentFootInitParams>, EStructFlags(0x00000201));
			UProperty* NewProp_ToeName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToeName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ToeName, FSQEXSEADAutoSeComponentFootInitParams), 0x0010000000000015);
			UProperty* NewProp_HeelName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HeelName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(HeelName, FSQEXSEADAutoSeComponentFootInitParams), 0x0010000000000015);
			UProperty* NewProp_FootName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FootName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(FootName, FSQEXSEADAutoSeComponentFootInitParams), 0x0010000000000015);
			UProperty* NewProp_TibiaName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TibiaName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(TibiaName, FSQEXSEADAutoSeComponentFootInitParams), 0x0010000000000015);
			UProperty* NewProp_FemurName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FemurName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(FemurName, FSQEXSEADAutoSeComponentFootInitParams), 0x0010000000000015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentFootInitParams.h"));
			MetaData->SetValue(NewProp_ToeName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentFootInitParams"));
			MetaData->SetValue(NewProp_ToeName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentFootInitParams.h"));
			MetaData->SetValue(NewProp_HeelName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentFootInitParams"));
			MetaData->SetValue(NewProp_HeelName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentFootInitParams.h"));
			MetaData->SetValue(NewProp_FootName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentFootInitParams"));
			MetaData->SetValue(NewProp_FootName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentFootInitParams.h"));
			MetaData->SetValue(NewProp_TibiaName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentFootInitParams"));
			MetaData->SetValue(NewProp_TibiaName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentFootInitParams.h"));
			MetaData->SetValue(NewProp_FemurName, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentFootInitParams"));
			MetaData->SetValue(NewProp_FemurName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentFootInitParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams_CRC() { return 2223659768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
