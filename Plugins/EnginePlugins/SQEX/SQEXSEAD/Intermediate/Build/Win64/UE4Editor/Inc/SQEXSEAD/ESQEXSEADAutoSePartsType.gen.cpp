// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADAutoSePartsType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADAutoSePartsType() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADAutoSePartsType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADAutoSePartsType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADAutoSePartsType(ESQEXSEADAutoSePartsType_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADAutoSePartsType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADAutoSePartsType"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADAutoSePartsType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::Invalid"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::Foot_Default"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::Arm_Default"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::Wing_Default"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::Swing_Default"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::Body_Default"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSePartsType::ESQEXSEADAutoSePartsType_MAX"), 6);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADAutoSePartsType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADAutoSePartsType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSePartsType_CRC() { return 2539682250U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
