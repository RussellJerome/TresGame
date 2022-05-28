// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputDeviceConfiguration.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputDeviceConfiguration() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceID();
// End Cross Module References
class UScriptStruct* FDirectInputDeviceConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputDeviceConfiguration"), sizeof(FDirectInputDeviceConfiguration), Get_Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputDeviceConfiguration(FDirectInputDeviceConfiguration::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputDeviceConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceConfiguration
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputDeviceConfiguration")),new UScriptStruct::TCppStructOps<FDirectInputDeviceConfiguration>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputDeviceConfiguration"), sizeof(FDirectInputDeviceConfiguration), Get_Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputDeviceConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputDeviceConfiguration>, EStructFlags(0x00000201));
			UProperty* NewProp_ForceFeedbackProperties = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ForceFeedbackProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ForceFeedbackProperties, FDirectInputDeviceConfiguration), 0x0010000000000001);
			UProperty* NewProp_ForceFeedbackProperties_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ForceFeedbackProperties, TEXT("ForceFeedbackProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties());
			UProperty* NewProp_POVProperties = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("POVProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(POVProperties, FDirectInputDeviceConfiguration), 0x0010000000000001);
			UProperty* NewProp_POVProperties_Inner = new(EC_InternalUseOnlyConstructor, NewProp_POVProperties, TEXT("POVProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDirectInputDevicePOVProperties());
			UProperty* NewProp_ButtonProperties = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ButtonProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ButtonProperties, FDirectInputDeviceConfiguration), 0x0010000000000001);
			UProperty* NewProp_ButtonProperties_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ButtonProperties, TEXT("ButtonProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDirectInputDeviceButtonProperties());
			UProperty* NewProp_AxisProperties = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AxisProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AxisProperties, FDirectInputDeviceConfiguration), 0x0010000000000001);
			UProperty* NewProp_AxisProperties_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AxisProperties, TEXT("AxisProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDirectInputDeviceAxisProperties());
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DeviceID, FDirectInputDeviceConfiguration), 0x0010000000000001, Z_Construct_UScriptStruct_FDirectInputDeviceID());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceConfiguration.h"));
			MetaData->SetValue(NewProp_ForceFeedbackProperties, TEXT("Category"), TEXT("DirectInputDeviceConfiguration"));
			MetaData->SetValue(NewProp_ForceFeedbackProperties, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceConfiguration.h"));
			MetaData->SetValue(NewProp_POVProperties, TEXT("Category"), TEXT("DirectInputDeviceConfiguration"));
			MetaData->SetValue(NewProp_POVProperties, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceConfiguration.h"));
			MetaData->SetValue(NewProp_ButtonProperties, TEXT("Category"), TEXT("DirectInputDeviceConfiguration"));
			MetaData->SetValue(NewProp_ButtonProperties, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceConfiguration.h"));
			MetaData->SetValue(NewProp_AxisProperties, TEXT("Category"), TEXT("DirectInputDeviceConfiguration"));
			MetaData->SetValue(NewProp_AxisProperties, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceConfiguration.h"));
			MetaData->SetValue(NewProp_DeviceID, TEXT("Category"), TEXT("DirectInputDeviceConfiguration"));
			MetaData->SetValue(NewProp_DeviceID, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceConfiguration.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration_CRC() { return 2328070581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
