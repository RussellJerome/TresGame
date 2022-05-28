// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADLayoutType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADLayoutType() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADLayoutType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADLayoutType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADLayoutType(ESQEXSEADLayoutType_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADLayoutType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADLayoutType"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADLayoutType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::Point"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::Line"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::Box"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::Polyline"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::Quadrilateral"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::TriangleStrip"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::TriangleFan"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEADLayoutType::ESQEXSEADLayoutType_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADLayoutType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADLayoutType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType_CRC() { return 192691871U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
