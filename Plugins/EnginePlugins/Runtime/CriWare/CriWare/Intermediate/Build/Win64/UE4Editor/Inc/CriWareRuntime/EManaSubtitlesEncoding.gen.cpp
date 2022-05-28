// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EManaSubtitlesEncoding.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaSubtitlesEncoding() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
static UEnum* EManaSubtitlesEncoding_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaSubtitlesEncoding"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaSubtitlesEncoding(EManaSubtitlesEncoding_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaSubtitlesEncoding"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaSubtitlesEncoding"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EManaSubtitlesEncoding"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EManaSubtitlesEncoding::Default"), 0);
			EnumNames.Emplace(TEXT("EManaSubtitlesEncoding::ANSI"), 1);
			EnumNames.Emplace(TEXT("EManaSubtitlesEncoding::Utf8"), 2);
			EnumNames.Emplace(TEXT("EManaSubtitlesEncoding::Utf16"), 3);
			EnumNames.Emplace(TEXT("EManaSubtitlesEncoding::EManaSubtitlesEncoding_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EManaSubtitlesEncoding");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EManaSubtitlesEncoding.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_CRC() { return 281875442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
