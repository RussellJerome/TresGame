// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADAutoSeResult.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADAutoSeResult() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeResult();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADAutoSeResult_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeResult, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADAutoSeResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADAutoSeResult(ESQEXSEADAutoSeResult_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADAutoSeResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADAutoSeResult"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADAutoSeResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::Success"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::Failure"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::Error_InvalidArgs"), 100);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::Error_InvalidBoneName"), 101);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::Error_NotAllSocketsValid"), 102);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::Error_FailedToCreateProc"), 103);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeResult::ESQEXSEADAutoSeResult_MAX"), 104);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADAutoSeResult::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADAutoSeResult.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeResult_CRC() { return 3785105932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
