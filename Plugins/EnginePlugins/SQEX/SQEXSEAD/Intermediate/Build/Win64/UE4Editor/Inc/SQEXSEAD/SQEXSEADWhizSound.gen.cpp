// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADWhizSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADWhizSound() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADWhizSound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADWhizSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADWhizSeComponent_NoRegister();
// End Cross Module References
	void ASQEXSEADWhizSound::StaticRegisterNativesASQEXSEADWhizSound()
	{
	}
	UClass* Z_Construct_UClass_ASQEXSEADWhizSound_NoRegister()
	{
		return ASQEXSEADWhizSound::StaticClass();
	}
	UClass* Z_Construct_UClass_ASQEXSEADWhizSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = ASQEXSEADWhizSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_WhizComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhizComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WhizComponent, ASQEXSEADWhizSound), 0x00120000000a001d, Z_Construct_UClass_USQEXSEADWhizSeComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ASQEXSEADWhizSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADWhizSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSound.h"));
				MetaData->SetValue(NewProp_WhizComponent, TEXT("Category"), TEXT("SQEXSEADWhizSound"));
				MetaData->SetValue(NewProp_WhizComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WhizComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASQEXSEADWhizSound, 3329634052);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASQEXSEADWhizSound(Z_Construct_UClass_ASQEXSEADWhizSound, &ASQEXSEADWhizSound::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("ASQEXSEADWhizSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASQEXSEADWhizSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
