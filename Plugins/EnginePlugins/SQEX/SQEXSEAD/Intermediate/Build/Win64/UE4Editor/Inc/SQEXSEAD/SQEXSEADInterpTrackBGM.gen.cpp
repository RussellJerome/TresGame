// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackBGM.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackBGM() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGM_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGM();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADInterpTrackBGM::StaticRegisterNativesUSQEXSEADInterpTrackBGM()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGM_NoRegister()
	{
		return USQEXSEADInterpTrackBGM::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGM()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackSound();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackBGM::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				UProperty* NewProp_OnMatineeEndSetVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnMatineeEndSetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OnMatineeEndSetVolume, USQEXSEADInterpTrackBGM), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackBGM> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackBGM.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackBGM.h"));
				MetaData->SetValue(NewProp_OnMatineeEndSetVolume, TEXT("Category"), TEXT("SQEXSEADInterpTrackBGM"));
				MetaData->SetValue(NewProp_OnMatineeEndSetVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackBGM.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackBGM, 1846786252);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackBGM(Z_Construct_UClass_USQEXSEADInterpTrackBGM, &USQEXSEADInterpTrackBGM::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackBGM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackBGM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
