// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EMercunaPointDistribution.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMercunaPointDistribution() {}
// Cross Module References
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaPointDistribution();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
static UEnum* EMercunaPointDistribution_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_Mercuna_EMercunaPointDistribution, Z_Construct_UPackage__Script_Mercuna(), TEXT("EMercunaPointDistribution"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMercunaPointDistribution(EMercunaPointDistribution_StaticEnum, TEXT("/Script/Mercuna"), TEXT("EMercunaPointDistribution"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Mercuna_EMercunaPointDistribution()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaPointDistribution_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMercunaPointDistribution"), 0, Get_Z_Construct_UEnum_Mercuna_EMercunaPointDistribution_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMercunaPointDistribution"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMercunaPointDistribution::Uniform"), 0);
			EnumNames.Emplace(TEXT("EMercunaPointDistribution::Random"), 1);
			EnumNames.Emplace(TEXT("EMercunaPointDistribution::EMercunaPointDistribution_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EMercunaPointDistribution");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EMercunaPointDistribution.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaPointDistribution_CRC() { return 1028338191U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
