// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutSound() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADLayoutSound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADLayoutSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutComponent_NoRegister();
// End Cross Module References
	void ASQEXSEADLayoutSound::StaticRegisterNativesASQEXSEADLayoutSound()
	{
	}
	UClass* Z_Construct_UClass_ASQEXSEADLayoutSound_NoRegister()
	{
		return ASQEXSEADLayoutSound::StaticClass();
	}
	UClass* Z_Construct_UClass_ASQEXSEADLayoutSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = ASQEXSEADLayoutSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_LayoutComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LayoutComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LayoutComponent, ASQEXSEADLayoutSound), 0x00120000000a001d, Z_Construct_UClass_USQEXSEADLayoutComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ASQEXSEADLayoutSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADLayoutSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutSound.h"));
				MetaData->SetValue(NewProp_LayoutComponent, TEXT("Category"), TEXT("SQEXSEADLayoutSound"));
				MetaData->SetValue(NewProp_LayoutComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LayoutComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutSound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASQEXSEADLayoutSound, 1019600988);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASQEXSEADLayoutSound(Z_Construct_UClass_ASQEXSEADLayoutSound, &ASQEXSEADLayoutSound::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("ASQEXSEADLayoutSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASQEXSEADLayoutSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
