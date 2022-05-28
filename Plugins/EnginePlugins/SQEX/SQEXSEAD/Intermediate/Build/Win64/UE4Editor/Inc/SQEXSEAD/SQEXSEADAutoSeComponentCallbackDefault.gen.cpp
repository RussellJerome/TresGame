// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentCallbackDefault.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentCallbackDefault() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentCallbackDefault_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentCallbackDefault();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentCallback();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADAutoSeComponentCallbackDefault::StaticRegisterNativesUSQEXSEADAutoSeComponentCallbackDefault()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentCallbackDefault_NoRegister()
	{
		return USQEXSEADAutoSeComponentCallbackDefault::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentCallbackDefault()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USQEXSEADAutoSeComponentCallback();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAutoSeComponentCallbackDefault::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100088u;


				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAutoSeComponentCallbackDefault> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAutoSeComponentCallbackDefault.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentCallbackDefault.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAutoSeComponentCallbackDefault, 1325675723);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAutoSeComponentCallbackDefault(Z_Construct_UClass_USQEXSEADAutoSeComponentCallbackDefault, &USQEXSEADAutoSeComponentCallbackDefault::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAutoSeComponentCallbackDefault"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAutoSeComponentCallbackDefault);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
