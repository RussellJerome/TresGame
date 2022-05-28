// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADStatics() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_AudioVolumeCtrl_SetEnable();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADStatics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_AutoSeCtrl_SetEnable();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CallEvent();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_DebugMute();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_GetVolume();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Resume();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetPitch();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolume();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolumeWithLayer();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Stop();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Suspend();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_CreateBGMSlot();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_GetBGMSlotController();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_GetNumAudibleSoundsAtLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_GetPlayingBGMSlotController();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_IsPlayingBGM();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ReadySetPathBGM();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetAllBGM();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetAllCategoryTemporarySettings();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetEffectPreset();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetOverrideAttenuation();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM_OptionalFade();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetConfigCategoryVolume();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetConfigVolumeAllCategory();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetEffectPreset();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetEnableBGMAutoResume();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetExternalParameter();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetOverrideAttenuation();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetSEADAudioVolumeUpdateEnabled();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM_OptionalFade();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_StopAllCategorySounds();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM_OptionalFade();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADStatics_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADStatics::StaticRegisterNativesUSQEXSEADStatics()
	{
		UClass* Class = USQEXSEADStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AudioVolumeCtrl_SetEnable", (Native)&USQEXSEADStatics::execAudioVolumeCtrl_SetEnable },
			{ "AutoSeCtrl_SetEnable", (Native)&USQEXSEADStatics::execAutoSeCtrl_SetEnable },
			{ "CallEvent", (Native)&USQEXSEADStatics::execCallEvent },
			{ "CategoryCtrl_DebugMute", (Native)&USQEXSEADStatics::execCategoryCtrl_DebugMute },
			{ "CategoryCtrl_GetVolume", (Native)&USQEXSEADStatics::execCategoryCtrl_GetVolume },
			{ "CategoryCtrl_Resume", (Native)&USQEXSEADStatics::execCategoryCtrl_Resume },
			{ "CategoryCtrl_SetPitch", (Native)&USQEXSEADStatics::execCategoryCtrl_SetPitch },
			{ "CategoryCtrl_SetVolume", (Native)&USQEXSEADStatics::execCategoryCtrl_SetVolume },
			{ "CategoryCtrl_SetVolumeWithLayer", (Native)&USQEXSEADStatics::execCategoryCtrl_SetVolumeWithLayer },
			{ "CategoryCtrl_Stop", (Native)&USQEXSEADStatics::execCategoryCtrl_Stop },
			{ "CategoryCtrl_Suspend", (Native)&USQEXSEADStatics::execCategoryCtrl_Suspend },
			{ "CreateBGMSlot", (Native)&USQEXSEADStatics::execCreateBGMSlot },
			{ "GetBGMSlotController", (Native)&USQEXSEADStatics::execGetBGMSlotController },
			{ "GetNumAudibleSoundsAtLocation", (Native)&USQEXSEADStatics::execGetNumAudibleSoundsAtLocation },
			{ "GetPlayingBGMSlotController", (Native)&USQEXSEADStatics::execGetPlayingBGMSlotController },
			{ "IsPlayingBGM", (Native)&USQEXSEADStatics::execIsPlayingBGM },
			{ "ReadySetPathBGM", (Native)&USQEXSEADStatics::execReadySetPathBGM },
			{ "ResetAllBGM", (Native)&USQEXSEADStatics::execResetAllBGM },
			{ "ResetAllCategoryTemporarySettings", (Native)&USQEXSEADStatics::execResetAllCategoryTemporarySettings },
			{ "ResetEffectPreset", (Native)&USQEXSEADStatics::execResetEffectPreset },
			{ "ResetOverrideAttenuation", (Native)&USQEXSEADStatics::execResetOverrideAttenuation },
			{ "ResumeBGM", (Native)&USQEXSEADStatics::execResumeBGM },
			{ "ResumeBGM_OptionalFade", (Native)&USQEXSEADStatics::execResumeBGM_OptionalFade },
			{ "SetConfigCategoryVolume", (Native)&USQEXSEADStatics::execSetConfigCategoryVolume },
			{ "SetConfigVolumeAllCategory", (Native)&USQEXSEADStatics::execSetConfigVolumeAllCategory },
			{ "SetEffectPreset", (Native)&USQEXSEADStatics::execSetEffectPreset },
			{ "SetEnableBGMAutoResume", (Native)&USQEXSEADStatics::execSetEnableBGMAutoResume },
			{ "SetExternalParameter", (Native)&USQEXSEADStatics::execSetExternalParameter },
			{ "SetOverrideAttenuation", (Native)&USQEXSEADStatics::execSetOverrideAttenuation },
			{ "SetSEADAudioVolumeUpdateEnabled", (Native)&USQEXSEADStatics::execSetSEADAudioVolumeUpdateEnabled },
			{ "StopAllBGM", (Native)&USQEXSEADStatics::execStopAllBGM },
			{ "StopAllBGM_OptionalFade", (Native)&USQEXSEADStatics::execStopAllBGM_OptionalFade },
			{ "StopAllCategorySounds", (Native)&USQEXSEADStatics::execStopAllCategorySounds },
			{ "SuspendBGM", (Native)&USQEXSEADStatics::execSuspendBGM },
			{ "SuspendBGM_OptionalFade", (Native)&USQEXSEADStatics::execSuspendBGM_OptionalFade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_AudioVolumeCtrl_SetEnable()
	{
		struct SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms
		{
			UObject* WorldContextObject;
			FString AudioVolumeActorName;
			bool bEnable;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AudioVolumeCtrl_SetEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms), sizeof(bool), true);
			UProperty* NewProp_AudioVolumeActorName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AudioVolumeActorName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AudioVolumeActorName, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, SQEXSEADStatics_eventAudioVolumeCtrl_SetEnable_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
			MetaData->SetValue(NewProp_AudioVolumeActorName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_AutoSeCtrl_SetEnable()
	{
		struct SQEXSEADStatics_eventAutoSeCtrl_SetEnable_Parms
		{
			bool Enable;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AutoSeCtrl_SetEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventAutoSeCtrl_SetEnable_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Enable, SQEXSEADStatics_eventAutoSeCtrl_SetEnable_Parms);
			UProperty* NewProp_Enable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Enable, SQEXSEADStatics_eventAutoSeCtrl_SetEnable_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Enable, SQEXSEADStatics_eventAutoSeCtrl_SetEnable_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CallEvent()
	{
		struct SQEXSEADStatics_eventCallEvent_Parms
		{
			FName EventName;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CallEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCallEvent_Parms));
			UProperty* NewProp_EventName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(EventName, SQEXSEADStatics_eventCallEvent_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_DebugMute()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms
		{
			FName CategoryName;
			bool bToBeMuted;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_DebugMute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bToBeMuted, SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms);
			UProperty* NewProp_bToBeMuted = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bToBeMuted"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bToBeMuted, SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bToBeMuted, SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms), sizeof(bool), true);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_DebugMute_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_GetVolume()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_GetVolume_Parms
		{
			FName CategoryName;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_GetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_GetVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADStatics_eventCategoryCtrl_GetVolume_Parms), 0x0010000000000580);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_GetVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Resume()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_Resume_Parms
		{
			FName CategoryName;
			float FadeInTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_Resume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_Resume_Parms));
			UProperty* NewProp_FadeInTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInTime, SQEXSEADStatics_eventCategoryCtrl_Resume_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_Resume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetPitch()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_SetPitch_Parms
		{
			FName CategoryName;
			float Pitch;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_SetPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_SetPitch_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventCategoryCtrl_SetPitch_Parms), 0x0010000000000080);
			UProperty* NewProp_Pitch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Pitch, SQEXSEADStatics_eventCategoryCtrl_SetPitch_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_SetPitch_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolume()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_SetVolume_Parms
		{
			FName CategoryName;
			float Volume;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_SetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_SetVolume_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventCategoryCtrl_SetVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, SQEXSEADStatics_eventCategoryCtrl_SetVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_SetVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolumeWithLayer()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_SetVolumeWithLayer_Parms
		{
			FName CategoryName;
			int32 LayerIndex;
			float Volume;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_SetVolumeWithLayer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_SetVolumeWithLayer_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventCategoryCtrl_SetVolumeWithLayer_Parms), 0x0010000000000080);
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, SQEXSEADStatics_eventCategoryCtrl_SetVolumeWithLayer_Parms), 0x0010000000000080);
			UProperty* NewProp_LayerIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LayerIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LayerIndex, SQEXSEADStatics_eventCategoryCtrl_SetVolumeWithLayer_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_SetVolumeWithLayer_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Stop()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_Stop_Parms
		{
			FName CategoryName;
			float FadeOutTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_Stop_Parms));
			UProperty* NewProp_FadeOutTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutTime, SQEXSEADStatics_eventCategoryCtrl_Stop_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_Stop_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Suspend()
	{
		struct SQEXSEADStatics_eventCategoryCtrl_Suspend_Parms
		{
			FName CategoryName;
			float FadeOutTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CategoryCtrl_Suspend"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCategoryCtrl_Suspend_Parms));
			UProperty* NewProp_FadeOutTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutTime, SQEXSEADStatics_eventCategoryCtrl_Suspend_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventCategoryCtrl_Suspend_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_CreateBGMSlot()
	{
		struct SQEXSEADStatics_eventCreateBGMSlot_Parms
		{
			FName Name;
			FSQEXSEAD_BGMOptions Options;
			USQEXSEADBGMSlotController* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateBGMSlot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventCreateBGMSlot_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADStatics_eventCreateBGMSlot_Parms), 0x0010000000000580, Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister());
			UProperty* NewProp_Options = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Options"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Options, SQEXSEADStatics_eventCreateBGMSlot_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, SQEXSEADStatics_eventCreateBGMSlot_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_GetBGMSlotController()
	{
		struct SQEXSEADStatics_eventGetBGMSlotController_Parms
		{
			FName Name;
			USQEXSEADBGMSlotController* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBGMSlotController"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventGetBGMSlotController_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADStatics_eventGetBGMSlotController_Parms), 0x0010000000000580, Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, SQEXSEADStatics_eventGetBGMSlotController_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_GetNumAudibleSoundsAtLocation()
	{
		struct SQEXSEADStatics_eventGetNumAudibleSoundsAtLocation_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumAudibleSoundsAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(SQEXSEADStatics_eventGetNumAudibleSoundsAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADStatics_eventGetNumAudibleSoundsAtLocation_Parms), 0x0010000000000580);
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, SQEXSEADStatics_eventGetNumAudibleSoundsAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, SQEXSEADStatics_eventGetNumAudibleSoundsAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_GetPlayingBGMSlotController()
	{
		struct SQEXSEADStatics_eventGetPlayingBGMSlotController_Parms
		{
			USQEXSEADBGMSlotController* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPlayingBGMSlotController"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventGetPlayingBGMSlotController_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADStatics_eventGetPlayingBGMSlotController_Parms), 0x0010000000000580, Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_IsPlayingBGM()
	{
		struct SQEXSEADStatics_eventIsPlayingBGM_Parms
		{
			USoundBase* Sound;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlayingBGM"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventIsPlayingBGM_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SQEXSEADStatics_eventIsPlayingBGM_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SQEXSEADStatics_eventIsPlayingBGM_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SQEXSEADStatics_eventIsPlayingBGM_Parms), sizeof(bool), true);
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, SQEXSEADStatics_eventIsPlayingBGM_Parms), 0x0010000000000080, Z_Construct_UClass_USoundBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ReadySetPathBGM()
	{
		struct SQEXSEADStatics_eventReadySetPathBGM_Parms
		{
			FName Name;
			USoundBase* SoundReference;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadySetPathBGM"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventReadySetPathBGM_Parms));
			UProperty* NewProp_SoundReference = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SoundReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundReference, SQEXSEADStatics_eventReadySetPathBGM_Parms), 0x0010000000000080, Z_Construct_UClass_USoundBase_NoRegister());
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, SQEXSEADStatics_eventReadySetPathBGM_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetAllBGM()
	{
		struct SQEXSEADStatics_eventResetAllBGM_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetAllBGM"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventResetAllBGM_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventResetAllBGM_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetAllCategoryTemporarySettings()
	{
		struct SQEXSEADStatics_eventResetAllCategoryTemporarySettings_Parms
		{
			float resetFadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetAllCategoryTemporarySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventResetAllCategoryTemporarySettings_Parms));
			UProperty* NewProp_resetFadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("resetFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(resetFadeTime, SQEXSEADStatics_eventResetAllCategoryTemporarySettings_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetEffectPreset()
	{
		struct SQEXSEADStatics_eventResetEffectPreset_Parms
		{
			float resetFadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetEffectPreset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventResetEffectPreset_Parms));
			UProperty* NewProp_resetFadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("resetFadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(resetFadeTime, SQEXSEADStatics_eventResetEffectPreset_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResetOverrideAttenuation()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetOverrideAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResumeBGM"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM_OptionalFade()
	{
		struct SQEXSEADStatics_eventResumeBGM_OptionalFade_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResumeBGM_OptionalFade"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventResumeBGM_OptionalFade_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventResumeBGM_OptionalFade_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetConfigCategoryVolume()
	{
		struct SQEXSEADStatics_eventSetConfigCategoryVolume_Parms
		{
			FName CategoryName;
			float Volume;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetConfigCategoryVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetConfigCategoryVolume_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventSetConfigCategoryVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, SQEXSEADStatics_eventSetConfigCategoryVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, SQEXSEADStatics_eventSetConfigCategoryVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetConfigVolumeAllCategory()
	{
		struct SQEXSEADStatics_eventSetConfigVolumeAllCategory_Parms
		{
			float Volume;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetConfigVolumeAllCategory"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetConfigVolumeAllCategory_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventSetConfigVolumeAllCategory_Parms), 0x0010000000000080);
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, SQEXSEADStatics_eventSetConfigVolumeAllCategory_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetEffectPreset()
	{
		struct SQEXSEADStatics_eventSetEffectPreset_Parms
		{
			FName PresetName;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEffectPreset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetEffectPreset_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventSetEffectPreset_Parms), 0x0010000000000080);
			UProperty* NewProp_PresetName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PresetName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(PresetName, SQEXSEADStatics_eventSetEffectPreset_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetEnableBGMAutoResume()
	{
		struct SQEXSEADStatics_eventSetEnableBGMAutoResume_Parms
		{
			bool bIsEnabled;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEnableBGMAutoResume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetEnableBGMAutoResume_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsEnabled, SQEXSEADStatics_eventSetEnableBGMAutoResume_Parms);
			UProperty* NewProp_bIsEnabled = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsEnabled, SQEXSEADStatics_eventSetEnableBGMAutoResume_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bIsEnabled, SQEXSEADStatics_eventSetEnableBGMAutoResume_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetExternalParameter()
	{
		struct SQEXSEADStatics_eventSetExternalParameter_Parms
		{
			FName ParamName;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetExternalParameter"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetExternalParameter_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, SQEXSEADStatics_eventSetExternalParameter_Parms), 0x0010000000000080);
			UProperty* NewProp_ParamName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ParamName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ParamName, SQEXSEADStatics_eventSetExternalParameter_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetOverrideAttenuation()
	{
		struct SQEXSEADStatics_eventSetOverrideAttenuation_Parms
		{
			USoundAttenuation* OverrideAttenuation;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOverrideAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetOverrideAttenuation_Parms));
			UProperty* NewProp_OverrideAttenuation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverrideAttenuation"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverrideAttenuation, SQEXSEADStatics_eventSetOverrideAttenuation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAttenuation_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SetSEADAudioVolumeUpdateEnabled()
	{
		struct SQEXSEADStatics_eventSetSEADAudioVolumeUpdateEnabled_Parms
		{
			bool bEnabled;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSEADAudioVolumeUpdateEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSetSEADAudioVolumeUpdateEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnabled, SQEXSEADStatics_eventSetSEADAudioVolumeUpdateEnabled_Parms);
			UProperty* NewProp_bEnabled = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnabled, SQEXSEADStatics_eventSetSEADAudioVolumeUpdateEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnabled, SQEXSEADStatics_eventSetSEADAudioVolumeUpdateEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAllBGM"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM_OptionalFade()
	{
		struct SQEXSEADStatics_eventStopAllBGM_OptionalFade_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAllBGM_OptionalFade"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventStopAllBGM_OptionalFade_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventStopAllBGM_OptionalFade_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_StopAllCategorySounds()
	{
		struct SQEXSEADStatics_eventStopAllCategorySounds_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAllCategorySounds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventStopAllCategorySounds_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventStopAllCategorySounds_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SuspendBGM"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM_OptionalFade()
	{
		struct SQEXSEADStatics_eventSuspendBGM_OptionalFade_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SuspendBGM_OptionalFade"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SQEXSEADStatics_eventSuspendBGM_OptionalFade_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADStatics_eventSuspendBGM_OptionalFade_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQEXSEADStatics_NoRegister()
	{
		return USQEXSEADStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_AudioVolumeCtrl_SetEnable());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_AutoSeCtrl_SetEnable());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CallEvent());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_DebugMute());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_GetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Resume());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetPitch());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolumeWithLayer());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Suspend());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_CreateBGMSlot());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_GetBGMSlotController());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_GetNumAudibleSoundsAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_GetPlayingBGMSlotController());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_IsPlayingBGM());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ReadySetPathBGM());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ResetAllBGM());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ResetAllCategoryTemporarySettings());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ResetEffectPreset());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ResetOverrideAttenuation());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM_OptionalFade());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetConfigCategoryVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetConfigVolumeAllCategory());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetEffectPreset());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetEnableBGMAutoResume());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetExternalParameter());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetOverrideAttenuation());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SetSEADAudioVolumeUpdateEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM_OptionalFade());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_StopAllCategorySounds());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM_OptionalFade());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_AudioVolumeCtrl_SetEnable(), "AudioVolumeCtrl_SetEnable"); // 1999398500
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_AutoSeCtrl_SetEnable(), "AutoSeCtrl_SetEnable"); // 3660265785
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CallEvent(), "CallEvent"); // 1621007235
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_DebugMute(), "CategoryCtrl_DebugMute"); // 2112623929
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_GetVolume(), "CategoryCtrl_GetVolume"); // 986816318
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Resume(), "CategoryCtrl_Resume"); // 3034952378
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetPitch(), "CategoryCtrl_SetPitch"); // 1720269730
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolume(), "CategoryCtrl_SetVolume"); // 1361279809
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_SetVolumeWithLayer(), "CategoryCtrl_SetVolumeWithLayer"); // 2172008980
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Stop(), "CategoryCtrl_Stop"); // 2263132579
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CategoryCtrl_Suspend(), "CategoryCtrl_Suspend"); // 229297830
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_CreateBGMSlot(), "CreateBGMSlot"); // 3380384335
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_GetBGMSlotController(), "GetBGMSlotController"); // 4266361268
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_GetNumAudibleSoundsAtLocation(), "GetNumAudibleSoundsAtLocation"); // 609149095
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_GetPlayingBGMSlotController(), "GetPlayingBGMSlotController"); // 3745597925
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_IsPlayingBGM(), "IsPlayingBGM"); // 2781443458
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ReadySetPathBGM(), "ReadySetPathBGM"); // 3419003700
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ResetAllBGM(), "ResetAllBGM"); // 104215899
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ResetAllCategoryTemporarySettings(), "ResetAllCategoryTemporarySettings"); // 306771741
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ResetEffectPreset(), "ResetEffectPreset"); // 2931571308
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ResetOverrideAttenuation(), "ResetOverrideAttenuation"); // 898277857
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM(), "ResumeBGM"); // 3392700864
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_ResumeBGM_OptionalFade(), "ResumeBGM_OptionalFade"); // 2019094477
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetConfigCategoryVolume(), "SetConfigCategoryVolume"); // 1767873617
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetConfigVolumeAllCategory(), "SetConfigVolumeAllCategory"); // 83961789
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetEffectPreset(), "SetEffectPreset"); // 251538503
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetEnableBGMAutoResume(), "SetEnableBGMAutoResume"); // 3019360757
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetExternalParameter(), "SetExternalParameter"); // 880005149
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetOverrideAttenuation(), "SetOverrideAttenuation"); // 2831613109
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SetSEADAudioVolumeUpdateEnabled(), "SetSEADAudioVolumeUpdateEnabled"); // 3010766733
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM(), "StopAllBGM"); // 1460753637
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_StopAllBGM_OptionalFade(), "StopAllBGM_OptionalFade"); // 4194940836
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_StopAllCategorySounds(), "StopAllCategorySounds"); // 357093812
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM(), "SuspendBGM"); // 4252640293
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADStatics_SuspendBGM_OptionalFade(), "SuspendBGM_OptionalFade"); // 2622280395
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADStatics, 1927588688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADStatics(Z_Construct_UClass_USQEXSEADStatics, &USQEXSEADStatics::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
