// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADMusicActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADMusicActor() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_AdjustVolume();
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADMusicActor();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_BlendMode();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_BlendModeIndex();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_FadeIn();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_FadeOut();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_Play();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetMode();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetModeIndex();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSection();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSectionIndex();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_Stop();
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADMusicActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void ASQEXSEADMusicActor::StaticRegisterNativesASQEXSEADMusicActor()
	{
		UClass* Class = ASQEXSEADMusicActor::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AdjustVolume", (Native)&ASQEXSEADMusicActor::execAdjustVolume },
			{ "BlendMode", (Native)&ASQEXSEADMusicActor::execBlendMode },
			{ "BlendModeIndex", (Native)&ASQEXSEADMusicActor::execBlendModeIndex },
			{ "FadeIn", (Native)&ASQEXSEADMusicActor::execFadeIn },
			{ "FadeOut", (Native)&ASQEXSEADMusicActor::execFadeOut },
			{ "Play", (Native)&ASQEXSEADMusicActor::execPlay },
			{ "SetMode", (Native)&ASQEXSEADMusicActor::execSetMode },
			{ "SetModeIndex", (Native)&ASQEXSEADMusicActor::execSetModeIndex },
			{ "SetNextSection", (Native)&ASQEXSEADMusicActor::execSetNextSection },
			{ "SetNextSectionIndex", (Native)&ASQEXSEADMusicActor::execSetNextSectionIndex },
			{ "Stop", (Native)&ASQEXSEADMusicActor::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_AdjustVolume()
	{
		struct SQEXSEADMusicActor_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AdjustVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventAdjustVolume_Parms));
			UProperty* NewProp_AdjustVolumeLevel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdjustVolumeLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AdjustVolumeLevel, SQEXSEADMusicActor_eventAdjustVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_AdjustVolumeDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AdjustVolumeDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AdjustVolumeDuration, SQEXSEADMusicActor_eventAdjustVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_BlendMode()
	{
		struct SQEXSEADMusicActor_eventBlendMode_Parms
		{
			FString modeName;
			float Rate;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlendMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventBlendMode_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADMusicActor_eventBlendMode_Parms), 0x0010000000000080);
			UProperty* NewProp_Rate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rate, SQEXSEADMusicActor_eventBlendMode_Parms), 0x0010000000000080);
			UProperty* NewProp_modeName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("modeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(modeName, SQEXSEADMusicActor_eventBlendMode_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
			MetaData->SetValue(NewProp_modeName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_BlendModeIndex()
	{
		struct SQEXSEADMusicActor_eventBlendModeIndex_Parms
		{
			int32 ModeIndex;
			float Rate;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BlendModeIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventBlendModeIndex_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADMusicActor_eventBlendModeIndex_Parms), 0x0010000000000080);
			UProperty* NewProp_Rate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Rate, SQEXSEADMusicActor_eventBlendModeIndex_Parms), 0x0010000000000080);
			UProperty* NewProp_ModeIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ModeIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ModeIndex, SQEXSEADMusicActor_eventBlendModeIndex_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_FadeIn()
	{
		struct SQEXSEADMusicActor_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FadeIn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventFadeIn_Parms));
			UProperty* NewProp_FadeVolumeLevel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeVolumeLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeVolumeLevel, SQEXSEADMusicActor_eventFadeIn_Parms), 0x0010000000000080);
			UProperty* NewProp_FadeInDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeInDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInDuration, SQEXSEADMusicActor_eventFadeIn_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_FadeOut()
	{
		struct SQEXSEADMusicActor_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FadeOut"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventFadeOut_Parms));
			UProperty* NewProp_FadeVolumeLevel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeVolumeLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeVolumeLevel, SQEXSEADMusicActor_eventFadeOut_Parms), 0x0010000000000080);
			UProperty* NewProp_FadeOutDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeOutDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutDuration, SQEXSEADMusicActor_eventFadeOut_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_Play()
	{
		struct SQEXSEADMusicActor_eventPlay_Parms
		{
			float StartTime;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventPlay_Parms));
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, SQEXSEADMusicActor_eventPlay_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetMode()
	{
		struct SQEXSEADMusicActor_eventSetMode_Parms
		{
			FString modeName;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventSetMode_Parms));
			UProperty* NewProp_modeName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("modeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(modeName, SQEXSEADMusicActor_eventSetMode_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
			MetaData->SetValue(NewProp_modeName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetModeIndex()
	{
		struct SQEXSEADMusicActor_eventSetModeIndex_Parms
		{
			int32 ModeIndex;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetModeIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventSetModeIndex_Parms));
			UProperty* NewProp_ModeIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ModeIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ModeIndex, SQEXSEADMusicActor_eventSetModeIndex_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSection()
	{
		struct SQEXSEADMusicActor_eventSetNextSection_Parms
		{
			FString SectionName;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetNextSection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventSetNextSection_Parms));
			UProperty* NewProp_SectionName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SectionName, SQEXSEADMusicActor_eventSetNextSection_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
			MetaData->SetValue(NewProp_SectionName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSectionIndex()
	{
		struct SQEXSEADMusicActor_eventSetNextSectionIndex_Parms
		{
			int32 SectionIndex;
		};
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetNextSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADMusicActor_eventSetNextSectionIndex_Parms));
			UProperty* NewProp_SectionIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SectionIndex, SQEXSEADMusicActor_eventSetNextSectionIndex_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASQEXSEADMusicActor_Stop()
	{
		UObject* Outer = Z_Construct_UClass_ASQEXSEADMusicActor();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASQEXSEADMusicActor_NoRegister()
	{
		return ASQEXSEADMusicActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASQEXSEADMusicActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = ASQEXSEADMusicActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_AdjustVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_BlendMode());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_BlendModeIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_FadeIn());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_FadeOut());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_SetMode());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_SetModeIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSection());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSectionIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_ASQEXSEADMusicActor_Stop());

				UProperty* NewProp_AudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AudioComponent, ASQEXSEADMusicActor), 0x00100000000a001d, Z_Construct_UClass_UAudioComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoPlay, ASQEXSEADMusicActor);
				UProperty* NewProp_bAutoPlay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoPlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoPlay, ASQEXSEADMusicActor), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bAutoPlay, ASQEXSEADMusicActor), sizeof(uint8), false);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_AdjustVolume(), "AdjustVolume"); // 2032878940
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_BlendMode(), "BlendMode"); // 2366478918
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_BlendModeIndex(), "BlendModeIndex"); // 2859319813
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_FadeIn(), "FadeIn"); // 531884600
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_FadeOut(), "FadeOut"); // 3182783417
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_Play(), "Play"); // 3182627766
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_SetMode(), "SetMode"); // 3488301063
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_SetModeIndex(), "SetModeIndex"); // 135242248
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSection(), "SetNextSection"); // 2995024151
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_SetNextSectionIndex(), "SetNextSectionIndex"); // 3908366013
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASQEXSEADMusicActor_Stop(), "Stop"); // 1581249159
				static TCppClassTypeInfo<TCppClassTypeTraits<ASQEXSEADMusicActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADMusicActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("Category"), TEXT("SQEXSEADMusicActor"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
				MetaData->SetValue(NewProp_bAutoPlay, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADMusicActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASQEXSEADMusicActor, 2596263162);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASQEXSEADMusicActor(Z_Construct_UClass_ASQEXSEADMusicActor, &ASQEXSEADMusicActor::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("ASQEXSEADMusicActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASQEXSEADMusicActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
