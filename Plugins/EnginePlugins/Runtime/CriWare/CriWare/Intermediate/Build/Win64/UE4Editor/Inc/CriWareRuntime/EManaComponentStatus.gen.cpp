// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EManaComponentStatus.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
static UEnum* EManaComponentStatus_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaComponentStatus(EManaComponentStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaComponentStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaComponentStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EManaComponentStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EManaComponentStatus::Stop"), 0);
			EnumNames.Emplace(TEXT("EManaComponentStatus::DecHdr"), 1);
			EnumNames.Emplace(TEXT("EManaComponentStatus::WaitPrep"), 2);
			EnumNames.Emplace(TEXT("EManaComponentStatus::Prep"), 3);
			EnumNames.Emplace(TEXT("EManaComponentStatus::Ready"), 4);
			EnumNames.Emplace(TEXT("EManaComponentStatus::Playing"), 5);
			EnumNames.Emplace(TEXT("EManaComponentStatus::PlayEnd"), 6);
			EnumNames.Emplace(TEXT("EManaComponentStatus::Error"), 7);
			EnumNames.Emplace(TEXT("EManaComponentStatus::StopProcessing"), 8);
			EnumNames.Emplace(TEXT("EManaComponentStatus::EManaComponentStatus_MAX"), 9);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EManaComponentStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EManaComponentStatus.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus_CRC() { return 3342105949U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
