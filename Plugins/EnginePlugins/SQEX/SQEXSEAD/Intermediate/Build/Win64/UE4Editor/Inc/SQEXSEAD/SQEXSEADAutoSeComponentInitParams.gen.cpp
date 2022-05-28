// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentInitParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentInitParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentInitParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentInitParams"), sizeof(FSQEXSEADAutoSeComponentInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams(FSQEXSEADAutoSeComponentInitParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentInitParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentInitParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentInitParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentInitParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentInitParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentInitParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentInitParams"), sizeof(FSQEXSEADAutoSeComponentInitParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentInitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentInitParams>, EStructFlags(0x00000201));
			UProperty* NewProp_AutoCalcHeelRatio = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AutoCalcHeelRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AutoCalcHeelRatio, FSQEXSEADAutoSeComponentInitParams), 0x0010000000000015);
			UProperty* NewProp_Body = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Body"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Body, FSQEXSEADAutoSeComponentInitParams), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentBodyInitParams());
			UProperty* NewProp_Swings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Swings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Swings, FSQEXSEADAutoSeComponentInitParams), 0x0010000000000015);
			UProperty* NewProp_Swings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Swings, TEXT("Swings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentSwingInitParams());
			UProperty* NewProp_Wings = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Wings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Wings, FSQEXSEADAutoSeComponentInitParams), 0x0010000000000015);
			UProperty* NewProp_Wings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Wings, TEXT("Wings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentWingInitParams());
			UProperty* NewProp_Arms = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Arms"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Arms, FSQEXSEADAutoSeComponentInitParams), 0x0010000000000015);
			UProperty* NewProp_Arms_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Arms, TEXT("Arms"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentArmInitParams());
			UProperty* NewProp_Feet = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Feet"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Feet, FSQEXSEADAutoSeComponentInitParams), 0x0010000000000015);
			UProperty* NewProp_Feet_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Feet, TEXT("Feet"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentFootInitParams());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
			MetaData->SetValue(NewProp_AutoCalcHeelRatio, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentInitParams"));
			MetaData->SetValue(NewProp_AutoCalcHeelRatio, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
			MetaData->SetValue(NewProp_Body, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentInitParams"));
			MetaData->SetValue(NewProp_Body, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
			MetaData->SetValue(NewProp_Swings, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentInitParams"));
			MetaData->SetValue(NewProp_Swings, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
			MetaData->SetValue(NewProp_Wings, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentInitParams"));
			MetaData->SetValue(NewProp_Wings, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
			MetaData->SetValue(NewProp_Arms, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentInitParams"));
			MetaData->SetValue(NewProp_Arms, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
			MetaData->SetValue(NewProp_Feet, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentInitParams"));
			MetaData->SetValue(NewProp_Feet, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentInitParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams_CRC() { return 651275836U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
