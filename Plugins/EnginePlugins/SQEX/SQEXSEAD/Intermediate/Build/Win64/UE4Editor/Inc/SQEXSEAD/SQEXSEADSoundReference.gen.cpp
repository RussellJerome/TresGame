// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSoundReference.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSoundReference() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSoundReference();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSQEXSEADSoundReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSoundReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADSoundReference, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADSoundReference"), sizeof(FSQEXSEADSoundReference), Get_Z_Construct_UScriptStruct_FSQEXSEADSoundReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADSoundReference(FSQEXSEADSoundReference::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADSoundReference"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSoundReference
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSoundReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADSoundReference")),new UScriptStruct::TCppStructOps<FSQEXSEADSoundReference>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSoundReference;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSoundReference()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSoundReference_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADSoundReference"), sizeof(FSQEXSEADSoundReference), Get_Z_Construct_UScriptStruct_FSQEXSEADSoundReference_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADSoundReference"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADSoundReference>, EStructFlags(0x00000201));
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, FSQEXSEADSoundReference), 0x0010000000000001);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollow, FSQEXSEADSoundReference);
			UProperty* NewProp_bFollow = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bFollow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollow, FSQEXSEADSoundReference), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bFollow, FSQEXSEADSoundReference), sizeof(uint8), false);
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, FSQEXSEADSoundReference), 0x0010000000000001, Z_Construct_UClass_USoundBase_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundReference.h"));
			MetaData->SetValue(NewProp_AttachPointName, TEXT("Category"), TEXT("SQEXSEADSoundReference"));
			MetaData->SetValue(NewProp_AttachPointName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundReference.h"));
			MetaData->SetValue(NewProp_bFollow, TEXT("Category"), TEXT("SQEXSEADSoundReference"));
			MetaData->SetValue(NewProp_bFollow, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundReference.h"));
			MetaData->SetValue(NewProp_Sound, TEXT("Category"), TEXT("SQEXSEADSoundReference"));
			MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundReference.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSoundReference_CRC() { return 2102692451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
