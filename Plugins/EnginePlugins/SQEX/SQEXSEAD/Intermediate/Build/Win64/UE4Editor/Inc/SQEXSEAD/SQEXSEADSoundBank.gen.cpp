// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSoundBank.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSoundBank() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSoundBank_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSoundBank();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void USQEXSEADSoundBank::StaticRegisterNativesUSQEXSEADSoundBank()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADSoundBank_NoRegister()
	{
		return USQEXSEADSoundBank::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADSoundBank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADSoundBank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20881080u;


				UProperty* NewProp_AssetImportData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetImportData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AssetImportData, USQEXSEADSoundBank), 0x00120000000a0009, Z_Construct_UClass_UAssetImportData_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADSoundBank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADSoundBank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundBank.h"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("Category"), TEXT("SQEXSEADSoundBank"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AssetImportData, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundBank.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADSoundBank, 106572384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADSoundBank(Z_Construct_UClass_USQEXSEADSoundBank, &USQEXSEADSoundBank::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADSoundBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADSoundBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION