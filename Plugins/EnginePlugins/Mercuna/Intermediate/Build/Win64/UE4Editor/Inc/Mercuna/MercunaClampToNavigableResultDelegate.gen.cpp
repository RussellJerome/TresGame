// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaClampToNavigableResultDelegate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaClampToNavigableResultDelegate() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature()
	{
		struct _Script_Mercuna_eventMercunaClampToNavigableResult_Parms
		{
			FVector ClampedPosition;
		};
		UObject* Outer = Z_Construct_UPackage__Script_Mercuna();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaClampToNavigableResult__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_Mercuna_eventMercunaClampToNavigableResult_Parms));
			UProperty* NewProp_ClampedPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClampedPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClampedPosition, _Script_Mercuna_eventMercunaClampToNavigableResult_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaClampToNavigableResultDelegate.h"));
#endif
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
