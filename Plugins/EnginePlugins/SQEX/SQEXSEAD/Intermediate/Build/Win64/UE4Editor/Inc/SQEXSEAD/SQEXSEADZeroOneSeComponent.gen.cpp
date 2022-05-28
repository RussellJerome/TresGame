// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADZeroOneSeComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADZeroOneSeComponent() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_IsPlaying();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADZeroOneSeComponent();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Play();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_SetZeroOneValue();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Stop();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADZeroOneSeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAudioComponent_NoRegister();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADZeroOneProperties();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAudioStartTimings();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADZeroOneSeComponent::StaticRegisterNativesUSQEXSEADZeroOneSeComponent()
	{
		UClass* Class = USQEXSEADZeroOneSeComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsPlaying", (Native)&USQEXSEADZeroOneSeComponent::execIsPlaying },
			{ "Play", (Native)&USQEXSEADZeroOneSeComponent::execPlay },
			{ "SetZeroOneValue", (Native)&USQEXSEADZeroOneSeComponent::execSetZeroOneValue },
			{ "Stop", (Native)&USQEXSEADZeroOneSeComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_IsPlaying()
	{
		struct SQEXSEADZeroOneSeComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADZeroOneSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADZeroOneSeComponent_eventIsPlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SQEXSEADZeroOneSeComponent_eventIsPlaying_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SQEXSEADZeroOneSeComponent_eventIsPlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SQEXSEADZeroOneSeComponent_eventIsPlaying_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Play()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADZeroOneSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_SetZeroOneValue()
	{
		struct SQEXSEADZeroOneSeComponent_eventSetZeroOneValue_Parms
		{
			int32 Slot;
			float Value;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADZeroOneSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetZeroOneValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADZeroOneSeComponent_eventSetZeroOneValue_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADZeroOneSeComponent_eventSetZeroOneValue_Parms), 0x0010000000000080);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, SQEXSEADZeroOneSeComponent_eventSetZeroOneValue_Parms), 0x0010000000000080);
			UProperty* NewProp_Slot = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Slot"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Slot, SQEXSEADZeroOneSeComponent_eventSetZeroOneValue_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADZeroOneSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQEXSEADZeroOneSeComponent_NoRegister()
	{
		return USQEXSEADZeroOneSeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADZeroOneSeComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADZeroOneSeComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_IsPlaying());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_SetZeroOneValue());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Stop());

				UProperty* NewProp_MyAudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyAudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyAudioComponent, USQEXSEADZeroOneSeComponent), 0x0040000000082008, Z_Construct_UClass_USQEXSEADAudioComponent_NoRegister());
				UProperty* NewProp_ValiableValueThreshold_Slot1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ValiableValueThreshold_Slot1"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ValiableValueThreshold_Slot1, USQEXSEADZeroOneSeComponent), 0x0010000000000005);
				UProperty* NewProp_ZeroOneFadeTime_Slot1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZeroOneFadeTime_Slot1"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZeroOneFadeTime_Slot1, USQEXSEADZeroOneSeComponent), 0x0010000000000005);
				UProperty* NewProp_PropertyType_Slot1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PropertyType_Slot1"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PropertyType_Slot1, USQEXSEADZeroOneSeComponent), 0x0010000000000005, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADZeroOneProperties());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable_Slot1, USQEXSEADZeroOneSeComponent);
				UProperty* NewProp_bEnable_Slot1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnable_Slot1"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable_Slot1, USQEXSEADZeroOneSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bEnable_Slot1, USQEXSEADZeroOneSeComponent), sizeof(uint8), false);
				UProperty* NewProp_ValiableValueThreshold_Slot0 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ValiableValueThreshold_Slot0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ValiableValueThreshold_Slot0, USQEXSEADZeroOneSeComponent), 0x0010000000000005);
				UProperty* NewProp_ZeroOneFadeTime_Slot0 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ZeroOneFadeTime_Slot0"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ZeroOneFadeTime_Slot0, USQEXSEADZeroOneSeComponent), 0x0010000000000005);
				UProperty* NewProp_PropertyType_Slot0 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PropertyType_Slot0"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(PropertyType_Slot0, USQEXSEADZeroOneSeComponent), 0x0010000000000005, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADZeroOneProperties());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable_Slot0, USQEXSEADZeroOneSeComponent);
				UProperty* NewProp_bEnable_Slot0 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnable_Slot0"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable_Slot0, USQEXSEADZeroOneSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bEnable_Slot0, USQEXSEADZeroOneSeComponent), sizeof(uint8), false);
				UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, USQEXSEADZeroOneSeComponent), 0x0010000000000015);
				UProperty* NewProp_AudioStartTiming = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioStartTiming"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AudioStartTiming, USQEXSEADZeroOneSeComponent), 0x0010000000000015, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADAudioStartTimings());
				UProperty* NewProp_OnStopSoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnStopSoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OnStopSoundAsset, USQEXSEADZeroOneSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_FadeOutTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutTime, USQEXSEADZeroOneSeComponent), 0x0010000000000015);
				UProperty* NewProp_FadeInTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInTime, USQEXSEADZeroOneSeComponent), 0x0010000000000015);
				UProperty* NewProp_SoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundAsset, USQEXSEADZeroOneSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_IsPlaying(), "IsPlaying"); // 305001849
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Play(), "Play"); // 832248813
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_SetZeroOneValue(), "SetZeroOneValue"); // 2112008791
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADZeroOneSeComponent_Stop(), "Stop"); // 956387003
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADZeroOneSeComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_MyAudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyAudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_ValiableValueThreshold_Slot1, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_ValiableValueThreshold_Slot1, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_ZeroOneFadeTime_Slot1, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_ZeroOneFadeTime_Slot1, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_PropertyType_Slot1, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_PropertyType_Slot1, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_bEnable_Slot1, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_bEnable_Slot1, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_ValiableValueThreshold_Slot0, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_ValiableValueThreshold_Slot0, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_ZeroOneFadeTime_Slot0, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_ZeroOneFadeTime_Slot0, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_PropertyType_Slot0, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_PropertyType_Slot0, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_bEnable_Slot0, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_bEnable_Slot0, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_AudioStartTiming, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_AudioStartTiming, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_OnStopSoundAsset, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_OnStopSoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_FadeOutTime, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_FadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_FadeInTime, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_FadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
				MetaData->SetValue(NewProp_SoundAsset, TEXT("Category"), TEXT("SQEXSEADZeroOneSeComponent"));
				MetaData->SetValue(NewProp_SoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADZeroOneSeComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADZeroOneSeComponent, 3063831199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADZeroOneSeComponent(Z_Construct_UClass_USQEXSEADZeroOneSeComponent, &USQEXSEADZeroOneSeComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADZeroOneSeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADZeroOneSeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
