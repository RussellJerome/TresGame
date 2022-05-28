// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSystemPerformanceInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSystemPerformanceInfo() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
class UScriptStruct* FSQEXSEADSystemPerformanceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADSystemPerformanceInfo"), sizeof(FSQEXSEADSystemPerformanceInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADSystemPerformanceInfo(FSQEXSEADSystemPerformanceInfo::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADSystemPerformanceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSystemPerformanceInfo
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSystemPerformanceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADSystemPerformanceInfo")),new UScriptStruct::TCppStructOps<FSQEXSEADSystemPerformanceInfo>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADSystemPerformanceInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADSystemPerformanceInfo"), sizeof(FSQEXSEADSystemPerformanceInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADSystemPerformanceInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADSystemPerformanceInfo>, EStructFlags(0x00000001));
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSystemPerformanceInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADSystemPerformanceInfo_CRC() { return 2349654248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
