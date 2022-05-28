// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputCalibration.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputCalibration() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputCalibration();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceID();
// End Cross Module References
class UScriptStruct* FDirectInputCalibration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputCalibration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputCalibration, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputCalibration"), sizeof(FDirectInputCalibration), Get_Z_Construct_UScriptStruct_FDirectInputCalibration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputCalibration(FDirectInputCalibration::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputCalibration"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputCalibration
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputCalibration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputCalibration")),new UScriptStruct::TCppStructOps<FDirectInputCalibration>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputCalibration;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputCalibration()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputCalibration_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputCalibration"), sizeof(FDirectInputCalibration), Get_Z_Construct_UScriptStruct_FDirectInputCalibration_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputCalibration"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputCalibration>, EStructFlags(0x00000201));
			UProperty* NewProp_ButtonSources = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ButtonSources"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ButtonSources, FDirectInputCalibration), 0x0010000000004001);
			NewProp_ButtonSources->ArrayDim = CPP_ARRAY_DIM(ButtonSources, FDirectInputCalibration);
			UProperty* NewProp_DeviceID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DeviceID, FDirectInputCalibration), 0x0010000000000001, Z_Construct_UScriptStruct_FDirectInputDeviceID());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputCalibration.h"));
			MetaData->SetValue(NewProp_ButtonSources, TEXT("Category"), TEXT("DirectInputCalibration"));
			MetaData->SetValue(NewProp_ButtonSources, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputCalibration.h"));
			MetaData->SetValue(NewProp_DeviceID, TEXT("Category"), TEXT("DirectInputCalibration"));
			MetaData->SetValue(NewProp_DeviceID, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputCalibration.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputCalibration_CRC() { return 1436535844U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
