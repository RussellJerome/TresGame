// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeDetectorSettingFootStep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeDetectorSettingFootStep() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeDetectorSettingFootStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeDetectorSettingFootStep"), sizeof(FSQEXSEADAutoSeDetectorSettingFootStep), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep(FSQEXSEADAutoSeDetectorSettingFootStep::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeDetectorSettingFootStep"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingFootStep
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingFootStep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeDetectorSettingFootStep")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeDetectorSettingFootStep>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingFootStep;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeDetectorSettingFootStep"), sizeof(FSQEXSEADAutoSeDetectorSettingFootStep), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeDetectorSettingFootStep"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeDetectorSettingFootStep>, EStructFlags(0x00000201));
			UProperty* NewProp_FootShuffleDetectFootAccelThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FootShuffleDetectFootAccelThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FootShuffleDetectFootAccelThreshold, FSQEXSEADAutoSeDetectorSettingFootStep), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideFootShuffleDetectFootAccelThreshold, FSQEXSEADAutoSeDetectorSettingFootStep);
			UProperty* NewProp_bOverrideFootShuffleDetectFootAccelThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideFootShuffleDetectFootAccelThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideFootShuffleDetectFootAccelThreshold, FSQEXSEADAutoSeDetectorSettingFootStep), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideFootShuffleDetectFootAccelThreshold, FSQEXSEADAutoSeDetectorSettingFootStep), sizeof(bool), true);
			UProperty* NewProp_FootShuffleAssumeBodyStopVelocityThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FootShuffleAssumeBodyStopVelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FootShuffleAssumeBodyStopVelocityThreshold, FSQEXSEADAutoSeDetectorSettingFootStep), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideFootShuffleAssumeBodyStopVelocityThreshold, FSQEXSEADAutoSeDetectorSettingFootStep);
			UProperty* NewProp_bOverrideFootShuffleAssumeBodyStopVelocityThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideFootShuffleAssumeBodyStopVelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideFootShuffleAssumeBodyStopVelocityThreshold, FSQEXSEADAutoSeDetectorSettingFootStep), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideFootShuffleAssumeBodyStopVelocityThreshold, FSQEXSEADAutoSeDetectorSettingFootStep), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingFootStep.h"));
			MetaData->SetValue(NewProp_FootShuffleDetectFootAccelThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingFootStep"));
			MetaData->SetValue(NewProp_FootShuffleDetectFootAccelThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingFootStep.h"));
			MetaData->SetValue(NewProp_bOverrideFootShuffleDetectFootAccelThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingFootStep"));
			MetaData->SetValue(NewProp_bOverrideFootShuffleDetectFootAccelThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingFootStep.h"));
			MetaData->SetValue(NewProp_FootShuffleAssumeBodyStopVelocityThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingFootStep"));
			MetaData->SetValue(NewProp_FootShuffleAssumeBodyStopVelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingFootStep.h"));
			MetaData->SetValue(NewProp_bOverrideFootShuffleAssumeBodyStopVelocityThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingFootStep"));
			MetaData->SetValue(NewProp_bOverrideFootShuffleAssumeBodyStopVelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingFootStep.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep_CRC() { return 1553062824U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
