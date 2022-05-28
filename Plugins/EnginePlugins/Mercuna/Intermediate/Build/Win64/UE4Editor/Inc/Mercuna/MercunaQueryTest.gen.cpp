// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaQueryTest.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaQueryTest() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaQueryTest_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void UMercunaQueryTest::StaticRegisterNativesUMercunaQueryTest()
	{
	}
	UClass* Z_Construct_UClass_UMercunaQueryTest_NoRegister()
	{
		return UMercunaQueryTest::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaQueryTest()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvQueryTest();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaQueryTest::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900081u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaQueryTest> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaQueryTest.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaQueryTest.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaQueryTest, 3568154568);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaQueryTest(Z_Construct_UClass_UMercunaQueryTest, &UMercunaQueryTest::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaQueryTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaQueryTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
