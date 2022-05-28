// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotifyState_AttachSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotifyState_AttachSound() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_AttachSound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_AttachSound();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADAnimNotifyState_AttachSound::StaticRegisterNativesUSQEXSEADAnimNotifyState_AttachSound()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_AttachSound_NoRegister()
	{
		return USQEXSEADAnimNotifyState_AttachSound::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_AttachSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotifyState();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAnimNotifyState_AttachSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20113080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollowOwnerVisible, USQEXSEADAnimNotifyState_AttachSound);
				UProperty* NewProp_bFollowOwnerVisible = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollowOwnerVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollowOwnerVisible, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollowOwnerVisible, USQEXSEADAnimNotifyState_AttachSound), sizeof(uint8), false);
				UProperty* NewProp_LoopEndSoundPitchMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LoopEndSoundPitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LoopEndSoundPitchMultiplier, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_LoopEndSoundVolumeMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LoopEndSoundVolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LoopEndSoundVolumeMultiplier, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_LoopEndSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LoopEndSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LoopEndSound, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollow, USQEXSEADAnimNotifyState_AttachSound);
				UProperty* NewProp_bFollow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollow, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollow, USQEXSEADAnimNotifyState_AttachSound), sizeof(uint8), false);
				UProperty* NewProp_FadeOutDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeOutDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutDuration, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_FadeInDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeInDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInDuration, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_StartWaitTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartWaitTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartWaitTime, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015);
				UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, USQEXSEADAnimNotifyState_AttachSound), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAnimNotifyState_AttachSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_LoopEndSoundPitchMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_LoopEndSoundPitchMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_LoopEndSoundVolumeMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_LoopEndSoundVolumeMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_LoopEndSound, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_LoopEndSound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_bFollow, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_bFollow, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_StartWaitTime, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_StartWaitTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_VolumeMultiplier, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_VolumeMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
				MetaData->SetValue(NewProp_Sound, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_AttachSound"));
				MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_AttachSound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAnimNotifyState_AttachSound, 2065583686);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAnimNotifyState_AttachSound(Z_Construct_UClass_USQEXSEADAnimNotifyState_AttachSound, &USQEXSEADAnimNotifyState_AttachSound::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAnimNotifyState_AttachSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAnimNotifyState_AttachSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
