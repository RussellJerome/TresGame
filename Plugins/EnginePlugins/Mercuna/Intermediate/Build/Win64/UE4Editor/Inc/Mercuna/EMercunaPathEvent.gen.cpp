// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EMercunaPathEvent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMercunaPathEvent() {}
// Cross Module References
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaPathEvent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
static UEnum* EMercunaPathEvent_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_Mercuna_EMercunaPathEvent, Z_Construct_UPackage__Script_Mercuna(), TEXT("EMercunaPathEvent"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMercunaPathEvent(EMercunaPathEvent_StaticEnum, TEXT("/Script/Mercuna"), TEXT("EMercunaPathEvent"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Mercuna_EMercunaPathEvent()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaPathEvent_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMercunaPathEvent"), 0, Get_Z_Construct_UEnum_Mercuna_EMercunaPathEvent_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMercunaPathEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMercunaPathEvent::Ready"), 0);
			EnumNames.Emplace(TEXT("EMercunaPathEvent::Updated"), 1);
			EnumNames.Emplace(TEXT("EMercunaPathEvent::Invalid"), 2);
			EnumNames.Emplace(TEXT("EMercunaPathEvent::EMercunaPathEvent_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EMercunaPathEvent::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EMercunaPathEvent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Mercuna_EMercunaPathEvent_CRC() { return 3034935167U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION