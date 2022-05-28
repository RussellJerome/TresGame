// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputSettings() {}
// Cross Module References
	DIRECTINPUT_API UClass* Z_Construct_UClass_UDirectInputSettings_NoRegister();
	DIRECTINPUT_API UClass* Z_Construct_UClass_UDirectInputSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputCalibration();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration();
// End Cross Module References
	void UDirectInputSettings::StaticRegisterNativesUDirectInputSettings()
	{
	}
	UClass* Z_Construct_UClass_UDirectInputSettings_NoRegister()
	{
		return UDirectInputSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UDirectInputSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDeveloperSettings();
			Z_Construct_UPackage__Script_DirectInput();
			OuterClass = UDirectInputSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_DeviceCalibrations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DeviceCalibrations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DeviceCalibrations, UDirectInputSettings), 0x0010000000004001);
				UProperty* NewProp_DeviceCalibrations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DeviceCalibrations, TEXT("DeviceCalibrations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FDirectInputCalibration());
				UProperty* NewProp_IgnoreDeviceSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IgnoreDeviceSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IgnoreDeviceSettings, UDirectInputSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FDirectInputIgnoreDeviceSettings());
				UProperty* NewProp_ButtonRepeatDelay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ButtonRepeatDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ButtonRepeatDelay, UDirectInputSettings), 0x0010000000004001);
				UProperty* NewProp_InitialButtonRepeatDelay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitialButtonRepeatDelay"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InitialButtonRepeatDelay, UDirectInputSettings), 0x0010000000004001);
				UProperty* NewProp_DeviceConfigurations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DeviceConfigurations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DeviceConfigurations, UDirectInputSettings), 0x0010000000004001);
				UProperty* NewProp_DeviceConfigurations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DeviceConfigurations, TEXT("DeviceConfigurations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FDirectInputDeviceConfiguration());
				OuterClass->ClassConfigName = FName(TEXT("Input"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UDirectInputSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DirectInputSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputSettings.h"));
				MetaData->SetValue(NewProp_DeviceCalibrations, TEXT("Category"), TEXT("DirectInputSettings"));
				MetaData->SetValue(NewProp_DeviceCalibrations, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputSettings.h"));
				MetaData->SetValue(NewProp_IgnoreDeviceSettings, TEXT("Category"), TEXT("DirectInputSettings"));
				MetaData->SetValue(NewProp_IgnoreDeviceSettings, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputSettings.h"));
				MetaData->SetValue(NewProp_ButtonRepeatDelay, TEXT("Category"), TEXT("DirectInputSettings"));
				MetaData->SetValue(NewProp_ButtonRepeatDelay, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputSettings.h"));
				MetaData->SetValue(NewProp_InitialButtonRepeatDelay, TEXT("Category"), TEXT("DirectInputSettings"));
				MetaData->SetValue(NewProp_InitialButtonRepeatDelay, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputSettings.h"));
				MetaData->SetValue(NewProp_DeviceConfigurations, TEXT("Category"), TEXT("DirectInputSettings"));
				MetaData->SetValue(NewProp_DeviceConfigurations, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDirectInputSettings, 267522380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDirectInputSettings(Z_Construct_UClass_UDirectInputSettings, &UDirectInputSettings::StaticClass, TEXT("/Script/DirectInput"), TEXT("UDirectInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
