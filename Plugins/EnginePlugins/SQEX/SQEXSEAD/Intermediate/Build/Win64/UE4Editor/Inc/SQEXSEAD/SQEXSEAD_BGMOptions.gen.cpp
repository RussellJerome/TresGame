// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEAD_BGMOptions.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEAD_BGMOptions() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStoreBehaviour();
// End Cross Module References
class UScriptStruct* FSQEXSEAD_BGMOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEAD_BGMOptions"), sizeof(FSQEXSEAD_BGMOptions), Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEAD_BGMOptions(FSQEXSEAD_BGMOptions::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEAD_BGMOptions"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMOptions
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEAD_BGMOptions")),new UScriptStruct::TCppStructOps<FSQEXSEAD_BGMOptions>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEAD_BGMOptions"), sizeof(FSQEXSEAD_BGMOptions), Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEAD_BGMOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEAD_BGMOptions>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRestoreAfterFinish, FSQEXSEAD_BGMOptions);
			UProperty* NewProp_bRestoreAfterFinish = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bRestoreAfterFinish"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRestoreAfterFinish, FSQEXSEAD_BGMOptions), 0x0010000000000004, CPP_BOOL_PROPERTY_BITMASK(bRestoreAfterFinish, FSQEXSEAD_BGMOptions), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUnreferenceAsset, FSQEXSEAD_BGMOptions);
			UProperty* NewProp_bUnreferenceAsset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bUnreferenceAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUnreferenceAsset, FSQEXSEAD_BGMOptions), 0x0010000000000004, CPP_BOOL_PROPERTY_BITMASK(bUnreferenceAsset, FSQEXSEAD_BGMOptions), sizeof(bool), true);
			UProperty* NewProp_StaySuspendTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StaySuspendTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StaySuspendTime, FSQEXSEAD_BGMOptions), 0x0010000000000004);
			UProperty* NewProp_StopFadeOutTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StopFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StopFadeOutTime, FSQEXSEAD_BGMOptions), 0x0010000000000004);
			UProperty* NewProp_SuspendFadeOutTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SuspendFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SuspendFadeOutTime, FSQEXSEAD_BGMOptions), 0x0010000000000004);
			UProperty* NewProp_ResumeFadeInTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ResumeFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ResumeFadeInTime, FSQEXSEAD_BGMOptions), 0x0010000000000004);
			UProperty* NewProp_PlayFadeInTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PlayFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PlayFadeInTime, FSQEXSEAD_BGMOptions), 0x0010000000000004);
			UProperty* NewProp_StopBehaviour = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StopBehaviour"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(StopBehaviour, FSQEXSEAD_BGMOptions), 0x0010000000000004, Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour());
			UProperty* NewProp_StopBehaviour_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_StopBehaviour, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_StoreBehaviour = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StoreBehaviour"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(StoreBehaviour, FSQEXSEAD_BGMOptions), 0x0010000000000004, Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStoreBehaviour());
			UProperty* NewProp_StoreBehaviour_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_StoreBehaviour, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Priority, FSQEXSEAD_BGMOptions), 0x0010000000000004);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_bRestoreAfterFinish, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_bRestoreAfterFinish, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_bUnreferenceAsset, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_bUnreferenceAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_StaySuspendTime, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_StaySuspendTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_StopFadeOutTime, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_StopFadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_SuspendFadeOutTime, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_SuspendFadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_ResumeFadeInTime, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_ResumeFadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_PlayFadeInTime, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_PlayFadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_StopBehaviour, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_StopBehaviour, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_StoreBehaviour, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_StoreBehaviour, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
			MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("SQEXSEAD_BGMOptions"));
			MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMOptions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions_CRC() { return 718352927U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
