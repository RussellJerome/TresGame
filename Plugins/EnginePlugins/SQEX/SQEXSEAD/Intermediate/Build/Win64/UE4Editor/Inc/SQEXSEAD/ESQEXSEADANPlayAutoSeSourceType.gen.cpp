// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADANPlayAutoSeSourceType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADANPlayAutoSeSourceType() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADANPlayAutoSeSourceType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADANPlayAutoSeSourceType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADANPlayAutoSeSourceType(ESQEXSEADANPlayAutoSeSourceType_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADANPlayAutoSeSourceType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADANPlayAutoSeSourceType"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADANPlayAutoSeSourceType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADANPlayAutoSeSourceType::MotionSoundType"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADANPlayAutoSeSourceType::AuxSurfaceTable"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADANPlayAutoSeSourceType::SurfaceTableAsset"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADANPlayAutoSeSourceType::ESQEXSEADANPlayAutoSeSourceType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADANPlayAutoSeSourceType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADANPlayAutoSeSourceType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADANPlayAutoSeSourceType_CRC() { return 3494045330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
