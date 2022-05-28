// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EEngineIniFileType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEngineIniFileType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
static UEnum* EEngineIniFileType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EEngineIniFileType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEngineIniFileType(EEngineIniFileType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EEngineIniFileType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEngineIniFileType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EEngineIniFileType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EEngineIniFileType::EngBaseEngineIni"), 0);
			EnumNames.Emplace(TEXT("EEngineIniFileType::EngWindowsEngineIni"), 1);
			EnumNames.Emplace(TEXT("EEngineIniFileType::EngPS4EngineIni"), 2);
			EnumNames.Emplace(TEXT("EEngineIniFileType::EngXboxOneEngineIni"), 3);
			EnumNames.Emplace(TEXT("EEngineIniFileType::ProjDefaultEngineIni"), 4);
			EnumNames.Emplace(TEXT("EEngineIniFileType::ProjWindowsEngineIni"), 5);
			EnumNames.Emplace(TEXT("EEngineIniFileType::ProjPS4EngineIni"), 6);
			EnumNames.Emplace(TEXT("EEngineIniFileType::ProjXboxOneEngineIni"), 7);
			EnumNames.Emplace(TEXT("EEngineIniFileType::EEngineIniFileType_MAX"), 8);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("EEngineIniFileType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EEngineIniFileType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_CRC() { return 3173226169U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
