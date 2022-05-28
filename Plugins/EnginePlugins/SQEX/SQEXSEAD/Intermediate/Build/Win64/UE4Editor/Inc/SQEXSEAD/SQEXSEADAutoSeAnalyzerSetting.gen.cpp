// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeAnalyzerSetting.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeAnalyzerSetting() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeAnalyzerSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeAnalyzerSetting"), sizeof(FSQEXSEADAutoSeAnalyzerSetting), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting(FSQEXSEADAutoSeAnalyzerSetting::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeAnalyzerSetting"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeAnalyzerSetting
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeAnalyzerSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeAnalyzerSetting")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeAnalyzerSetting>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeAnalyzerSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeAnalyzerSetting"), sizeof(FSQEXSEADAutoSeAnalyzerSetting), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeAnalyzerSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeAnalyzerSetting>, EStructFlags(0x00000201));
			UProperty* NewProp_AutoCalcFootGroundedThresholdRatio = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AutoCalcFootGroundedThresholdRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AutoCalcFootGroundedThresholdRatio, FSQEXSEADAutoSeAnalyzerSetting), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAutoCalcFootGroundedThresholdRatio, FSQEXSEADAutoSeAnalyzerSetting);
			UProperty* NewProp_bOverrideAutoCalcFootGroundedThresholdRatio = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideAutoCalcFootGroundedThresholdRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAutoCalcFootGroundedThresholdRatio, FSQEXSEADAutoSeAnalyzerSetting), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideAutoCalcFootGroundedThresholdRatio, FSQEXSEADAutoSeAnalyzerSetting), sizeof(bool), true);
			UProperty* NewProp_AssumeBodyRunngingVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AssumeBodyRunngingVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AssumeBodyRunngingVelocity, FSQEXSEADAutoSeAnalyzerSetting), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAssumeBodyRunngingVelocity, FSQEXSEADAutoSeAnalyzerSetting);
			UProperty* NewProp_bOverrideAssumeBodyRunngingVelocity = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideAssumeBodyRunngingVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAssumeBodyRunngingVelocity, FSQEXSEADAutoSeAnalyzerSetting), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideAssumeBodyRunngingVelocity, FSQEXSEADAutoSeAnalyzerSetting), sizeof(bool), true);
			UProperty* NewProp_AssumeFootMotionlessMoveLenInWorld = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AssumeFootMotionlessMoveLenInWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AssumeFootMotionlessMoveLenInWorld, FSQEXSEADAutoSeAnalyzerSetting), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAssumeFootMotionlessMoveLenInWorld, FSQEXSEADAutoSeAnalyzerSetting);
			UProperty* NewProp_bOverrideAssumeFootMotionlessMoveLenInWorld = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideAssumeFootMotionlessMoveLenInWorld"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAssumeFootMotionlessMoveLenInWorld, FSQEXSEADAutoSeAnalyzerSetting), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideAssumeFootMotionlessMoveLenInWorld, FSQEXSEADAutoSeAnalyzerSetting), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
			MetaData->SetValue(NewProp_AutoCalcFootGroundedThresholdRatio, TEXT("Category"), TEXT("SQEXSEADAutoSeAnalyzerSetting"));
			MetaData->SetValue(NewProp_AutoCalcFootGroundedThresholdRatio, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
			MetaData->SetValue(NewProp_bOverrideAutoCalcFootGroundedThresholdRatio, TEXT("Category"), TEXT("SQEXSEADAutoSeAnalyzerSetting"));
			MetaData->SetValue(NewProp_bOverrideAutoCalcFootGroundedThresholdRatio, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
			MetaData->SetValue(NewProp_AssumeBodyRunngingVelocity, TEXT("Category"), TEXT("SQEXSEADAutoSeAnalyzerSetting"));
			MetaData->SetValue(NewProp_AssumeBodyRunngingVelocity, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
			MetaData->SetValue(NewProp_bOverrideAssumeBodyRunngingVelocity, TEXT("Category"), TEXT("SQEXSEADAutoSeAnalyzerSetting"));
			MetaData->SetValue(NewProp_bOverrideAssumeBodyRunngingVelocity, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
			MetaData->SetValue(NewProp_AssumeFootMotionlessMoveLenInWorld, TEXT("Category"), TEXT("SQEXSEADAutoSeAnalyzerSetting"));
			MetaData->SetValue(NewProp_AssumeFootMotionlessMoveLenInWorld, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
			MetaData->SetValue(NewProp_bOverrideAssumeFootMotionlessMoveLenInWorld, TEXT("Category"), TEXT("SQEXSEADAutoSeAnalyzerSetting"));
			MetaData->SetValue(NewProp_bOverrideAssumeFootMotionlessMoveLenInWorld, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAnalyzerSetting.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting_CRC() { return 2005089277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
