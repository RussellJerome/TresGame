// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/DirectInputDeviceID.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectInputDeviceID() {}
// Cross Module References
	DIRECTINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceID();
	UPackage* Z_Construct_UPackage__Script_DirectInput();
// End Cross Module References
class UScriptStruct* FDirectInputDeviceID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIRECTINPUT_API uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceID_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectInputDeviceID, Z_Construct_UPackage__Script_DirectInput(), TEXT("DirectInputDeviceID"), sizeof(FDirectInputDeviceID), Get_Z_Construct_UScriptStruct_FDirectInputDeviceID_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectInputDeviceID(FDirectInputDeviceID::StaticStruct, TEXT("/Script/DirectInput"), TEXT("DirectInputDeviceID"), false, nullptr, nullptr);
static struct FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceID
{
	FScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectInputDeviceID")),new UScriptStruct::TCppStructOps<FDirectInputDeviceID>);
	}
} ScriptStruct_DirectInput_StaticRegisterNativesFDirectInputDeviceID;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectInputDeviceID()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_DirectInput();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceID_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectInputDeviceID"), sizeof(FDirectInputDeviceID), Get_Z_Construct_UScriptStruct_FDirectInputDeviceID_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectInputDeviceID"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectInputDeviceID>, EStructFlags(0x00000201));
			UProperty* NewProp_ProductID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ProductID"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ProductID, FDirectInputDeviceID), 0x0010000000000001);
			UProperty* NewProp_VendorID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("VendorID"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(VendorID, FDirectInputDeviceID), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceID.h"));
			MetaData->SetValue(NewProp_ProductID, TEXT("Category"), TEXT("DirectInputDeviceID"));
			MetaData->SetValue(NewProp_ProductID, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceID.h"));
			MetaData->SetValue(NewProp_VendorID, TEXT("Category"), TEXT("DirectInputDeviceID"));
			MetaData->SetValue(NewProp_VendorID, TEXT("ModuleRelativePath"), TEXT("Public/DirectInputDeviceID.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectInputDeviceID_CRC() { return 141759998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
