// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavigationConfiguration.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavigationConfiguration() {}
// Cross Module References
	MERCUNA_API UScriptStruct* Z_Construct_UScriptStruct_FMercunaNavigationConfiguration();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
class UScriptStruct* FMercunaNavigationConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MERCUNA_API uint32 Get_Z_Construct_UScriptStruct_FMercunaNavigationConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMercunaNavigationConfiguration, Z_Construct_UPackage__Script_Mercuna(), TEXT("MercunaNavigationConfiguration"), sizeof(FMercunaNavigationConfiguration), Get_Z_Construct_UScriptStruct_FMercunaNavigationConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMercunaNavigationConfiguration(FMercunaNavigationConfiguration::StaticStruct, TEXT("/Script/Mercuna"), TEXT("MercunaNavigationConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_Mercuna_StaticRegisterNativesFMercunaNavigationConfiguration
{
	FScriptStruct_Mercuna_StaticRegisterNativesFMercunaNavigationConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MercunaNavigationConfiguration")),new UScriptStruct::TCppStructOps<FMercunaNavigationConfiguration>);
	}
} ScriptStruct_Mercuna_StaticRegisterNativesFMercunaNavigationConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FMercunaNavigationConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UScriptStruct_FMercunaNavigationConfiguration_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MercunaNavigationConfiguration"), sizeof(FMercunaNavigationConfiguration), Get_Z_Construct_UScriptStruct_FMercunaNavigationConfiguration_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaNavigationConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMercunaNavigationConfiguration>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(StopAtDestination, FMercunaNavigationConfiguration);
			UProperty* NewProp_StopAtDestination = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StopAtDestination"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(StopAtDestination, FMercunaNavigationConfiguration), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(StopAtDestination, FMercunaNavigationConfiguration), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(MoveOnlyInLookDirection, FMercunaNavigationConfiguration);
			UProperty* NewProp_MoveOnlyInLookDirection = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MoveOnlyInLookDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(MoveOnlyInLookDirection, FMercunaNavigationConfiguration), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(MoveOnlyInLookDirection, FMercunaNavigationConfiguration), sizeof(bool), true);
			UProperty* NewProp_MaxRoll = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxRoll"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxRoll, FMercunaNavigationConfiguration), 0x0010000000000001);
			UProperty* NewProp_MaxPitch = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxPitch, FMercunaNavigationConfiguration), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationConfiguration.h"));
			MetaData->SetValue(NewProp_StopAtDestination, TEXT("Category"), TEXT("MercunaNavigationConfiguration"));
			MetaData->SetValue(NewProp_StopAtDestination, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationConfiguration.h"));
			MetaData->SetValue(NewProp_MoveOnlyInLookDirection, TEXT("Category"), TEXT("MercunaNavigationConfiguration"));
			MetaData->SetValue(NewProp_MoveOnlyInLookDirection, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationConfiguration.h"));
			MetaData->SetValue(NewProp_MaxRoll, TEXT("Category"), TEXT("MercunaNavigationConfiguration"));
			MetaData->SetValue(NewProp_MaxRoll, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationConfiguration.h"));
			MetaData->SetValue(NewProp_MaxPitch, TEXT("Category"), TEXT("MercunaNavigationConfiguration"));
			MetaData->SetValue(NewProp_MaxPitch, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationConfiguration.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMercunaNavigationConfiguration_CRC() { return 1999821045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
