// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputDeviceAxisProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputDeviceAxisProperties() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FDirectInputDeviceAxisProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputDeviceAxisProperties"), sizeof(FDirectInputDeviceAxisProperties), Get_Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputDeviceAxisProperties(FDirectInputDeviceAxisProperties::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputDeviceAxisProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceAxisProperties
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceAxisProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputDeviceAxisProperties")),new UScriptStruct::TCppStructOps<FDirectInputDeviceAxisProperties>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceAxisProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputDeviceAxisProperties"), sizeof(FDirectInputDeviceAxisProperties), Get_Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputDeviceAxisProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputDeviceAxisProperties>, EStructFlags(0x00000201));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bInverted, FDirectInputDeviceAxisProperties);
			UProperty* NewProp_bInverted = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bInverted"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bInverted, FDirectInputDeviceAxisProperties), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bInverted, FDirectInputDeviceAxisProperties), sizeof(uint8), false);
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FDirectInputDeviceAxisProperties), 0x0010000000000001, Z_Construct_UScriptStruct_FKey());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, FDirectInputDeviceAxisProperties);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, FDirectInputDeviceAxisProperties), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnabled, FDirectInputDeviceAxisProperties), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceAxisProperties.h"));
			MetaData->SetValue(NewProp_bInverted, TEXT("Category"), TEXT("DirectInputDeviceAxisProperties"));
			MetaData->SetValue(NewProp_bInverted, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceAxisProperties.h"));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("DirectInputDeviceAxisProperties"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceAxisProperties.h"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("DirectInputDeviceAxisProperties"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceAxisProperties.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties_CRC() { return 3891739076U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
