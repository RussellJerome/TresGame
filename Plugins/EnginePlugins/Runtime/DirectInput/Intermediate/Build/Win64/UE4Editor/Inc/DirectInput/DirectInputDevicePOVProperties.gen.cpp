// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputDevicePOVProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputDevicePOVProperties() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FDirectInputDevicePOVProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputDevicePOVProperties"), sizeof(FDirectInputDevicePOVProperties), Get_Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputDevicePOVProperties(FDirectInputDevicePOVProperties::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputDevicePOVProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDevicePOVProperties
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDevicePOVProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputDevicePOVProperties")),new UScriptStruct::TCppStructOps<FDirectInputDevicePOVProperties>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDevicePOVProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputDevicePOVProperties"), sizeof(FDirectInputDevicePOVProperties), Get_Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputDevicePOVProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputDevicePOVProperties>, EStructFlags(0x00000201));
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FDirectInputDevicePOVProperties), 0x0010000000000001, Z_Construct_UScriptStruct_FKey());
			NewProp_Key->ArrayDim = CPP_ARRAY_DIM(Key, FDirectInputDevicePOVProperties);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, FDirectInputDevicePOVProperties);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, FDirectInputDevicePOVProperties), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnabled, FDirectInputDevicePOVProperties), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDevicePOVProperties.h"));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("DirectInputDevicePOVProperties"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDevicePOVProperties.h"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("DirectInputDevicePOVProperties"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDevicePOVProperties.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties_CRC() { return 3327183933U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
