// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSurfaceAssetReferenceTableData.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSurfaceAssetReferenceTableData() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord();
// End Cross Module References
class UScriptStruct* FSQEXSEADSurfaceAssetReferenceTableData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADSurfaceAssetReferenceTableData"), sizeof(FSQEXSEADSurfaceAssetReferenceTableData), Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData(FSQEXSEADSurfaceAssetReferenceTableData::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADSurfaceAssetReferenceTableData"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSurfaceAssetReferenceTableData
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSurfaceAssetReferenceTableData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADSurfaceAssetReferenceTableData")),new UScriptStruct::TCppStructOps<FSQEXSEADSurfaceAssetReferenceTableData>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSurfaceAssetReferenceTableData;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADSurfaceAssetReferenceTableData"), sizeof(FSQEXSEADSurfaceAssetReferenceTableData), Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADSurfaceAssetReferenceTableData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADSurfaceAssetReferenceTableData>, EStructFlags(0x00000201));
			UProperty* NewProp_Records = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Records, FSQEXSEADSurfaceAssetReferenceTableData), 0x0010000000000001);
			UProperty* NewProp_Records_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Records, TEXT("Records"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceTableData.h"));
			MetaData->SetValue(NewProp_Records, TEXT("Category"), TEXT("SQEXSEADSurfaceAssetReferenceTableData"));
			MetaData->SetValue(NewProp_Records, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceTableData.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData_CRC() { return 4170080051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
