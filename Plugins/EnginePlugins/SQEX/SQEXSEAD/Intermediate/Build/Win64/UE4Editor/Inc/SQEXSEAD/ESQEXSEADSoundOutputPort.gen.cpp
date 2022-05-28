// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESQEXSEADSoundOutputPort.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESQEXSEADSoundOutputPort() {}
// Cross Module References
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
static UEnum* ESQEXSEADSoundOutputPort_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("ESQEXSEADSoundOutputPort"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESQEXSEADSoundOutputPort(ESQEXSEADSoundOutputPort_StaticEnum, TEXT("/Script/SQEXSEAD"), TEXT("ESQEXSEADSoundOutputPort"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESQEXSEADSoundOutputPort"), 0, Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESQEXSEADSoundOutputPort"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ESQEXSEADSoundOutputPort::AUTO"), 0);
			EnumNames.Emplace(TEXT("ESQEXSEADSoundOutputPort::MAIN"), 1);
			EnumNames.Emplace(TEXT("ESQEXSEADSoundOutputPort::RESTRICTED"), 2);
			EnumNames.Emplace(TEXT("ESQEXSEADSoundOutputPort::PAD1"), 3);
			EnumNames.Emplace(TEXT("ESQEXSEADSoundOutputPort::MAIN_PAD1"), 4);
			EnumNames.Emplace(TEXT("ESQEXSEADSoundOutputPort::ESQEXSEADSoundOutputPort_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Namespaced);
			ReturnEnum->CppType = TEXT("ESQEXSEADSoundOutputPort::Type");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/ESQEXSEADSoundOutputPort.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort_CRC() { return 3358069758U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
