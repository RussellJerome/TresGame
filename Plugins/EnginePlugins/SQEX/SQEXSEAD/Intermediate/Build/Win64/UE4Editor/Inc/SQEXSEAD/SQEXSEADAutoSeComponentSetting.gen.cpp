// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentSetting.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentSetting() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentSetting_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentSetting();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams();
// End Cross Module References
	void USQEXSEADAutoSeComponentSetting::StaticRegisterNativesUSQEXSEADAutoSeComponentSetting()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentSetting_NoRegister()
	{
		return USQEXSEADAutoSeComponentSetting::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentSetting()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAutoSeComponentSetting::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_InitParams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitParams"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InitParams, USQEXSEADAutoSeComponentSetting), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentInitParams());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAutoSeComponentSetting> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAutoSeComponentSetting.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentSetting.h"));
				MetaData->SetValue(NewProp_InitParams, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentSetting"));
				MetaData->SetValue(NewProp_InitParams, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentSetting.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAutoSeComponentSetting, 2069482406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAutoSeComponentSetting(Z_Construct_UClass_USQEXSEADAutoSeComponentSetting, &USQEXSEADAutoSeComponentSetting::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAutoSeComponentSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAutoSeComponentSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
