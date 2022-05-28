// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ECriFsLoaderStatus.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriFsLoaderStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
static UEnum* ECriFsLoaderStatus_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriFsLoaderStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECriFsLoaderStatus(ECriFsLoaderStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("ECriFsLoaderStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECriFsLoaderStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ECriFsLoaderStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ECriFsLoaderStatus::Stop"), 0);
			EnumNames.Emplace(TEXT("ECriFsLoaderStatus::Loading"), 1);
			EnumNames.Emplace(TEXT("ECriFsLoaderStatus::Complete"), 2);
			EnumNames.Emplace(TEXT("ECriFsLoaderStatus::Error"), 3);
			EnumNames.Emplace(TEXT("ECriFsLoaderStatus::ECriFsLoaderStatus_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ECriFsLoaderStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ECriFsLoaderStatus.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus_CRC() { return 2516080054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
