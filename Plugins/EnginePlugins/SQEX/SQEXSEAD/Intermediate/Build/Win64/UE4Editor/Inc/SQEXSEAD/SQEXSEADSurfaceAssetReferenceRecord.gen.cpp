// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSurfaceAssetReferenceRecord.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSurfaceAssetReferenceRecord() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
// End Cross Module References
class UScriptStruct* FSQEXSEADSurfaceAssetReferenceRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADSurfaceAssetReferenceRecord"), sizeof(FSQEXSEADSurfaceAssetReferenceRecord), Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord(FSQEXSEADSurfaceAssetReferenceRecord::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADSurfaceAssetReferenceRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSurfaceAssetReferenceRecord
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSurfaceAssetReferenceRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADSurfaceAssetReferenceRecord")),new UScriptStruct::TCppStructOps<FSQEXSEADSurfaceAssetReferenceRecord>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSurfaceAssetReferenceRecord;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADSurfaceAssetReferenceRecord"), sizeof(FSQEXSEADSurfaceAssetReferenceRecord), Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADSurfaceAssetReferenceRecord"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADSurfaceAssetReferenceRecord>, EStructFlags(0x00000201));
			UProperty* NewProp_AssetRefs = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AssetRefs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AssetRefs, FSQEXSEADSurfaceAssetReferenceRecord), 0x0010000000000001, Z_Construct_UScriptStruct_FStringAssetReference());
			NewProp_AssetRefs->ArrayDim = CPP_ARRAY_DIM(AssetRefs, FSQEXSEADSurfaceAssetReferenceRecord);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, FSQEXSEADSurfaceAssetReferenceRecord), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceRecord.h"));
			MetaData->SetValue(NewProp_AssetRefs, TEXT("Category"), TEXT("SQEXSEADSurfaceAssetReferenceRecord"));
			MetaData->SetValue(NewProp_AssetRefs, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceRecord.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("SQEXSEADSurfaceAssetReferenceRecord"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceRecord.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceRecord_CRC() { return 208324736U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
