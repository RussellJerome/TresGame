// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEAD_BGMState.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEAD_BGMState() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEAD_BGMState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEAD_BGMState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEAD_BGMState(ESQEXSEAD_BGMState_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEAD_BGMState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEAD_BGMState"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEAD_BGMState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::Invalid"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::Ready"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::AutoPlay"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::Playing"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::Finished"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::Stop"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::Suspended"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::AutoResume"), 7);
			EnumNames.Emplace(TEXT("ESQEXSEAD_BGMState::ESQEXSEAD_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESQEXSEAD_BGMState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ESQEXSEAD_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEAD_BGMState.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState_CRC() { return 1228309653U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
