// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EMercunaMoveGoal.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMercunaMoveGoal() {}
// Cross Module References
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveGoal();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
static UEnum* EMercunaMoveGoal_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_Mercuna_EMercunaMoveGoal, Z_Construct_UPackage__Script_Mercuna(), TEXT("EMercunaMoveGoal"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMercunaMoveGoal(EMercunaMoveGoal_StaticEnum, TEXT("/Script/Mercuna"), TEXT("EMercunaMoveGoal"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveGoal()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaMoveGoal_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMercunaMoveGoal"), 0, Get_Z_Construct_UEnum_Mercuna_EMercunaMoveGoal_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMercunaMoveGoal"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMercunaMoveGoal::Actor"), 0);
			EnumNames.Emplace(TEXT("EMercunaMoveGoal::Vector"), 1);
			EnumNames.Emplace(TEXT("EMercunaMoveGoal::None"), 2);
			EnumNames.Emplace(TEXT("EMercunaMoveGoal::EMercunaMoveGoal_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EMercunaMoveGoal::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EMercunaMoveGoal.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaMoveGoal_CRC() { return 3838936819U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
