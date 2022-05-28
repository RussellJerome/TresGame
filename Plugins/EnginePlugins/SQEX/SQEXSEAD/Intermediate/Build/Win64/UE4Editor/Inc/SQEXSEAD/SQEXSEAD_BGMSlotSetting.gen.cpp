// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEAD_BGMSlotSetting.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEAD_BGMSlotSetting() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions();
// End Cross Module References
class UScriptStruct* FSQEXSEAD_BGMSlotSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEAD_BGMSlotSetting"), sizeof(FSQEXSEAD_BGMSlotSetting), Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEAD_BGMSlotSetting(FSQEXSEAD_BGMSlotSetting::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEAD_BGMSlotSetting"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMSlotSetting
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMSlotSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEAD_BGMSlotSetting")),new UScriptStruct::TCppStructOps<FSQEXSEAD_BGMSlotSetting>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMSlotSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEAD_BGMSlotSetting"), sizeof(FSQEXSEAD_BGMSlotSetting), Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEAD_BGMSlotSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEAD_BGMSlotSetting>, EStructFlags(0x00000001));
			UProperty* NewProp_SlotOption = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SlotOption"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SlotOption, FSQEXSEAD_BGMSlotSetting), 0x0010000000000000, Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions());
			UProperty* NewProp_SlotName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SlotName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(SlotName, FSQEXSEAD_BGMSlotSetting), 0x0010000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMSlotSetting.h"));
			MetaData->SetValue(NewProp_SlotOption, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMSlotSetting.h"));
			MetaData->SetValue(NewProp_SlotName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMSlotSetting.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting_CRC() { return 2911072199U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
