// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputDeviceButtonProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputDeviceButtonProperties() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FDirectInputDeviceButtonProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputDeviceButtonProperties"), sizeof(FDirectInputDeviceButtonProperties), Get_Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputDeviceButtonProperties(FDirectInputDeviceButtonProperties::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputDeviceButtonProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceButtonProperties
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceButtonProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputDeviceButtonProperties")),new UScriptStruct::TCppStructOps<FDirectInputDeviceButtonProperties>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceButtonProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputDeviceButtonProperties"), sizeof(FDirectInputDeviceButtonProperties), Get_Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputDeviceButtonProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputDeviceButtonProperties>, EStructFlags(0x00000201));
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FDirectInputDeviceButtonProperties), 0x0010000000000001, Z_Construct_UScriptStruct_FKey());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, FDirectInputDeviceButtonProperties);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, FDirectInputDeviceButtonProperties), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnabled, FDirectInputDeviceButtonProperties), sizeof(uint8), false);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceButtonProperties.h"));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("DirectInputDeviceButtonProperties"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceButtonProperties.h"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("DirectInputDeviceButtonProperties"));
			MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceButtonProperties.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties_CRC() { return 4129994476U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
