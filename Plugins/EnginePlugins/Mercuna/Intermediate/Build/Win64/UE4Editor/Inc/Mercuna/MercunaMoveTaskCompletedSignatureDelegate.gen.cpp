// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaMoveTaskCompletedSignatureDelegate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaMoveTaskCompletedSignatureDelegate() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaMoveTaskCompletedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaMoveTaskCompletedSignature__DelegateSignature()
	{
		struct _Script_Mercuna_eventMercunaMoveTaskCompletedSignature_Parms
		{
			TEnumAsByte<EMercunaMoveResult::Type> Result;
			AAIController* AIController;
		};
		UObject* Outer = Z_Construct_UPackage__Script_Mercuna();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaMoveTaskCompletedSignature__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_Mercuna_eventMercunaMoveTaskCompletedSignature_Parms));
			UProperty* NewProp_AIController = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AIController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AIController, _Script_Mercuna_eventMercunaMoveTaskCompletedSignature_Parms), 0x0010000000000080, Z_Construct_UClass_AAIController_NoRegister());
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Result, _Script_Mercuna_eventMercunaMoveTaskCompletedSignature_Parms), 0x0010000000000080, Z_Construct_UEnum_Mercuna_EMercunaMoveResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveTaskCompletedSignatureDelegate.h"));
#endif
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
