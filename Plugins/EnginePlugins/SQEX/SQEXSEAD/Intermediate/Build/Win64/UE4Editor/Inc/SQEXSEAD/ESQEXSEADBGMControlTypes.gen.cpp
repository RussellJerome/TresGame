// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADBGMControlTypes.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADBGMControlTypes() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADBGMControlTypes_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADBGMControlTypes"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADBGMControlTypes(ESQEXSEADBGMControlTypes_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADBGMControlTypes"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADBGMControlTypes"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADBGMControlTypes"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::NONE"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::PLAY"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::STOP"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::RESET"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::SETSILENT"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::SETSECTION"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::SETMODE"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::SETPATHPLAY"), 7);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::READY"), 8);
			EnumNames.Emplace(TEXT("ESQEXSEADBGMControlTypes::ESQEXSEADBGMControlTypes_MAX"), 9);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADBGMControlTypes::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADBGMControlTypes.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADBGMControlTypes_CRC() { return 1136981315U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
