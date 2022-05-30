// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercuna_init() {}
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaMoveTaskCompletedSignature__DelegateSignature();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_OnMercunaPathUpdated__DelegateSignature();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaRaycastResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Mercuna()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Mercuna")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x782D14D3;
			Guid.B = 0xC2E58B3B;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature();
			Z_Construct_UDelegateFunction_Mercuna_MercunaMoveTaskCompletedSignature__DelegateSignature();
			Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature();
			Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature();
			Z_Construct_UDelegateFunction_Mercuna_OnMercunaPathUpdated__DelegateSignature();
			Z_Construct_UDelegateFunction_Mercuna_MercunaRaycastResult__DelegateSignature();
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
