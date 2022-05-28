// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADBGMSlotController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADBGMSlotController() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetJustTiming();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlotController();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_Timing();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetModeIndex();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetMusicalTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNearTiming();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNextSectionIndex();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetSectionIndex();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetTempo();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_IsPlaying();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_IsSuspended();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Play();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Ready();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Reset();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_ResetToDefaultOptions();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Set();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetDefaultOptions();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetMode();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetModeByName();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetOptions();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPath();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPlayFadeInTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPriority();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetRestoreAfterFinish();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetResumeFadeInTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSection();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSeekTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSilent();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStaySuspendTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStopFadeOutTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStoreBehaviour();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStoreBehaviour();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendFadeOutTime();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendSilent();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetVolume();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Stop();
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Unreference();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister();
// End Cross Module References
	void USQEXSEADBGMSlotController::StaticRegisterNativesUSQEXSEADBGMSlotController()
	{
		UClass* Class = USQEXSEADBGMSlotController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetJustTiming", (Native)&USQEXSEADBGMSlotController::execGetJustTiming },
			{ "GetModeIndex", (Native)&USQEXSEADBGMSlotController::execGetModeIndex },
			{ "GetMusicalTime", (Native)&USQEXSEADBGMSlotController::execGetMusicalTime },
			{ "GetNearTiming", (Native)&USQEXSEADBGMSlotController::execGetNearTiming },
			{ "GetNextSectionIndex", (Native)&USQEXSEADBGMSlotController::execGetNextSectionIndex },
			{ "GetSectionIndex", (Native)&USQEXSEADBGMSlotController::execGetSectionIndex },
			{ "GetTempo", (Native)&USQEXSEADBGMSlotController::execGetTempo },
			{ "IsPlaying", (Native)&USQEXSEADBGMSlotController::execIsPlaying },
			{ "IsSuspended", (Native)&USQEXSEADBGMSlotController::execIsSuspended },
			{ "Play", (Native)&USQEXSEADBGMSlotController::execPlay },
			{ "Ready", (Native)&USQEXSEADBGMSlotController::execReady },
			{ "Reset", (Native)&USQEXSEADBGMSlotController::execReset },
			{ "ResetToDefaultOptions", (Native)&USQEXSEADBGMSlotController::execResetToDefaultOptions },
			{ "Set", (Native)&USQEXSEADBGMSlotController::execSet },
			{ "SetDefaultOptions", (Native)&USQEXSEADBGMSlotController::execSetDefaultOptions },
			{ "SetMode", (Native)&USQEXSEADBGMSlotController::execSetMode },
			{ "SetModeByName", (Native)&USQEXSEADBGMSlotController::execSetModeByName },
			{ "SetOptions", (Native)&USQEXSEADBGMSlotController::execSetOptions },
			{ "SetPath", (Native)&USQEXSEADBGMSlotController::execSetPath },
			{ "SetPlayFadeInTime", (Native)&USQEXSEADBGMSlotController::execSetPlayFadeInTime },
			{ "SetPriority", (Native)&USQEXSEADBGMSlotController::execSetPriority },
			{ "SetRestoreAfterFinish", (Native)&USQEXSEADBGMSlotController::execSetRestoreAfterFinish },
			{ "SetResumeFadeInTime", (Native)&USQEXSEADBGMSlotController::execSetResumeFadeInTime },
			{ "SetSection", (Native)&USQEXSEADBGMSlotController::execSetSection },
			{ "SetSeekTime", (Native)&USQEXSEADBGMSlotController::execSetSeekTime },
			{ "SetSilent", (Native)&USQEXSEADBGMSlotController::execSetSilent },
			{ "SetStaySuspendTime", (Native)&USQEXSEADBGMSlotController::execSetStaySuspendTime },
			{ "SetStopFadeOutTime", (Native)&USQEXSEADBGMSlotController::execSetStopFadeOutTime },
			{ "SetStoreBehaviour", (Native)&USQEXSEADBGMSlotController::execSetStoreBehaviour },
			{ "SetSuspendFadeOutTime", (Native)&USQEXSEADBGMSlotController::execSetSuspendFadeOutTime },
			{ "SetSuspendSilent", (Native)&USQEXSEADBGMSlotController::execSetSuspendSilent },
			{ "SetVolume", (Native)&USQEXSEADBGMSlotController::execSetVolume },
			{ "Stop", (Native)&USQEXSEADBGMSlotController::execStop },
			{ "Unreference", (Native)&USQEXSEADBGMSlotController::execUnreference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetJustTiming()
	{
		struct SQEXSEADBGMSlotController_eventGetJustTiming_Parms
		{
			FSQEXSEAD_Timing ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetJustTiming"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetJustTiming_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetJustTiming_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FSQEXSEAD_Timing());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetModeIndex()
	{
		struct SQEXSEADBGMSlotController_eventGetModeIndex_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetModeIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetModeIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetModeIndex_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetMusicalTime()
	{
		struct SQEXSEADBGMSlotController_eventGetMusicalTime_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMusicalTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetMusicalTime_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetMusicalTime_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNearTiming()
	{
		struct SQEXSEADBGMSlotController_eventGetNearTiming_Parms
		{
			FSQEXSEAD_Timing ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNearTiming"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetNearTiming_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetNearTiming_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FSQEXSEAD_Timing());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNextSectionIndex()
	{
		struct SQEXSEADBGMSlotController_eventGetNextSectionIndex_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNextSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetNextSectionIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetNextSectionIndex_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetSectionIndex()
	{
		struct SQEXSEADBGMSlotController_eventGetSectionIndex_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSectionIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetSectionIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetSectionIndex_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_GetTempo()
	{
		struct SQEXSEADBGMSlotController_eventGetTempo_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetTempo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventGetTempo_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, SQEXSEADBGMSlotController_eventGetTempo_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_IsPlaying()
	{
		struct SQEXSEADBGMSlotController_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPlaying"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventIsPlaying_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SQEXSEADBGMSlotController_eventIsPlaying_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SQEXSEADBGMSlotController_eventIsPlaying_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SQEXSEADBGMSlotController_eventIsPlaying_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_IsSuspended()
	{
		struct SQEXSEADBGMSlotController_eventIsSuspended_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsSuspended"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventIsSuspended_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, SQEXSEADBGMSlotController_eventIsSuspended_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, SQEXSEADBGMSlotController_eventIsSuspended_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, SQEXSEADBGMSlotController_eventIsSuspended_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Play()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Play"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Ready()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Ready"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Reset()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Reset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_ResetToDefaultOptions()
	{
		struct SQEXSEADBGMSlotController_eventResetToDefaultOptions_Parms
		{
			FSQEXSEAD_BGMOptions NewOptions;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ResetToDefaultOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventResetToDefaultOptions_Parms));
			UProperty* NewProp_NewOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewOptions, SQEXSEADBGMSlotController_eventResetToDefaultOptions_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Set()
	{
		struct SQEXSEADBGMSlotController_eventSet_Parms
		{
			USoundBase* Sound;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Set"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSet_Parms));
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, SQEXSEADBGMSlotController_eventSet_Parms), 0x0010000000000080, Z_Construct_UClass_USoundBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetDefaultOptions()
	{
		struct SQEXSEADBGMSlotController_eventSetDefaultOptions_Parms
		{
			FSQEXSEAD_BGMOptions NewOptions;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetDefaultOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetDefaultOptions_Parms));
			UProperty* NewProp_NewOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewOptions, SQEXSEADBGMSlotController_eventSetDefaultOptions_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetMode()
	{
		struct SQEXSEADBGMSlotController_eventSetMode_Parms
		{
			int32 Index;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetMode_Parms));
			UProperty* NewProp_Index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Index"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Index, SQEXSEADBGMSlotController_eventSetMode_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetModeByName()
	{
		struct SQEXSEADBGMSlotController_eventSetModeByName_Parms
		{
			FName Name;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetModeByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetModeByName_Parms));
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Name, SQEXSEADBGMSlotController_eventSetModeByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetOptions()
	{
		struct SQEXSEADBGMSlotController_eventSetOptions_Parms
		{
			FSQEXSEAD_BGMOptions NewOptions;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetOptions_Parms));
			UProperty* NewProp_NewOptions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewOptions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewOptions, SQEXSEADBGMSlotController_eventSetOptions_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPath()
	{
		struct SQEXSEADBGMSlotController_eventSetPath_Parms
		{
			USoundBase* SoundReference;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetPath_Parms));
			UProperty* NewProp_SoundReference = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SoundReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundReference, SQEXSEADBGMSlotController_eventSetPath_Parms), 0x0010000000000080, Z_Construct_UClass_USoundBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPlayFadeInTime()
	{
		struct SQEXSEADBGMSlotController_eventSetPlayFadeInTime_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPlayFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetPlayFadeInTime_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADBGMSlotController_eventSetPlayFadeInTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPriority()
	{
		struct SQEXSEADBGMSlotController_eventSetPriority_Parms
		{
			int32 Priority;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetPriority_Parms));
			UProperty* NewProp_Priority = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Priority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Priority, SQEXSEADBGMSlotController_eventSetPriority_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetRestoreAfterFinish()
	{
		struct SQEXSEADBGMSlotController_eventSetRestoreAfterFinish_Parms
		{
			bool bRestoreAfterFinish;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRestoreAfterFinish"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetRestoreAfterFinish_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRestoreAfterFinish, SQEXSEADBGMSlotController_eventSetRestoreAfterFinish_Parms);
			UProperty* NewProp_bRestoreAfterFinish = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bRestoreAfterFinish"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRestoreAfterFinish, SQEXSEADBGMSlotController_eventSetRestoreAfterFinish_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bRestoreAfterFinish, SQEXSEADBGMSlotController_eventSetRestoreAfterFinish_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetResumeFadeInTime()
	{
		struct SQEXSEADBGMSlotController_eventSetResumeFadeInTime_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetResumeFadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetResumeFadeInTime_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADBGMSlotController_eventSetResumeFadeInTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSection()
	{
		struct SQEXSEADBGMSlotController_eventSetSection_Parms
		{
			int32 Index;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetSection_Parms));
			UProperty* NewProp_Index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Index"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Index, SQEXSEADBGMSlotController_eventSetSection_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSeekTime()
	{
		struct SQEXSEADBGMSlotController_eventSetSeekTime_Parms
		{
			float SeekTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSeekTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetSeekTime_Parms));
			UProperty* NewProp_SeekTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SeekTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SeekTime, SQEXSEADBGMSlotController_eventSetSeekTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSilent()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSilent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStaySuspendTime()
	{
		struct SQEXSEADBGMSlotController_eventSetStaySuspendTime_Parms
		{
			float StaySuspendTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStaySuspendTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetStaySuspendTime_Parms));
			UProperty* NewProp_StaySuspendTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StaySuspendTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StaySuspendTime, SQEXSEADBGMSlotController_eventSetStaySuspendTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStopFadeOutTime()
	{
		struct SQEXSEADBGMSlotController_eventSetStopFadeOutTime_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStopFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetStopFadeOutTime_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADBGMSlotController_eventSetStopFadeOutTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStoreBehaviour()
	{
		struct SQEXSEADBGMSlotController_eventSetStoreBehaviour_Parms
		{
			ESQEXSEAD_BGMStoreBehaviour StoreBehaviour;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStoreBehaviour"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetStoreBehaviour_Parms));
			UProperty* NewProp_StoreBehaviour = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StoreBehaviour"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(StoreBehaviour, SQEXSEADBGMSlotController_eventSetStoreBehaviour_Parms), 0x0010000000000080, Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMStoreBehaviour());
			UProperty* NewProp_StoreBehaviour_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_StoreBehaviour, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendFadeOutTime()
	{
		struct SQEXSEADBGMSlotController_eventSetSuspendFadeOutTime_Parms
		{
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSuspendFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetSuspendFadeOutTime_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADBGMSlotController_eventSetSuspendFadeOutTime_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendSilent()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSuspendSilent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_SetVolume()
	{
		struct SQEXSEADBGMSlotController_eventSetVolume_Parms
		{
			float Volume;
			float FadeTime;
		};
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SQEXSEADBGMSlotController_eventSetVolume_Parms));
			UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, SQEXSEADBGMSlotController_eventSetVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, SQEXSEADBGMSlotController_eventSetVolume_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Stop()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USQEXSEADBGMSlotController_Unreference()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADBGMSlotController();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Unreference"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister()
	{
		return USQEXSEADBGMSlotController::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADBGMSlotController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADBGMSlotController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetJustTiming());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetModeIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetMusicalTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNearTiming());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNextSectionIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetSectionIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetTempo());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_IsPlaying());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_IsSuspended());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_Play());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_Ready());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_Reset());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_ResetToDefaultOptions());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_Set());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetDefaultOptions());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetMode());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetModeByName());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetOptions());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPath());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPlayFadeInTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPriority());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetRestoreAfterFinish());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetResumeFadeInTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSection());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSeekTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSilent());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStaySuspendTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStopFadeOutTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStoreBehaviour());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendFadeOutTime());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendSilent());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADBGMSlotController_Unreference());

				UProperty* NewProp_Slot_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Slot_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Slot_, USQEXSEADBGMSlotController), 0x0040000000002000, Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetJustTiming(), "GetJustTiming"); // 991920392
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetModeIndex(), "GetModeIndex"); // 3378324367
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetMusicalTime(), "GetMusicalTime"); // 3959202560
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNearTiming(), "GetNearTiming"); // 1428778897
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetNextSectionIndex(), "GetNextSectionIndex"); // 2132041787
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetSectionIndex(), "GetSectionIndex"); // 3708082991
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_GetTempo(), "GetTempo"); // 4128549638
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_IsPlaying(), "IsPlaying"); // 916071013
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_IsSuspended(), "IsSuspended"); // 1231648600
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_Play(), "Play"); // 517886973
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_Ready(), "Ready"); // 2884768001
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_Reset(), "Reset"); // 377040137
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_ResetToDefaultOptions(), "ResetToDefaultOptions"); // 175084843
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_Set(), "Set"); // 3320776686
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetDefaultOptions(), "SetDefaultOptions"); // 1229143550
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetMode(), "SetMode"); // 1814656309
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetModeByName(), "SetModeByName"); // 3677180399
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetOptions(), "SetOptions"); // 318755993
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPath(), "SetPath"); // 2882200794
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPlayFadeInTime(), "SetPlayFadeInTime"); // 1810644959
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetPriority(), "SetPriority"); // 1113335970
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetRestoreAfterFinish(), "SetRestoreAfterFinish"); // 718080855
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetResumeFadeInTime(), "SetResumeFadeInTime"); // 1559043526
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSection(), "SetSection"); // 3551539142
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSeekTime(), "SetSeekTime"); // 1539920441
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSilent(), "SetSilent"); // 2629716973
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStaySuspendTime(), "SetStaySuspendTime"); // 4293906582
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStopFadeOutTime(), "SetStopFadeOutTime"); // 2833748879
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetStoreBehaviour(), "SetStoreBehaviour"); // 838336644
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendFadeOutTime(), "SetSuspendFadeOutTime"); // 1043574672
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetSuspendSilent(), "SetSuspendSilent"); // 110619269
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_SetVolume(), "SetVolume"); // 2144571320
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_Stop(), "Stop"); // 2902181582
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADBGMSlotController_Unreference(), "Unreference"); // 3804739103
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADBGMSlotController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADBGMSlotController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
				MetaData->SetValue(NewProp_Slot_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlotController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADBGMSlotController, 740237972);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADBGMSlotController(Z_Construct_UClass_USQEXSEADBGMSlotController, &USQEXSEADBGMSlotController::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADBGMSlotController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADBGMSlotController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
