// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADVolumeInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADVolumeInfo() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADVolumeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADVolumeInfo"), sizeof(FSQEXSEADVolumeInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADVolumeInfo(FSQEXSEADVolumeInfo::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADVolumeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADVolumeInfo
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADVolumeInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADVolumeInfo")),new UScriptStruct::TCppStructOps<FSQEXSEADVolumeInfo>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADVolumeInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADVolumeInfo"), sizeof(FSQEXSEADVolumeInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADVolumeInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADVolumeInfo>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADVolumeInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADVolumeInfo_CRC() { return 3308672988U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
