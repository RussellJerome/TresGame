// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomStatics.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomStatics() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_PauseAudioOutput();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAttached();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomStatics_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomStatics::StaticRegisterNativesUAtomStatics()
	{
		UClass* Class = UAtomStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "PauseAudioOutput", (Native)&UAtomStatics::execPauseAudioOutput },
			{ "PlaySoundAtLocation", (Native)&UAtomStatics::execPlaySoundAtLocation },
			{ "PlaySoundAttached", (Native)&UAtomStatics::execPlaySoundAttached },
			{ "SpawnSoundAtLocation", (Native)&UAtomStatics::execSpawnSoundAtLocation },
			{ "SpawnSoundAttached", (Native)&UAtomStatics::execSpawnSoundAttached },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_PauseAudioOutput()
	{
		struct AtomStatics_eventPauseAudioOutput_Parms
		{
			bool bPause;
		};
		UObject* Outer = Z_Construct_UClass_UAtomStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PauseAudioOutput"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomStatics_eventPauseAudioOutput_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPause, AtomStatics_eventPauseAudioOutput_Parms);
			UProperty* NewProp_bPause = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bPause"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPause, AtomStatics_eventPauseAudioOutput_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bPause, AtomStatics_eventPauseAudioOutput_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation()
	{
		struct AtomStatics_eventPlaySoundAtLocation_Parms
		{
			UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
		};
		UObject* Outer = Z_Construct_UClass_UAtomStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlaySoundAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(AtomStatics_eventPlaySoundAtLocation_Parms));
			UProperty* NewProp_ConcurrencySettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConcurrencySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ConcurrencySettings, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundConcurrency_NoRegister());
			UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAttenuation_NoRegister());
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAtomCue_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AtomStatics_eventPlaySoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomStatics.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_PlaySoundAttached()
	{
		struct AtomStatics_eventPlaySoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			UAtomComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PlaySoundAttached"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(AtomStatics_eventPlaySoundAttached_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000080588, Z_Construct_UClass_UAtomComponent_NoRegister());
			UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAttenuation_NoRegister());
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AtomStatics_eventPlaySoundAttached_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AtomStatics_eventPlaySoundAttached_Parms), sizeof(bool), true);
			UProperty* NewProp_LocationType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocationType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocationType, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EAttachLocation());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_AttachToComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachToComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachToComponent, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, AtomStatics_eventPlaySoundAttached_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAtomCue_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomStatics.h"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AttachToComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation()
	{
		struct AtomStatics_eventSpawnSoundAtLocation_Parms
		{
			const UObject* WorldContextObject;
			USoundAtomCue* Sound;
			FVector Location;
			FRotator Rotation;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			UAtomComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnSoundAtLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(AtomStatics_eventSpawnSoundAtLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000080588, Z_Construct_UClass_UAtomComponent_NoRegister());
			UProperty* NewProp_ConcurrencySettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConcurrencySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ConcurrencySettings, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundConcurrency_NoRegister());
			UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAttenuation_NoRegister());
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAtomCue_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, AtomStatics_eventSpawnSoundAtLocation_Parms), 0x0010000000000082, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomStatics.h"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_WorldContextObject, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached()
	{
		struct AtomStatics_eventSpawnSoundAttached_Parms
		{
			USoundAtomCue* Sound;
			USceneComponent* AttachToComponent;
			FName AttachPointName;
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			bool bStopWhenAttachedToDestroyed;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
			USoundConcurrency* ConcurrencySettings;
			UAtomComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomStatics();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SpawnSoundAttached"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(AtomStatics_eventSpawnSoundAttached_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000080588, Z_Construct_UClass_UAtomComponent_NoRegister());
			UProperty* NewProp_ConcurrencySettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConcurrencySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ConcurrencySettings, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, Z_Construct_UClass_USoundConcurrency_NoRegister());
			UProperty* NewProp_AttenuationSettings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttenuationSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttenuationSettings, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAttenuation_NoRegister());
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStopWhenAttachedToDestroyed, AtomStatics_eventSpawnSoundAttached_Parms);
			UProperty* NewProp_bStopWhenAttachedToDestroyed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bStopWhenAttachedToDestroyed"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStopWhenAttachedToDestroyed, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bStopWhenAttachedToDestroyed, AtomStatics_eventSpawnSoundAttached_Parms), sizeof(bool), true);
			UProperty* NewProp_LocationType = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LocationType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LocationType, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EAttachLocation());
			UProperty* NewProp_Rotation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Rotation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Rotation, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_Location = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Location"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Location, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080);
			UProperty* NewProp_AttachToComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachToComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachToComponent, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, AtomStatics_eventSpawnSoundAttached_Parms), 0x0010000000000080, Z_Construct_UClass_USoundAtomCue_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomStatics.h"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_AttachToComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomStatics_NoRegister()
	{
		return UAtomStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomStatics_PauseAudioOutput(), "PauseAudioOutput"); // 2303677755
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomStatics_PlaySoundAtLocation(), "PlaySoundAtLocation"); // 1020892639
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomStatics_PlaySoundAttached(), "PlaySoundAttached"); // 1586835753
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomStatics_SpawnSoundAtLocation(), "SpawnSoundAtLocation"); // 3186785498
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomStatics_SpawnSoundAttached(), "SpawnSoundAttached"); // 2018957324
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomStatics, 3271370458);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomStatics(Z_Construct_UClass_UAtomStatics, &UAtomStatics::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
