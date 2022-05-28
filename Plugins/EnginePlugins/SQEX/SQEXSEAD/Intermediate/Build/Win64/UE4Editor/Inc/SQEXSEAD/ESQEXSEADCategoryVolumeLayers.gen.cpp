// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADCategoryVolumeLayers.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADCategoryVolumeLayers() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADCategoryVolumeLayers();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADCategoryVolumeLayers_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADCategoryVolumeLayers, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADCategoryVolumeLayers"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADCategoryVolumeLayers(ESQEXSEADCategoryVolumeLayers_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADCategoryVolumeLayers"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADCategoryVolumeLayers()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADCategoryVolumeLayers_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADCategoryVolumeLayers"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADCategoryVolumeLayers_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADCategoryVolumeLayers"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Debug"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Game"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Config"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Menu"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Event"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Slow"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::Matinee"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::_MAX"), 7);
			EnumNames.Emplace(TEXT("ESQEXSEADCategoryVolumeLayers::ESQEXSEADCategoryVolumeLayers_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADCategoryVolumeLayers::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADCategoryVolumeLayers.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADCategoryVolumeLayers_CRC() { return 3203589097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
