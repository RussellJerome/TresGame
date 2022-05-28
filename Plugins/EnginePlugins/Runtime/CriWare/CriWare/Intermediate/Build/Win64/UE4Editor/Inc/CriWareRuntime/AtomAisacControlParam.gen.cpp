// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomAisacControlParam.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacControlParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAisacControlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAisacControlParam(FAtomAisacControlParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAisacControlParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAisacControlParam")),new UScriptStruct::TCppStructOps<FAtomAisacControlParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomAisacControlParam"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAtomAisacControlParam>, EStructFlags(0x00000001));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, FAtomAisacControlParam), 0x0010000000000001);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FAtomAisacControlParam), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomAisacControlParam.h"));
			MetaData->SetValue(NewProp_Value, TEXT("Category"), TEXT("AtomAisacControlParam"));
			MetaData->SetValue(NewProp_Value, TEXT("ModuleRelativePath"), TEXT("Public/AtomAisacControlParam.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("AtomAisacControlParam"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/AtomAisacControlParam.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC() { return 1801677800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
