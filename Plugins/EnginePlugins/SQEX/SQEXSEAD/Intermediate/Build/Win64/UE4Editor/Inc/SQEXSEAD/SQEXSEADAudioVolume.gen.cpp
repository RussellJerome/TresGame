// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAudioVolume.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAudioVolume() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADAudioVolume_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADVolumeComponent_NoRegister();
// End Cross Module References
	void ASQEXSEADAudioVolume::StaticRegisterNativesASQEXSEADAudioVolume()
	{
	}
	UClass* Z_Construct_UClass_ASQEXSEADAudioVolume_NoRegister()
	{
		return ASQEXSEADAudioVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ASQEXSEADAudioVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AVolume();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = ASQEXSEADAudioVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_OverridingAttenuationSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverridingAttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverridingAttenuationSettings, ASQEXSEADAudioVolume), 0x0010000000000005, Z_Construct_UClass_USoundAttenuation_NoRegister());
				UProperty* NewProp_GroupedAudioVolumes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GroupedAudioVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(GroupedAudioVolumes, ASQEXSEADAudioVolume), 0x0010000000020001);
				UProperty* NewProp_GroupedAudioVolumes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_GroupedAudioVolumes, TEXT("GroupedAudioVolumes"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_ASQEXSEADAudioVolume_NoRegister());
				UProperty* NewProp_GroupingID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GroupingID"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(GroupingID, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_ObstructionParamsSeparatePriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObstructionParamsSeparatePriority"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ObstructionParamsSeparatePriority, ASQEXSEADAudioVolume), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseObstructionParamsSeparatePriority, ASQEXSEADAudioVolume);
				UProperty* NewProp_bUseObstructionParamsSeparatePriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseObstructionParamsSeparatePriority"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseObstructionParamsSeparatePriority, ASQEXSEADAudioVolume), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseObstructionParamsSeparatePriority, ASQEXSEADAudioVolume), sizeof(uint8), false);
				UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Priority, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_ObstructionFadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObstructionFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ObstructionFadeTime, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_InternalObstructionLPF = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InternalObstructionLPF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InternalObstructionLPF, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_InternalObstructionVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InternalObstructionVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InternalObstructionVolume, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_ObstructionLPF = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObstructionLPF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ObstructionLPF, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_ObstructionVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObstructionVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ObstructionVolume, ASQEXSEADAudioVolume), 0x0010000000000025);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableUnoccludedObstruction, ASQEXSEADAudioVolume);
				UProperty* NewProp_bEnableUnoccludedObstruction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableUnoccludedObstruction"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableUnoccludedObstruction, ASQEXSEADAudioVolume), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnableUnoccludedObstruction, ASQEXSEADAudioVolume), sizeof(uint8), false);
				UProperty* NewProp_AudioVolumeSoundOcclusionLPFFadeOutTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSoundOcclusionLPFFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AudioVolumeSoundOcclusionLPFFadeOutTime, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_AudioVolumeSoundOcclusionLPFFadeInTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSoundOcclusionLPFFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AudioVolumeSoundOcclusionLPFFadeInTime, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_AudioVolumeSoundOcclusionFadeOutTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSoundOcclusionFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AudioVolumeSoundOcclusionFadeOutTime, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_AudioVolumeSoundOcclusionFadeInTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSoundOcclusionFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AudioVolumeSoundOcclusionFadeInTime, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_AudioVolumeSoundOcclusionLPF = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSoundOcclusionLPF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AudioVolumeSoundOcclusionLPF, ASQEXSEADAudioVolume), 0x0010000000000025);
				UProperty* NewProp_AudioVolumeSoundOcclusionVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSoundOcclusionVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AudioVolumeSoundOcclusionVolume, ASQEXSEADAudioVolume), 0x0010000000000025);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOccludeExteriorAudioVolumeSounds, ASQEXSEADAudioVolume);
				UProperty* NewProp_bOccludeExteriorAudioVolumeSounds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOccludeExteriorAudioVolumeSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOccludeExteriorAudioVolumeSounds, ASQEXSEADAudioVolume), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOccludeExteriorAudioVolumeSounds, ASQEXSEADAudioVolume), sizeof(uint8), false);
				UProperty* NewProp_SoundFadeOutCurveNumber = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundFadeOutCurveNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SoundFadeOutCurveNumber, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_SoundFadeOutTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SoundFadeOutTime, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_SoundFadeInCurveNumber = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundFadeInCurveNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SoundFadeInCurveNumber, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_SoundFadeInTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SoundFadeInTime, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_SoundVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SoundVolume, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_AudioVolumeSounds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioVolumeSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AudioVolumeSounds, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_AudioVolumeSounds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AudioVolumeSounds, TEXT("AudioVolumeSounds"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_ZeroOneFadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZeroOneFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZeroOneFadeTime, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_ZeroOneValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZeroOneValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZeroOneValue, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_ZeroOneSlot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZeroOneSlot"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ZeroOneSlot, ASQEXSEADAudioVolume), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableZeroOne, ASQEXSEADAudioVolume);
				UProperty* NewProp_bEnableZeroOne = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableZeroOne"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableZeroOne, ASQEXSEADAudioVolume), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bEnableZeroOne, ASQEXSEADAudioVolume), sizeof(uint8), false);
				UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(EventName, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_EffectFadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EffectFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EffectFadeTime, ASQEXSEADAudioVolume), 0x0010000000000005);
				UProperty* NewProp_EffectPresetNumber = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EffectPresetNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(EffectPresetNumber, ASQEXSEADAudioVolume), 0x0010000000000025);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, ASQEXSEADAudioVolume);
				UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, ASQEXSEADAudioVolume), 0x0010000000000025, CPP_BOOL_PROPERTY_BITMASK(bEnabled, ASQEXSEADAudioVolume), sizeof(uint8), false);
				UProperty* NewProp_VolumeComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VolumeComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VolumeComponent, ASQEXSEADAudioVolume), 0x00120000000a001d, Z_Construct_UClass_USQEXSEADVolumeComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ASQEXSEADAudioVolume> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Brush Physics Object Display Rendering Physics Input Blueprint"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAudioVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_OverridingAttenuationSettings, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_OverridingAttenuationSettings, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_GroupedAudioVolumes, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_GroupedAudioVolumes, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_GroupingID, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_GroupingID, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ObstructionParamsSeparatePriority, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ObstructionParamsSeparatePriority, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_bUseObstructionParamsSeparatePriority, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_bUseObstructionParamsSeparatePriority, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_Priority, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_Priority, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ObstructionFadeTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ObstructionFadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_InternalObstructionLPF, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_InternalObstructionLPF, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_InternalObstructionVolume, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_InternalObstructionVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ObstructionLPF, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ObstructionLPF, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ObstructionVolume, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ObstructionVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_bEnableUnoccludedObstruction, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_bEnableUnoccludedObstruction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionLPFFadeOutTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionLPFFadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionLPFFadeInTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionLPFFadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionFadeOutTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionFadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionFadeInTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionFadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionLPF, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionLPF, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionVolume, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSoundOcclusionVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_bOccludeExteriorAudioVolumeSounds, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_bOccludeExteriorAudioVolumeSounds, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_SoundFadeOutCurveNumber, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_SoundFadeOutCurveNumber, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_SoundFadeOutTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_SoundFadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_SoundFadeInCurveNumber, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_SoundFadeInCurveNumber, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_SoundFadeInTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_SoundFadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_SoundVolume, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_SoundVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_AudioVolumeSounds, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_AudioVolumeSounds, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ZeroOneFadeTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ZeroOneFadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ZeroOneValue, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ZeroOneValue, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_ZeroOneSlot, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_ZeroOneSlot, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_bEnableZeroOne, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_bEnableZeroOne, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_EventName, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_EventName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_EffectFadeTime, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_EffectFadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_EffectPresetNumber, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_EffectPresetNumber, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_bEnabled, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_bEnabled, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
				MetaData->SetValue(NewProp_VolumeComponent, TEXT("Category"), TEXT("SQEXSEADAudioVolume"));
				MetaData->SetValue(NewProp_VolumeComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VolumeComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAudioVolume.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASQEXSEADAudioVolume, 3427476116);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASQEXSEADAudioVolume(Z_Construct_UClass_ASQEXSEADAudioVolume, &ASQEXSEADAudioVolume::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("ASQEXSEADAudioVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASQEXSEADAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
