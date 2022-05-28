// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADAutoSeComponentAssetTablePerSurface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADAutoSeComponentAssetTablePerSurface() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTablePerSurface();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADAutoSeComponentAssetTablePerSurface_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTablePerSurface, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADAutoSeComponentAssetTablePerSurface(ESQEXSEADAutoSeComponentAssetTablePerSurface_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTablePerSurface()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTablePerSurface_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTablePerSurface_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::Walk"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::Run"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::Jump"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::LandNormal"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::LandHard"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::FootShuffle"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::MAX"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::ESQEXSEADAutoSeComponentAssetTablePerSurface_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADAutoSeComponentAssetTablePerSurface::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADAutoSeComponentAssetTablePerSurface.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTablePerSurface_CRC() { return 266829337U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
