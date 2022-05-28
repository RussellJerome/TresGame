// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADChangeAutoSeEnableNotifyEndBehavior.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADChangeAutoSeEnableNotifyEndBehavior() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior(ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior::RevertState"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior::SetInvertedState"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior::NoAction"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior::ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ESQEXSEADChangeAutoSeEnableNotifyEndBehavior");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADChangeAutoSeEnableNotifyEndBehavior.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior_CRC() { return 2940134596U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
