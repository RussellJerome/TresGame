// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EMerObstacleType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMerObstacleType() {}
// Cross Module References
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMerObstacleType();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
static UEnum* EMerObstacleType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_Mercuna_EMerObstacleType, Z_Construct_UPackage__Script_Mercuna(), TEXT("EMerObstacleType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMerObstacleType(EMerObstacleType_StaticEnum, TEXT("/Script/Mercuna"), TEXT("EMerObstacleType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Mercuna_EMerObstacleType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UEnum_Mercuna_EMerObstacleType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMerObstacleType"), 0, Get_Z_Construct_UEnum_Mercuna_EMerObstacleType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMerObstacleType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMerObstacleType::AUTO"), 0);
			EnumNames.Emplace(TEXT("EMerObstacleType::SPHERE"), 1);
			EnumNames.Emplace(TEXT("EMerObstacleType::EMerObstacleType_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EMerObstacleType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EMerObstacleType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Mercuna_EMerObstacleType_CRC() { return 1240201872U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
