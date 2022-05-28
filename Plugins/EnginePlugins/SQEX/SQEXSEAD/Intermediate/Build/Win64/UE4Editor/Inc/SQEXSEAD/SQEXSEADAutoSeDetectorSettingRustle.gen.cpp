// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeDetectorSettingRustle.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeDetectorSettingRustle() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeDetectorSettingRustle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeDetectorSettingRustle"), sizeof(FSQEXSEADAutoSeDetectorSettingRustle), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle(FSQEXSEADAutoSeDetectorSettingRustle::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingRustle
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingRustle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeDetectorSettingRustle")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeDetectorSettingRustle>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeDetectorSettingRustle;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeDetectorSettingRustle"), sizeof(FSQEXSEADAutoSeDetectorSettingRustle), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeDetectorSettingRustle"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeDetectorSettingRustle>, EStructFlags(0x00000201));
			UProperty* NewProp_ElbowRustleVolumeRangeRunMax = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleVolumeRangeRunMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleVolumeRangeRunMax, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			UProperty* NewProp_ElbowRustleVolumeRangeRunMin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleVolumeRangeRunMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleVolumeRangeRunMin, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			UProperty* NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			UProperty* NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideElbowRustleVolumeRangesRun, FSQEXSEADAutoSeDetectorSettingRustle);
			UProperty* NewProp_bOverrideElbowRustleVolumeRangesRun = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideElbowRustleVolumeRangesRun"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideElbowRustleVolumeRangesRun, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideElbowRustleVolumeRangesRun, FSQEXSEADAutoSeDetectorSettingRustle), sizeof(bool), true);
			UProperty* NewProp_ElbowRustleVolumeRangeWalkMax = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleVolumeRangeWalkMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleVolumeRangeWalkMax, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			UProperty* NewProp_ElbowRustleVolumeRangeWalkMin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleVolumeRangeWalkMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleVolumeRangeWalkMin, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			UProperty* NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			UProperty* NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideElbowRustleVolumeRangesWalk, FSQEXSEADAutoSeDetectorSettingRustle);
			UProperty* NewProp_bOverrideElbowRustleVolumeRangesWalk = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bOverrideElbowRustleVolumeRangesWalk"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideElbowRustleVolumeRangesWalk, FSQEXSEADAutoSeDetectorSettingRustle), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOverrideElbowRustleVolumeRangesWalk, FSQEXSEADAutoSeDetectorSettingRustle), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeRunMax, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeRunMax, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeRunMin, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeRunMin, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_bOverrideElbowRustleVolumeRangesRun, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_bOverrideElbowRustleVolumeRangesRun, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeWalkMax, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeWalkMax, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeWalkMin, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleVolumeRangeWalkMin, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
			MetaData->SetValue(NewProp_bOverrideElbowRustleVolumeRangesWalk, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectorSettingRustle"));
			MetaData->SetValue(NewProp_bOverrideElbowRustleVolumeRangesWalk, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectorSettingRustle.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle_CRC() { return 2435021497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
