// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADAutoSeMotionSoundType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADAutoSeMotionSoundType() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADAutoSeMotionSoundType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADAutoSeMotionSoundType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADAutoSeMotionSoundType(ESQEXSEADAutoSeMotionSoundType_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADAutoSeMotionSoundType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADAutoSeMotionSoundType"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADAutoSeMotionSoundType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::None"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::Walk"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::Run"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::Jump"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::LandNormal"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::LandHard"), 5);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::FootShuffle"), 6);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::RustleShort"), 7);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::RustleLong"), 8);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::RustleFootShort"), 9);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::RustleFootLong"), 10);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::WingFlapUp"), 11);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::WingFlapDown"), 12);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::SwingKnock"), 13);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::SwingRub"), 14);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::CrouchDown"), 15);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::StandUp"), 16);
			EnumNames.Emplace(TEXT("ESQEXSEADAutoSeMotionSoundType::ESQEXSEADAutoSeMotionSoundType_MAX"), 17);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADAutoSeMotionSoundType::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADAutoSeMotionSoundType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAutoSeMotionSoundType_CRC() { return 1945524312U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
