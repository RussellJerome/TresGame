// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSoundAttachedInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSoundAttachedInfo() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADSoundAttachedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADSoundAttachedInfo"), sizeof(FSQEXSEADSoundAttachedInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADSoundAttachedInfo(FSQEXSEADSoundAttachedInfo::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADSoundAttachedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSoundAttachedInfo
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSoundAttachedInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADSoundAttachedInfo")),new UScriptStruct::TCppStructOps<FSQEXSEADSoundAttachedInfo>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSoundAttachedInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADSoundAttachedInfo"), sizeof(FSQEXSEADSoundAttachedInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADSoundAttachedInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADSoundAttachedInfo>, EStructFlags(0x00000201));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundAttachedInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSoundAttachedInfo_CRC() { return 2289274858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
