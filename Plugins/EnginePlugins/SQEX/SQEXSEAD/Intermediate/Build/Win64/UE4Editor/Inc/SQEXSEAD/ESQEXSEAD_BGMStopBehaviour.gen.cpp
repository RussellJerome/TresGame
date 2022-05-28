// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEAD_BGMStopBehaviour.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEAD_BGMStopBehaviour() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEAD_BGMStopBehaviour_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEAD_BGMStopBehaviour"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEAD_BGMStopBehaviour(ESQEXSEAD_BGMStopBehaviour_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEAD_BGMStopBehaviour"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEAD_BGMStopBehaviour"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEAD_BGMStopBehaviour"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMStopBehaviour::Stop"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMStopBehaviour::Reset"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMStopBehaviour::ESQEXSEAD_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESQEXSEAD_BGMStopBehaviour");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ESQEXSEAD_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEAD_BGMStopBehaviour.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStopBehaviour_CRC() { return 953187388U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
