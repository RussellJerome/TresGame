// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EMercunaMoveResult.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMercunaMoveResult() {}
// Cross Module References
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
static UEnum* EMercunaMoveResult_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_Mercuna_EMercunaMoveResult, Z_Construct_UPackage__Script_Mercuna(), TEXT("EMercunaMoveResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMercunaMoveResult(EMercunaMoveResult_StaticEnum, TEXT("/Script/Mercuna"), TEXT("EMercunaMoveResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaMoveResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMercunaMoveResult"), 0, Get_Z_Construct_UEnum_Mercuna_EMercunaMoveResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMercunaMoveResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMercunaMoveResult::Success"), 0);
			EnumNames.Emplace(TEXT("EMercunaMoveResult::Failed"), 1);
			EnumNames.Emplace(TEXT("EMercunaMoveResult::Cancelled"), 2);
			EnumNames.Emplace(TEXT("EMercunaMoveResult::Blocked"), 3);
			EnumNames.Emplace(TEXT("EMercunaMoveResult::Invalid"), 4);
			EnumNames.Emplace(TEXT("EMercunaMoveResult::EMercunaMoveResult_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EMercunaMoveResult::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EMercunaMoveResult.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaMoveResult_CRC() { return 2438194145U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
