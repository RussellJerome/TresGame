// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotify_PlaySound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotify_PlaySound() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlaySound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlaySound();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADAnimNotify_PlaySound::StaticRegisterNativesUSQEXSEADAnimNotify_PlaySound()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlaySound_NoRegister()
	{
		return USQEXSEADAnimNotify_PlaySound::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlaySound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotify();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAnimNotify_PlaySound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollowOwnerVisible, USQEXSEADAnimNotify_PlaySound);
				UProperty* NewProp_bFollowOwnerVisible = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollowOwnerVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollowOwnerVisible, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollowOwnerVisible, USQEXSEADAnimNotify_PlaySound), sizeof(uint8), false);
				UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollow, USQEXSEADAnimNotify_PlaySound);
				UProperty* NewProp_bFollow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollow, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollow, USQEXSEADAnimNotify_PlaySound), sizeof(uint8), false);
				UProperty* NewProp_FadeInDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeInDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInDuration, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015);
				UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015);
				UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015);
				UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, USQEXSEADAnimNotify_PlaySound), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAnimNotify_PlaySound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_bFollow, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_bFollow, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_VolumeMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_VolumeMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
				MetaData->SetValue(NewProp_Sound, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlaySound"));
				MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlaySound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAnimNotify_PlaySound, 3522986054);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAnimNotify_PlaySound(Z_Construct_UClass_USQEXSEADAnimNotify_PlaySound, &USQEXSEADAnimNotify_PlaySound::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAnimNotify_PlaySound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAnimNotify_PlaySound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
