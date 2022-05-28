// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotify_ChangeAudioVolumeEnable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotify_ChangeAudioVolumeEnable() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotify_ChangeAudioVolumeEnable_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotify_ChangeAudioVolumeEnable();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADAnimNotify_ChangeAudioVolumeEnable::StaticRegisterNativesUSQEXSEADAnimNotify_ChangeAudioVolumeEnable()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotify_ChangeAudioVolumeEnable_NoRegister()
	{
		return USQEXSEADAnimNotify_ChangeAudioVolumeEnable::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotify_ChangeAudioVolumeEnable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotify();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAnimNotify_ChangeAudioVolumeEnable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, USQEXSEADAnimNotify_ChangeAudioVolumeEnable);
				UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, USQEXSEADAnimNotify_ChangeAudioVolumeEnable), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bEnable, USQEXSEADAnimNotify_ChangeAudioVolumeEnable), sizeof(uint8), false);
				UProperty* NewProp_AudioVolumeName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AudioVolumeName, USQEXSEADAnimNotify_ChangeAudioVolumeEnable), 0x0010000000000015);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAnimNotify_ChangeAudioVolumeEnable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAnimNotify_ChangeAudioVolumeEnable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_ChangeAudioVolumeEnable.h"));
				MetaData->SetValue(NewProp_bEnable, TEXT("Category"), TEXT("SQEXSEADAnimNotify_ChangeAudioVolumeEnable"));
				MetaData->SetValue(NewProp_bEnable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_ChangeAudioVolumeEnable.h"));
				MetaData->SetValue(NewProp_AudioVolumeName, TEXT("Category"), TEXT("SQEXSEADAnimNotify_ChangeAudioVolumeEnable"));
				MetaData->SetValue(NewProp_AudioVolumeName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_ChangeAudioVolumeEnable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAnimNotify_ChangeAudioVolumeEnable, 580767580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAnimNotify_ChangeAudioVolumeEnable(Z_Construct_UClass_USQEXSEADAnimNotify_ChangeAudioVolumeEnable, &USQEXSEADAnimNotify_ChangeAudioVolumeEnable::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAnimNotify_ChangeAudioVolumeEnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAnimNotify_ChangeAudioVolumeEnable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
