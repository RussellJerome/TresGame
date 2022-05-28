// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputIgnoreDeviceSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputIgnoreDeviceSettings() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceID();
// End Cross Module References
class UScriptStruct* FDirectInputIgnoreDeviceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputIgnoreDeviceSettings"), sizeof(FDirectInputIgnoreDeviceSettings), Get_Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputIgnoreDeviceSettings(FDirectInputIgnoreDeviceSettings::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputIgnoreDeviceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputIgnoreDeviceSettings
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputIgnoreDeviceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputIgnoreDeviceSettings")),new UScriptStruct::TCppStructOps<FDirectInputIgnoreDeviceSettings>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputIgnoreDeviceSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputIgnoreDeviceSettings"), sizeof(FDirectInputIgnoreDeviceSettings), Get_Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputIgnoreDeviceSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputIgnoreDeviceSettings>, EStructFlags(0x00000201));
			UProperty* NewProp_IgnoreDevices = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IgnoreDevices"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(IgnoreDevices, FDirectInputIgnoreDeviceSettings), 0x0010000000004001);
			UProperty* NewProp_IgnoreDevices_Inner = new(EC_InternalUseOnlyConstructor, NewProp_IgnoreDevices, TEXT("IgnoreDevices"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FDirectInputDeviceID());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreDualShock4, FDirectInputIgnoreDeviceSettings);
			UProperty* NewProp_bIgnoreDualShock4 = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIgnoreDualShock4"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreDualShock4, FDirectInputIgnoreDeviceSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreDualShock4, FDirectInputIgnoreDeviceSettings), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreXInputDevice, FDirectInputIgnoreDeviceSettings);
			UProperty* NewProp_bIgnoreXInputDevice = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIgnoreXInputDevice"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreXInputDevice, FDirectInputIgnoreDeviceSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreXInputDevice, FDirectInputIgnoreDeviceSettings), sizeof(bool), true);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputIgnoreDeviceSettings.h"));
			MetaData->SetValue(NewProp_IgnoreDevices, TEXT("Category"), TEXT("DirectInputIgnoreDeviceSettings"));
			MetaData->SetValue(NewProp_IgnoreDevices, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputIgnoreDeviceSettings.h"));
			MetaData->SetValue(NewProp_bIgnoreDualShock4, TEXT("Category"), TEXT("DirectInputIgnoreDeviceSettings"));
			MetaData->SetValue(NewProp_bIgnoreDualShock4, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputIgnoreDeviceSettings.h"));
			MetaData->SetValue(NewProp_bIgnoreXInputDevice, TEXT("Category"), TEXT("DirectInputIgnoreDeviceSettings"));
			MetaData->SetValue(NewProp_bIgnoreXInputDevice, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputIgnoreDeviceSettings.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings_CRC() { return 2058057365U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
