// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotifyPlayAutoSeParams() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable_NoRegister();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType();
// End Cross Module References
class UScriptStruct* FSQEXSEADAnimNotifyPlayAutoSeParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"), sizeof(FSQEXSEADAnimNotifyPlayAutoSeParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams(FSQEXSEADAnimNotifyPlayAutoSeParams::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAnimNotifyPlayAutoSeParams
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAnimNotifyPlayAutoSeParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAnimNotifyPlayAutoSeParams")),new UScriptStruct::TCppStructOps<FSQEXSEADAnimNotifyPlayAutoSeParams>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAnimNotifyPlayAutoSeParams;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"), sizeof(FSQEXSEADAnimNotifyPlayAutoSeParams), Get_Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAnimNotifyPlayAutoSeParams>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollowOwnerVisible, FSQEXSEADAnimNotifyPlayAutoSeParams);
			UProperty* NewProp_bFollowOwnerVisible = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFollowOwnerVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollowOwnerVisible, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bFollowOwnerVisible, FSQEXSEADAnimNotifyPlayAutoSeParams), sizeof(uint8), false);
			UProperty* NewProp_SoundPitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SoundPitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SoundPitchMultiplier, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005);
			UProperty* NewProp_SoundVolume = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SoundVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SoundVolume, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAttachToParts, FSQEXSEADAnimNotifyPlayAutoSeParams);
			UProperty* NewProp_bAttachToParts = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bAttachToParts"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAttachToParts, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAttachToParts, FSQEXSEADAnimNotifyPlayAutoSeParams), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCheckIsGrounded, FSQEXSEADAnimNotifyPlayAutoSeParams);
			UProperty* NewProp_bCheckIsGrounded = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bCheckIsGrounded"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCheckIsGrounded, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCheckIsGrounded, FSQEXSEADAnimNotifyPlayAutoSeParams), sizeof(uint8), false);
			UProperty* NewProp_AutoSePartsIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AutoSePartsIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AutoSePartsIndex, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005);
			UProperty* NewProp_AutoSePartsType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AutoSePartsType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AutoSePartsType, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType());
			UProperty* NewProp_SurfaceAssetTableRecordName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SurfaceAssetTableRecordName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SurfaceAssetTableRecordName, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005);
			UProperty* NewProp_SurfaceAssetPathTable = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SurfaceAssetPathTable"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SurfaceAssetPathTable, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable_NoRegister());
			UProperty* NewProp_MotionSoundType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MotionSoundType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(MotionSoundType, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType());
			UProperty* NewProp_SourceType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SourceType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(SourceType, FSQEXSEADAnimNotifyPlayAutoSeParams), 0x0010000000000005, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_SoundPitchMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_SoundPitchMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_SoundVolume, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_SoundVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_bAttachToParts, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_bAttachToParts, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_bCheckIsGrounded, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_bCheckIsGrounded, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_AutoSePartsIndex, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_AutoSePartsIndex, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_AutoSePartsType, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_AutoSePartsType, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_SurfaceAssetTableRecordName, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_SurfaceAssetTableRecordName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_SurfaceAssetPathTable, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_SurfaceAssetPathTable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_MotionSoundType, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_MotionSoundType, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
			MetaData->SetValue(NewProp_SourceType, TEXT("Category"), TEXT("SQEXSEADAnimNotifyPlayAutoSeParams"));
			MetaData->SetValue(NewProp_SourceType, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyPlayAutoSeParams.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams_CRC() { return 2261629630U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
