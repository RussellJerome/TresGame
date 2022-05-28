// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEAD_BGMLocalOptions.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEAD_BGMLocalOptions() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEAD_BGMLocalOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEAD_BGMLocalOptions"), sizeof(FSQEXSEAD_BGMLocalOptions), Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEAD_BGMLocalOptions(FSQEXSEAD_BGMLocalOptions::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEAD_BGMLocalOptions"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMLocalOptions
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMLocalOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEAD_BGMLocalOptions")),new UScriptStruct::TCppStructOps<FSQEXSEAD_BGMLocalOptions>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEAD_BGMLocalOptions;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEAD_BGMLocalOptions"), sizeof(FSQEXSEAD_BGMLocalOptions), Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEAD_BGMLocalOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEAD_BGMLocalOptions>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGMLocalOptions.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEAD_BGMLocalOptions_CRC() { return 1660582071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
