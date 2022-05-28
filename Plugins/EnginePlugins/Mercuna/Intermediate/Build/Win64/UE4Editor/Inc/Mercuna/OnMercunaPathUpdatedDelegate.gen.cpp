// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OnMercunaPathUpdatedDelegate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnMercunaPathUpdatedDelegate() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_OnMercunaPathUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaPathEvent();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_Mercuna_OnMercunaPathUpdated__DelegateSignature()
	{
		struct _Script_Mercuna_eventOnMercunaPathUpdated_Parms
		{
			TEnumAsByte<EMercunaPathEvent::Type> PathEvent;
		};
		UObject* Outer = Z_Construct_UPackage__Script_Mercuna();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnMercunaPathUpdated__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_Mercuna_eventOnMercunaPathUpdated_Parms));
			UProperty* NewProp_PathEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PathEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PathEvent, _Script_Mercuna_eventOnMercunaPathUpdated_Parms), 0x0010000000000080, Z_Construct_UEnum_Mercuna_EMercunaPathEvent());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/OnMercunaPathUpdatedDelegate.h"));
#endif
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
