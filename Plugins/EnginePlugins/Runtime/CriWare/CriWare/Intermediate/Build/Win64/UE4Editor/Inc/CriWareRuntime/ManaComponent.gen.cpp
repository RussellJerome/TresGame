// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_EnableSubtitles();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetFrameNumber();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetTime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_GetVolume();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_IsPaused();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Pause();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Play();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Prepare();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_ResetCachedData();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SeekToPosition();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetCachedData();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetTexture();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_SetVolume();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_Stop();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature()
	{
		struct ManaComponent_eventOnEventPoint_Parms
		{
			FManaEventPointInfo EventPointInfo;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnEventPoint__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535, sizeof(ManaComponent_eventOnEventPoint_Parms));
			UProperty* NewProp_EventPointInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EventPointInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EventPointInfo, ManaComponent_eventOnEventPoint_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FManaEventPointInfo());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature()
	{
		struct ManaComponent_eventOnSubtitleChanged_Parms
		{
			FText Subtitle;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnSubtitleChanged__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(ManaComponent_eventOnSubtitleChanged_Parms));
			UProperty* NewProp_Subtitle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Subtitle"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(Subtitle, ManaComponent_eventOnSubtitleChanged_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void UManaComponent::StaticRegisterNativesUManaComponent()
	{
		UClass* Class = UManaComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeSubtitlesChannel", (Native)&UManaComponent::execChangeSubtitlesChannel },
			{ "EnableSubtitles", (Native)&UManaComponent::execEnableSubtitles },
			{ "GetFrameNumber", (Native)&UManaComponent::execGetFrameNumber },
			{ "GetStatus", (Native)&UManaComponent::execGetStatus },
			{ "GetTexture", (Native)&UManaComponent::execGetTexture },
			{ "GetTime", (Native)&UManaComponent::execGetTime },
			{ "GetVolume", (Native)&UManaComponent::execGetVolume },
			{ "IsPaused", (Native)&UManaComponent::execIsPaused },
			{ "Pause", (Native)&UManaComponent::execPause },
			{ "Play", (Native)&UManaComponent::execPlay },
			{ "Prepare", (Native)&UManaComponent::execPrepare },
			{ "ResetCachedData", (Native)&UManaComponent::execResetCachedData },
			{ "SeekToPosition", (Native)&UManaComponent::execSeekToPosition },
			{ "SetCachedData", (Native)&UManaComponent::execSetCachedData },
			{ "SetTexture", (Native)&UManaComponent::execSetTexture },
			{ "SetVolume", (Native)&UManaComponent::execSetVolume },
			{ "Stop", (Native)&UManaComponent::execStop },
			{ "StopAndWaitCompletion", (Native)&UManaComponent::execStopAndWaitCompletion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel()
	{
		struct ManaComponent_eventChangeSubtitlesChannel_Parms
		{
			int32 Channel;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeSubtitlesChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventChangeSubtitlesChannel_Parms));
			UProperty* NewProp_Channel = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Channel"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Channel, ManaComponent_eventChangeSubtitlesChannel_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_EnableSubtitles()
	{
		struct ManaComponent_eventEnableSubtitles_Parms
		{
			bool bEnable;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnableSubtitles"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventEnableSubtitles_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, ManaComponent_eventEnableSubtitles_Parms);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, ManaComponent_eventEnableSubtitles_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, ManaComponent_eventEnableSubtitles_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetFrameNumber()
	{
		struct ManaComponent_eventGetFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFrameNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventGetFrameNumber_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, ManaComponent_eventGetFrameNumber_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetStatus()
	{
		struct ManaComponent_eventGetStatus_Parms
		{
			EManaComponentStatus ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventGetStatus_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, ManaComponent_eventGetStatus_Parms), 0x0010000000000580, Z_Construct_UEnum_CriWareRuntime_EManaComponentStatus());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetTexture()
	{
		struct ManaComponent_eventGetTexture_Parms
		{
			UTexture* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventGetTexture_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, ManaComponent_eventGetTexture_Parms), 0x0010000000000580, Z_Construct_UClass_UTexture_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetTime()
	{
		struct ManaComponent_eventGetTime_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventGetTime_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, ManaComponent_eventGetTime_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_GetVolume()
	{
		struct ManaComponent_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventGetVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, ManaComponent_eventGetVolume_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_IsPaused()
	{
		struct ManaComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPaused"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventIsPaused_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ManaComponent_eventIsPaused_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ManaComponent_eventIsPaused_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ManaComponent_eventIsPaused_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Pause()
	{
		struct ManaComponent_eventPause_Parms
		{
			bool bPause;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pause"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventPause_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPause, ManaComponent_eventPause_Parms);
			UProperty* NewProp_bPause = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bPause"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPause, ManaComponent_eventPause_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bPause, ManaComponent_eventPause_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Play()
	{
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Prepare()
	{
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Prepare"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_ResetCachedData()
	{
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetCachedData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SeekToPosition()
	{
		struct ManaComponent_eventSeekToPosition_Parms
		{
			int32 FrameNumber;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SeekToPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventSeekToPosition_Parms));
			UProperty* NewProp_FrameNumber = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FrameNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FrameNumber, ManaComponent_eventSeekToPosition_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetCachedData()
	{
		struct ManaComponent_eventSetCachedData_Parms
		{
			TArray<uint8> DataArray;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCachedData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(ManaComponent_eventSetCachedData_Parms));
			UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, ManaComponent_eventSetCachedData_Parms), 0x0010000008000182);
			UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
			MetaData->SetValue(NewProp_DataArray, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetTexture()
	{
		struct ManaComponent_eventSetTexture_Parms
		{
			UManaTexture* Texture;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventSetTexture_Parms));
			UProperty* NewProp_Texture = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Texture"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Texture, ManaComponent_eventSetTexture_Parms), 0x0010000000000080, Z_Construct_UClass_UManaTexture_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_SetVolume()
	{
		struct ManaComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ManaComponent_eventSetVolume_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, ManaComponent_eventSetVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion()
	{
		UObject* Outer = Z_Construct_UClass_UManaComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopAndWaitCompletion"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManaComponent_NoRegister()
	{
		return UManaComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UManaComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_EnableSubtitles());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_GetFrameNumber());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_GetStatus());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_GetTexture());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_GetTime());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_GetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_IsPaused());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_Pause());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_Prepare());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_ResetCachedData());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_SeekToPosition());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_SetCachedData());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_SetTexture());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_SetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion());

				UProperty* NewProp_OnSubtitleChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSubtitleChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSubtitleChanged, UManaComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature());
				UProperty* NewProp_SubtitlesEncoding = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubtitlesEncoding"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(SubtitlesEncoding, UManaComponent), 0x0010000000010015, Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding());
				UProperty* NewProp_SubtitlesEncoding_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_SubtitlesEncoding, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_SubtitlesChannel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SubtitlesChannel"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SubtitlesChannel, UManaComponent), 0x0010000000010015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSubtitlesEnabled, UManaComponent);
				UProperty* NewProp_bSubtitlesEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSubtitlesEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSubtitlesEnabled, UManaComponent), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bSubtitlesEnabled, UManaComponent), sizeof(bool), true);
				UProperty* NewProp_OnEventPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnEventPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(OnEventPoint, UManaComponent), 0x0010000000080004, Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLoop, UManaComponent);
				UProperty* NewProp_bLoop = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLoop"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLoop, UManaComponent), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bLoop, UManaComponent), sizeof(bool), true);
				UProperty* NewProp_Movie = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Movie"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Movie, UManaComponent), 0x0010000000000015, Z_Construct_UClass_UManaTexture_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_ChangeSubtitlesChannel(), "ChangeSubtitlesChannel"); // 758207268
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_EnableSubtitles(), "EnableSubtitles"); // 931519584
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_GetFrameNumber(), "GetFrameNumber"); // 3980854148
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_GetStatus(), "GetStatus"); // 2867008443
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_GetTexture(), "GetTexture"); // 4181304887
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_GetTime(), "GetTime"); // 1581311984
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_GetVolume(), "GetVolume"); // 1477267932
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_IsPaused(), "IsPaused"); // 1328205521
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UManaComponent_OnEventPoint__DelegateSignature(), "OnEventPoint__DelegateSignature"); // 2733252469
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UManaComponent_OnSubtitleChanged__DelegateSignature(), "OnSubtitleChanged__DelegateSignature"); // 1090639901
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_Pause(), "Pause"); // 506727687
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_Play(), "Play"); // 211555663
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_Prepare(), "Prepare"); // 364035971
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_ResetCachedData(), "ResetCachedData"); // 3191420325
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_SeekToPosition(), "SeekToPosition"); // 1482546992
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_SetCachedData(), "SetCachedData"); // 1427844205
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_SetTexture(), "SetTexture"); // 953829375
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_SetVolume(), "SetVolume"); // 2635098587
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_Stop(), "Stop"); // 1354074050
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UManaComponent_StopAndWaitCompletion(), "StopAndWaitCompletion"); // 4070971984
				static TCppClassTypeInfo<TCppClassTypeTraits<UManaComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ManaComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_OnSubtitleChanged, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_SubtitlesEncoding, TEXT("Category"), TEXT("ManaComponent"));
				MetaData->SetValue(NewProp_SubtitlesEncoding, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_SubtitlesChannel, TEXT("Category"), TEXT("ManaComponent"));
				MetaData->SetValue(NewProp_SubtitlesChannel, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_bSubtitlesEnabled, TEXT("Category"), TEXT("ManaComponent"));
				MetaData->SetValue(NewProp_bSubtitlesEnabled, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_OnEventPoint, TEXT("Category"), TEXT("ManaComponent"));
				MetaData->SetValue(NewProp_OnEventPoint, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_bLoop, TEXT("Category"), TEXT("ManaComponent"));
				MetaData->SetValue(NewProp_bLoop, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
				MetaData->SetValue(NewProp_Movie, TEXT("Category"), TEXT("ManaComponent"));
				MetaData->SetValue(NewProp_Movie, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaComponent, 3331193549);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaComponent(Z_Construct_UClass_UManaComponent, &UManaComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
