// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAssetHolder.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAssetHolder() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAssetHolder_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAssetHolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USQEXSEADAssetHolder::StaticRegisterNativesUSQEXSEADAssetHolder()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAssetHolder_NoRegister()
	{
		return USQEXSEADAssetHolder::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAssetHolder()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAssetHolder::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				UProperty* NewProp_HoldAssets = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HoldAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(HoldAssets, USQEXSEADAssetHolder), 0x0040000000002000);
				UProperty* NewProp_HoldAssets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_HoldAssets, TEXT("HoldAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAssetHolder> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAssetHolder.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAssetHolder.h"));
				MetaData->SetValue(NewProp_HoldAssets, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAssetHolder.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAssetHolder, 624606877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAssetHolder(Z_Construct_UClass_USQEXSEADAssetHolder, &USQEXSEADAssetHolder::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAssetHolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAssetHolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
