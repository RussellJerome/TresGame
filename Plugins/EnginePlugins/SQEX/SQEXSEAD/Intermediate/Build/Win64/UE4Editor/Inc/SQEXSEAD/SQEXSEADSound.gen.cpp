// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSound() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSoundBank_NoRegister();
// End Cross Module References
	void USQEXSEADSound::StaticRegisterNativesUSQEXSEADSound()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADSound_NoRegister()
	{
		return USQEXSEADSound::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USoundWave();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20881080u;


				UProperty* NewProp_SEADSoundOutputPort = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SEADSoundOutputPort"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(SEADSoundOutputPort, USQEXSEADSound), 0x0010010000000001, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADSoundOutputPort());
				UProperty* NewProp_SEADOcclusionTraceChannel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SEADOcclusionTraceChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(SEADOcclusionTraceChannel, USQEXSEADSound), 0x0010010000000001, Z_Construct_UEnum_Engine_ECollisionChannel());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableSEADTracingOcclusion, USQEXSEADSound);
				UProperty* NewProp_bEnableSEADTracingOcclusion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableSEADTracingOcclusion"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableSEADTracingOcclusion, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableSEADTracingOcclusion, USQEXSEADSound), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreObstruction, USQEXSEADSound);
				UProperty* NewProp_bIgnoreObstruction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIgnoreObstruction"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreObstruction, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreObstruction, USQEXSEADSound), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreAudioVolumeAttenuation, USQEXSEADSound);
				UProperty* NewProp_bIgnoreAudioVolumeAttenuation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIgnoreAudioVolumeAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreAudioVolumeAttenuation, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreAudioVolumeAttenuation, USQEXSEADSound), sizeof(bool), true);
				UProperty* NewProp_PauseFadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PauseFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PauseFadeTime, USQEXSEADSound), 0x0010010000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreEnginePause, USQEXSEADSound);
				UProperty* NewProp_bIgnoreEnginePause = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIgnoreEnginePause"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreEnginePause, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreEnginePause, USQEXSEADSound), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsUISound, USQEXSEADSound);
				UProperty* NewProp_bIsUISound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsUISound"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsUISound, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bIsUISound, USQEXSEADSound), sizeof(bool), true);
				UProperty* NewProp_StopFadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StopFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StopFadeTime, USQEXSEADSound), 0x0010010000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideStopFadeTime, USQEXSEADSound);
				UProperty* NewProp_bOverrideStopFadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideStopFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideStopFadeTime, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bOverrideStopFadeTime, USQEXSEADSound), sizeof(bool), true);
				UProperty* NewProp_SoundIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SoundIndex, USQEXSEADSound), 0x0010010000000014);
				UProperty* NewProp_ReferenceBank = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReferenceBank"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReferenceBank, USQEXSEADSound), 0x0010010000000014, Z_Construct_UClass_USQEXSEADSoundBank_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseKohrogiAttenuation, USQEXSEADSound);
				UProperty* NewProp_bUseKohrogiAttenuation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseKohrogiAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseKohrogiAttenuation, USQEXSEADSound), 0x0010010000000001, CPP_BOOL_PROPERTY_BITMASK(bUseKohrogiAttenuation, USQEXSEADSound), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_SEADSoundOutputPort, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_SEADSoundOutputPort, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_SEADOcclusionTraceChannel, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_SEADOcclusionTraceChannel, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bEnableSEADTracingOcclusion, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bEnableSEADTracingOcclusion, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bIgnoreObstruction, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bIgnoreObstruction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bIgnoreAudioVolumeAttenuation, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bIgnoreAudioVolumeAttenuation, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_PauseFadeTime, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_PauseFadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bIgnoreEnginePause, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bIgnoreEnginePause, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bIsUISound, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bIsUISound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_StopFadeTime, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_StopFadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bOverrideStopFadeTime, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bOverrideStopFadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_SoundIndex, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_SoundIndex, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_ReferenceBank, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_ReferenceBank, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
				MetaData->SetValue(NewProp_bUseKohrogiAttenuation, TEXT("Category"), TEXT("SQEXSEADSound"));
				MetaData->SetValue(NewProp_bUseKohrogiAttenuation, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADSound, 1186135611);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADSound(Z_Construct_UClass_USQEXSEADSound, &USQEXSEADSound::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
