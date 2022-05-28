// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSelectorParam.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomSelectorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorParam"), sizeof(FAtomSelectorParam), Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorParam(FAtomSelectorParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSelectorParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSelectorParam")),new UScriptStruct::TCppStructOps<FAtomSelectorParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorParam"), sizeof(FAtomSelectorParam), Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AtomSelectorParam"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FAtomSelectorParam>, EStructFlags(0x00000001));
			UProperty* NewProp_label = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("label"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(label, FAtomSelectorParam), 0x0010000000000001);
			UProperty* NewProp_Selector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Selector"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Selector, FAtomSelectorParam), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/AtomSelectorParam.h"));
			MetaData->SetValue(NewProp_label, TEXT("Category"), TEXT("AtomSelectorParam"));
			MetaData->SetValue(NewProp_label, TEXT("ModuleRelativePath"), TEXT("Public/AtomSelectorParam.h"));
			MetaData->SetValue(NewProp_Selector, TEXT("Category"), TEXT("AtomSelectorParam"));
			MetaData->SetValue(NewProp_Selector, TEXT("ModuleRelativePath"), TEXT("Public/AtomSelectorParam.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC() { return 4218003995U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
