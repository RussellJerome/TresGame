// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackSound() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackSound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackSound();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADInterpTrackSound::StaticRegisterNativesUSQEXSEADInterpTrackSound()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackSound_NoRegister()
	{
		return USQEXSEADInterpTrackSound::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackSound();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTreatAsNonWorldSound, USQEXSEADInterpTrackSound);
				UProperty* NewProp_bTreatAsNonWorldSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTreatAsNonWorldSound"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTreatAsNonWorldSound, USQEXSEADInterpTrackSound), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bTreatAsNonWorldSound, USQEXSEADInterpTrackSound), sizeof(uint8), false);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackSound.h"));
				MetaData->SetValue(NewProp_bTreatAsNonWorldSound, TEXT("Category"), TEXT("SQEXSEADInterpTrackSound"));
				MetaData->SetValue(NewProp_bTreatAsNonWorldSound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackSound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackSound, 3969442632);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackSound(Z_Construct_UClass_USQEXSEADInterpTrackSound, &USQEXSEADInterpTrackSound::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
