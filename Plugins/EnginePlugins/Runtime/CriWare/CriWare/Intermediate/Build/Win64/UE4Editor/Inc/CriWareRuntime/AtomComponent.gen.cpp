// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_GetStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_IsPaused();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_Pause();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_Play();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevel();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetPitch();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetSelectorLabel();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetSound();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_SetVolume();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomComponent_Stop();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnAudioFinished__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void UAtomComponent::StaticRegisterNativesUAtomComponent()
	{
		UClass* Class = UAtomComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetStatus", (Native)&UAtomComponent::execGetStatus },
			{ "IsPaused", (Native)&UAtomComponent::execIsPaused },
			{ "IsPlaying", (Native)&UAtomComponent::execIsPlaying },
			{ "Pause", (Native)&UAtomComponent::execPause },
			{ "Play", (Native)&UAtomComponent::execPlay },
			{ "SetAisacByName", (Native)&UAtomComponent::execSetAisacByName },
			{ "SetBusSendLevel", (Native)&UAtomComponent::execSetBusSendLevel },
			{ "SetBusSendLevelOffset", (Native)&UAtomComponent::execSetBusSendLevelOffset },
			{ "SetNextBlockIndex", (Native)&UAtomComponent::execSetNextBlockIndex },
			{ "SetPitch", (Native)&UAtomComponent::execSetPitch },
			{ "SetPitchMultiplier", (Native)&UAtomComponent::execSetPitchMultiplier },
			{ "SetSelectorLabel", (Native)&UAtomComponent::execSetSelectorLabel },
			{ "SetSound", (Native)&UAtomComponent::execSetSound },
			{ "SetVolume", (Native)&UAtomComponent::execSetVolume },
			{ "Stop", (Native)&UAtomComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_GetStatus()
	{
		struct AtomComponent_eventGetStatus_Parms
		{
			EAtomComponentStatus ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventGetStatus_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, AtomComponent_eventGetStatus_Parms), 0x0010000000000580, Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPaused()
	{
		struct AtomComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventIsPaused_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AtomComponent_eventIsPaused_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AtomComponent_eventIsPaused_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AtomComponent_eventIsPaused_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying()
	{
		struct AtomComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventIsPlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AtomComponent_eventIsPlaying_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AtomComponent_eventIsPlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AtomComponent_eventIsPlaying_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_Pause()
	{
		struct AtomComponent_eventPause_Parms
		{
			bool bPause;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pause"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventPause_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPause, AtomComponent_eventPause_Parms);
			UProperty* NewProp_bPause = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bPause"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPause, AtomComponent_eventPause_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bPause, AtomComponent_eventPause_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_Play()
	{
		struct AtomComponent_eventPlay_Parms
		{
			float StartTime;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventPlay_Parms));
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, AtomComponent_eventPlay_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacByName()
	{
		struct AtomComponent_eventSetAisacByName_Parms
		{
			FString ControlName;
			float ControlValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAisacByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetAisacByName_Parms));
			UProperty* NewProp_ControlValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ControlValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ControlValue, AtomComponent_eventSetAisacByName_Parms), 0x0010000000000080);
			UProperty* NewProp_ControlName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ControlName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ControlName, AtomComponent_eventSetAisacByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
			MetaData->SetValue(NewProp_ControlName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevel()
	{
		struct AtomComponent_eventSetBusSendLevel_Parms
		{
			int32 BusId;
			float Level;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBusSendLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetBusSendLevel_Parms));
			UProperty* NewProp_Level = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Level"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Level, AtomComponent_eventSetBusSendLevel_Parms), 0x0010000000000080);
			UProperty* NewProp_BusId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BusId, AtomComponent_eventSetBusSendLevel_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset()
	{
		struct AtomComponent_eventSetBusSendLevelOffset_Parms
		{
			int32 BusId;
			float LevelOffset;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBusSendLevelOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetBusSendLevelOffset_Parms));
			UProperty* NewProp_LevelOffset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LevelOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LevelOffset, AtomComponent_eventSetBusSendLevelOffset_Parms), 0x0010000000000080);
			UProperty* NewProp_BusId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BusId, AtomComponent_eventSetBusSendLevelOffset_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex()
	{
		struct AtomComponent_eventSetNextBlockIndex_Parms
		{
			int32 BlockIndex;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetNextBlockIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetNextBlockIndex_Parms));
			UProperty* NewProp_BlockIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BlockIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BlockIndex, AtomComponent_eventSetNextBlockIndex_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitch()
	{
		struct AtomComponent_eventSetPitch_Parms
		{
			float Pitch;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetPitch_Parms));
			UProperty* NewProp_Pitch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Pitch, AtomComponent_eventSetPitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier()
	{
		struct AtomComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetPitchMultiplier_Parms));
			UProperty* NewProp_NewPitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewPitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NewPitchMultiplier, AtomComponent_eventSetPitchMultiplier_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSelectorLabel()
	{
		struct AtomComponent_eventSetSelectorLabel_Parms
		{
			FString Selector;
			FString label;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSelectorLabel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetSelectorLabel_Parms));
			UProperty* NewProp_label = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("label"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(label, AtomComponent_eventSetSelectorLabel_Parms), 0x0010000000000080);
			UProperty* NewProp_Selector = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Selector"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Selector, AtomComponent_eventSetSelectorLabel_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
			MetaData->SetValue(NewProp_label, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Selector, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSound()
	{
		struct AtomComponent_eventSetSound_Parms
		{
			USoundAtomCue* NewSound;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSound"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetSound_Parms));
			UProperty* NewProp_NewSound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NewSound, AtomComponent_eventSetSound_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAtomCue_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_SetVolume()
	{
		struct AtomComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomComponent_eventSetVolume_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, AtomComponent_eventSetVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_UAtomComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomComponent_NoRegister()
	{
		return UAtomComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_GetStatus());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_IsPaused());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_IsPlaying());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_Pause());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetAisacByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetPitch());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetSound());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_SetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomComponent_Stop());

				UProperty* NewProp_AttenuationOverrides = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationOverrides"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AttenuationOverrides, UAtomComponent), 0x0010000000000005, Z_Construct_UScriptStruct_FSoundAttenuationSettings());
				UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, UAtomComponent), 0x0010000000000005, Z_Construct_UClass_USoundAttenuation_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAttenuation, UAtomComponent);
				UProperty* NewProp_bOverrideAttenuation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAttenuation, UAtomComponent), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bOverrideAttenuation, UAtomComponent), sizeof(uint8), false);
				UProperty* NewProp_OnAudioFinished = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnAudioFinished"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnAudioFinished, UAtomComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature());
				UProperty* NewProp_DefaultSelectorLabel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSelectorLabel"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DefaultSelectorLabel, UAtomComponent), 0x0010000000000001);
				UProperty* NewProp_DefaultSelectorLabel_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DefaultSelectorLabel, TEXT("DefaultSelectorLabel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAtomSelectorParam());
				UProperty* NewProp_DefaultAisacControl = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultAisacControl"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DefaultAisacControl, UAtomComponent), 0x0010000000000001);
				UProperty* NewProp_DefaultAisacControl_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DefaultAisacControl, TEXT("DefaultAisacControl"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAtomAisacControlParam());
				UProperty* NewProp_DefaultBlockIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultBlockIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DefaultBlockIndex, UAtomComponent), 0x0010000000000001);
				UProperty* NewProp_DefaultSoundObject = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSoundObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DefaultSoundObject, UAtomComponent), 0x0010000000000001, Z_Construct_UClass_UAtomSoundObject_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableMultipleSoundPlayback, UAtomComponent);
				UProperty* NewProp_bEnableMultipleSoundPlayback = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableMultipleSoundPlayback"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableMultipleSoundPlayback, UAtomComponent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableMultipleSoundPlayback, UAtomComponent), sizeof(bool), true);
				UProperty* NewProp_DefaultVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultVolume, UAtomComponent), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsUISound, UAtomComponent);
				UProperty* NewProp_bIsUISound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsUISound"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsUISound, UAtomComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bIsUISound, UAtomComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenOwnerDestroyed, UAtomComponent);
				UProperty* NewProp_bStopWhenOwnerDestroyed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStopWhenOwnerDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenOwnerDestroyed, UAtomComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bStopWhenOwnerDestroyed, UAtomComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAutoDestroy, UAtomComponent);
				UProperty* NewProp_bAutoDestroy = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAutoDestroy"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAutoDestroy, UAtomComponent), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bAutoDestroy, UAtomComponent), sizeof(uint8), false);
				UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, UAtomComponent), 0x0010000000000015, Z_Construct_UClass_USoundAtomCue_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_GetStatus(), "GetStatus"); // 1642899910
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_IsPaused(), "IsPaused"); // 2507135500
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_IsPlaying(), "IsPlaying"); // 84430229
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature(), "OnAudioFinished__DelegateSignature"); // 2089506927
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_Pause(), "Pause"); // 4207004649
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_Play(), "Play"); // 2540159954
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetAisacByName(), "SetAisacByName"); // 314226498
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel(), "SetBusSendLevel"); // 1939145153
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset(), "SetBusSendLevelOffset"); // 1270625441
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex(), "SetNextBlockIndex"); // 180305887
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetPitch(), "SetPitch"); // 3045449121
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier(), "SetPitchMultiplier"); // 50763285
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel(), "SetSelectorLabel"); // 1374374208
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetSound(), "SetSound"); // 4156700711
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_SetVolume(), "SetVolume"); // 3160142135
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomComponent_Stop(), "Stop"); // 3377488802
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_AttenuationOverrides, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_AttenuationSettings, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_bOverrideAttenuation, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_OnAudioFinished, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_DefaultSelectorLabel, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_DefaultSelectorLabel, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_DefaultAisacControl, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_DefaultAisacControl, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_DefaultBlockIndex, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_DefaultBlockIndex, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_DefaultSoundObject, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_DefaultSoundObject, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_bEnableMultipleSoundPlayback, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_bEnableMultipleSoundPlayback, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_DefaultVolume, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_DefaultVolume, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_bIsUISound, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_bStopWhenOwnerDestroyed, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_bAutoDestroy, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
				MetaData->SetValue(NewProp_Sound, TEXT("Category"), TEXT("AtomComponent"));
				MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/AtomComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomComponent, 290484495);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomComponent(Z_Construct_UClass_UAtomComponent, &UAtomComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
