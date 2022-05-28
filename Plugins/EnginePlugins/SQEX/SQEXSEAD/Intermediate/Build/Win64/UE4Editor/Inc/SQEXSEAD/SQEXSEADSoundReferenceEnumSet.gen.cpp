// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSoundReferenceEnumSet.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSoundReferenceEnumSet() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSoundReferenceEnumSet_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSoundReferenceEnumSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSoundReference();
// End Cross Module References
	void USQEXSEADSoundReferenceEnumSet::StaticRegisterNativesUSQEXSEADSoundReferenceEnumSet()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADSoundReferenceEnumSet_NoRegister()
	{
		return USQEXSEADSoundReferenceEnumSet::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADSoundReferenceEnumSet()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADSoundReferenceEnumSet::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_References = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("References"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(References, USQEXSEADSoundReferenceEnumSet), 0x0010000000000001);
				UProperty* NewProp_References_Inner = new(EC_InternalUseOnlyConstructor, NewProp_References, TEXT("References"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADSoundReference());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADSoundReferenceEnumSet> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADSoundReferenceEnumSet.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundReferenceEnumSet.h"));
				MetaData->SetValue(NewProp_References, TEXT("Category"), TEXT("SQEXSEADSoundReferenceEnumSet"));
				MetaData->SetValue(NewProp_References, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSoundReferenceEnumSet.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADSoundReferenceEnumSet, 3311915947);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADSoundReferenceEnumSet(Z_Construct_UClass_USQEXSEADSoundReferenceEnumSet, &USQEXSEADSoundReferenceEnumSet::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADSoundReferenceEnumSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADSoundReferenceEnumSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
