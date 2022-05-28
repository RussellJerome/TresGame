// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputDeviceForceFeedbackProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputDeviceForceFeedbackProperties() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	DIRECTINPUT_API UEnum* Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel();
// End Cross Module References
class UScriptStruct* FDirectInputDeviceForceFeedbackProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputDeviceForceFeedbackProperties"), sizeof(FDirectInputDeviceForceFeedbackProperties), Get_Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties(FDirectInputDeviceForceFeedbackProperties::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputDeviceForceFeedbackProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceForceFeedbackProperties
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceForceFeedbackProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputDeviceForceFeedbackProperties")),new UScriptStruct::TCppStructOps<FDirectInputDeviceForceFeedbackProperties>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceForceFeedbackProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputDeviceForceFeedbackProperties"), sizeof(FDirectInputDeviceForceFeedbackProperties), Get_Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputDeviceForceFeedbackProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputDeviceForceFeedbackProperties>, EStructFlags(0x00000201));
			UProperty* NewProp_Channel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Channel"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Channel, FDirectInputDeviceForceFeedbackProperties), 0x0010000000000001, Z_Construct_UEnum_DirectInput_FDirectInputDeviceForceFeedbackChannel());
			UProperty* NewProp_Channel_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Channel, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceForceFeedbackProperties.h"));
			MetaData->SetValue(NewProp_Channel, TEXT("Category"), TEXT("DirectInputDeviceForceFeedbackProperties"));
			MetaData->SetValue(NewProp_Channel, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceForceFeedbackProperties.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceForceFeedbackProperties_CRC() { return 3778977314U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
