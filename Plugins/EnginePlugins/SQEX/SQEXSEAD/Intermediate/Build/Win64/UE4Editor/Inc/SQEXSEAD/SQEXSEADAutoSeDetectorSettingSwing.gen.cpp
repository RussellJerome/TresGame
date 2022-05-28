// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeDetectorSettingSwing.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeDetectorSettingSwing() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeDetectorSettingSwing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeDetectorSettingSwing"), sizeof(FSQEXSEADAutoSeDetectorSettingSwing), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing(FSQEXSEADAutoSeDetectorSettingSwing::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeDetectorSettingSwing"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingSwing
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingSwing()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeDetectorSettingSwing")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeDetectorSettingSwing>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingSwing;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeDetectorSettingSwing"), sizeof(FSQEXSEADAutoSeDetectorSettingSwing), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeDetectorSettingSwing"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeDetectorSettingSwing>, EStructFlags(0x00000201));
			UProperty* NewProp_RubDetectVelocityThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RubDetectVelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RubDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideRubDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing);
			UProperty* NewProp_bOverrideRubDetectVelocityThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideRubDetectVelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideRubDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideRubDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing), sizeof(bool), true);
			UProperty* NewProp_KnockDetectVelocityThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KnockDetectVelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(KnockDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideKnockDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing);
			UProperty* NewProp_bOverrideKnockDetectVelocityThreshold = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideKnockDetectVelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideKnockDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideKnockDetectVelocityThreshold, FSQEXSEADAutoSeDetectorSettingSwing), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingSwing.h"));
			MetaData->SetValue(NewProp_RubDetectVelocityThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingSwing"));
			MetaData->SetValue(NewProp_RubDetectVelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingSwing.h"));
			MetaData->SetValue(NewProp_bOverrideRubDetectVelocityThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingSwing"));
			MetaData->SetValue(NewProp_bOverrideRubDetectVelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingSwing.h"));
			MetaData->SetValue(NewProp_KnockDetectVelocityThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingSwing"));
			MetaData->SetValue(NewProp_KnockDetectVelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingSwing.h"));
			MetaData->SetValue(NewProp_bOverrideKnockDetectVelocityThreshold, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingSwing"));
			MetaData->SetValue(NewProp_bOverrideKnockDetectVelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingSwing.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing_CRC() { return 1145358727U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
