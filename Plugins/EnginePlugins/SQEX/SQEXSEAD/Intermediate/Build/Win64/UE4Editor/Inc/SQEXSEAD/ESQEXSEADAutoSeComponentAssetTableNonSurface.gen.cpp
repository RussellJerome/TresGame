// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADAutoSeComponentAssetTableNonSurface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADAutoSeComponentAssetTableNonSurface() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTableNonSurface();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADAutoSeComponentAssetTableNonSurface_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTableNonSurface, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADAutoSeComponentAssetTableNonSurface(ESQEXSEADAutoSeComponentAssetTableNonSurface_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTableNonSurface()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTableNonSurface_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTableNonSurface_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::RustleShort"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::RustleLong"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::RustleFootShort"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::RustleFootLong"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::WingFlapUp"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::WingFlapDown"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::SwingKnock"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::SwingRub"), 7);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::CrouchDown"), 8);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::StandUp"), 9);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::MAX"), 10);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::ESQEXSEADAutoSeComponentAssetTableNonSurface_MAX"), 11);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADAutoSeComponentAssetTableNonSurface::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADAutoSeComponentAssetTableNonSurface.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeComponentAssetTableNonSurface_CRC() { return 3814871032U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
