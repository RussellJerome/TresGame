// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackInstBGM.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackInstBGM() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstBGM_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstBGM();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSound();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADInterpTrackInstBGM::StaticRegisterNativesUSQEXSEADInterpTrackInstBGM()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstBGM_NoRegister()
	{
		return USQEXSEADInterpTrackInstBGM::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstBGM()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackInstSound();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackInstBGM::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_PlayedSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayedSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayedSound, USQEXSEADInterpTrackInstBGM), 0x0010000000000000, Z_Construct_UClass_USoundBase_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackInstBGM> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackInstBGM.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackInstBGM.h"));
				MetaData->SetValue(NewProp_PlayedSound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackInstBGM.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackInstBGM, 2989671224);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackInstBGM(Z_Construct_UClass_USQEXSEADInterpTrackInstBGM, &USQEXSEADInterpTrackInstBGM::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackInstBGM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackInstBGM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
