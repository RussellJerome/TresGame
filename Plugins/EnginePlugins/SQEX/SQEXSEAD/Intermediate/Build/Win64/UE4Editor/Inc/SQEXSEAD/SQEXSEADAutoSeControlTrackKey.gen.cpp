// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeControlTrackKey.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeControlTrackKey() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeControlTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeControlTrackKey"), sizeof(FSQEXSEADAutoSeControlTrackKey), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey(FSQEXSEADAutoSeControlTrackKey::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeControlTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeControlTrackKey
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeControlTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeControlTrackKey")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeControlTrackKey>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeControlTrackKey;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeControlTrackKey"), sizeof(FSQEXSEADAutoSeControlTrackKey), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeControlTrackKey"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeControlTrackKey>, EStructFlags(0x00000001));
			UProperty* NewProp_AssumeFootMotionlessMoveLength = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AssumeFootMotionlessMoveLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AssumeFootMotionlessMoveLength, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseAssumeFootMotionlessMoveLength, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bUseAssumeFootMotionlessMoveLength = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseAssumeFootMotionlessMoveLength"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseAssumeFootMotionlessMoveLength, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseAssumeFootMotionlessMoveLength, FSQEXSEADAutoSeControlTrackKey), sizeof(bool), true);
			UProperty* NewProp_PhysicalSurfaceForForceOverride = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PhysicalSurfaceForForceOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PhysicalSurfaceForForceOverride, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, Z_Construct_UEnum_Engine_EPhysicalSurface());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableForceOverridePhysicalSurface, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bEnableForceOverridePhysicalSurface = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnableForceOverridePhysicalSurface"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableForceOverridePhysicalSurface, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableForceOverridePhysicalSurface, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseEnableForceOverridePhysicalSurface, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bUseEnableForceOverridePhysicalSurface = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseEnableForceOverridePhysicalSurface"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseEnableForceOverridePhysicalSurface, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseEnableForceOverridePhysicalSurface, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisableAnimNotifyPlayAutoSE, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bDisableAnimNotifyPlayAutoSE = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bDisableAnimNotifyPlayAutoSE"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisableAnimNotifyPlayAutoSE, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bDisableAnimNotifyPlayAutoSE, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseDisableAnimNotifyPlayAutoSE, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bUseDisableAnimNotifyPlayAutoSE = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseDisableAnimNotifyPlayAutoSE"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseDisableAnimNotifyPlayAutoSE, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseDisableAnimNotifyPlayAutoSE, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			UProperty* NewProp_VolumeScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VolumeScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeScale, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseVolumeScale, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bUseVolumeScale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseVolumeScale"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseVolumeScale, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseVolumeScale, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnable, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseEnable, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bUseEnable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseEnable, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseEnable, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGlobalEnable, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bGlobalEnable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bGlobalEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGlobalEnable, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bGlobalEnable, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseGlobalEnable, FSQEXSEADAutoSeControlTrackKey);
			UProperty* NewProp_bUseGlobalEnable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUseGlobalEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseGlobalEnable, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseGlobalEnable, FSQEXSEADAutoSeControlTrackKey), sizeof(uint8), false);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FSQEXSEADAutoSeControlTrackKey), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_AssumeFootMotionlessMoveLength, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_AssumeFootMotionlessMoveLength, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bUseAssumeFootMotionlessMoveLength, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bUseAssumeFootMotionlessMoveLength, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_PhysicalSurfaceForForceOverride, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_PhysicalSurfaceForForceOverride, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bEnableForceOverridePhysicalSurface, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bEnableForceOverridePhysicalSurface, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bUseEnableForceOverridePhysicalSurface, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bUseEnableForceOverridePhysicalSurface, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bDisableAnimNotifyPlayAutoSE, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bDisableAnimNotifyPlayAutoSE, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bUseDisableAnimNotifyPlayAutoSE, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bUseDisableAnimNotifyPlayAutoSE, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_VolumeScale, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_VolumeScale, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bUseVolumeScale, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bUseVolumeScale, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bEnable, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bEnable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bUseEnable, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bUseEnable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bGlobalEnable, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bGlobalEnable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_bUseGlobalEnable, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_bUseGlobalEnable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("SQEXSEADAutoSeControlTrackKey"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeControlTrackKey.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey_CRC() { return 3153052825U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
