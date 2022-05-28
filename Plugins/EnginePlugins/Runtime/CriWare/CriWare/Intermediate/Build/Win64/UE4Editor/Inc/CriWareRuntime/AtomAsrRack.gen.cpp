// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomAsrRack.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRack() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_GetAsrRack();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomAsrRack::StaticRegisterNativesUAtomAsrRack()
	{
		UClass* Class = UAtomAsrRack::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ApplyDspBusSnapshot", (Native)&UAtomAsrRack::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", (Native)&UAtomAsrRack::execAttachDspBusSetting },
			{ "DetachDspBusSetting", (Native)&UAtomAsrRack::execDetachDspBusSetting },
			{ "GetAsrRack", (Native)&UAtomAsrRack::execGetAsrRack },
			{ "GetDefaultAsrRack", (Native)&UAtomAsrRack::execGetDefaultAsrRack },
			{ "SetBusSendLevelByName", (Native)&UAtomAsrRack::execSetBusSendLevelByName },
			{ "SetBusVolumeByName", (Native)&UAtomAsrRack::execSetBusVolumeByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot()
	{
		struct AtomAsrRack_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ApplyDspBusSnapshot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomAsrRack_eventApplyDspBusSnapshot_Parms));
			UProperty* NewProp_Milliseconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Milliseconds"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Milliseconds, AtomAsrRack_eventApplyDspBusSnapshot_Parms), 0x0010000000000080);
			UProperty* NewProp_SnapshotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SnapshotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SnapshotName, AtomAsrRack_eventApplyDspBusSnapshot_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
			MetaData->SetValue(NewProp_SnapshotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting()
	{
		struct AtomAsrRack_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AttachDspBusSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomAsrRack_eventAttachDspBusSetting_Parms));
			UProperty* NewProp_SettingName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SettingName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SettingName, AtomAsrRack_eventAttachDspBusSetting_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
			MetaData->SetValue(NewProp_SettingName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting()
	{
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DetachDspBusSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetAsrRack()
	{
		struct AtomAsrRack_eventGetAsrRack_Parms
		{
			int32 AsrRackId;
			UAtomAsrRack* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAsrRack"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomAsrRack_eventGetAsrRack_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AtomAsrRack_eventGetAsrRack_Parms), 0x0010000000000580, Z_Construct_UClass_UAtomAsrRack_NoRegister());
			UProperty* NewProp_AsrRackId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AsrRackId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AsrRackId, AtomAsrRack_eventGetAsrRack_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack()
	{
		struct AtomAsrRack_eventGetDefaultAsrRack_Parms
		{
			UAtomAsrRack* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDefaultAsrRack"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomAsrRack_eventGetDefaultAsrRack_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AtomAsrRack_eventGetDefaultAsrRack_Parms), 0x0010000000000580, Z_Construct_UClass_UAtomAsrRack_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName()
	{
		struct AtomAsrRack_eventSetBusSendLevelByName_Parms
		{
			FString SourceBusName;
			FString DestBusName;
			float Level;
		};
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBusSendLevelByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomAsrRack_eventSetBusSendLevelByName_Parms));
			UProperty* NewProp_Level = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Level"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Level, AtomAsrRack_eventSetBusSendLevelByName_Parms), 0x0010000000000080);
			UProperty* NewProp_DestBusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DestBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DestBusName, AtomAsrRack_eventSetBusSendLevelByName_Parms), 0x0010000000000080);
			UProperty* NewProp_SourceBusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SourceBusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SourceBusName, AtomAsrRack_eventSetBusSendLevelByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
			MetaData->SetValue(NewProp_DestBusName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SourceBusName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName()
	{
		struct AtomAsrRack_eventSetBusVolumeByName_Parms
		{
			FString BusName;
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UAtomAsrRack();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBusVolumeByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AtomAsrRack_eventSetBusVolumeByName_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, AtomAsrRack_eventSetBusVolumeByName_Parms), 0x0010000000000080);
			UProperty* NewProp_BusName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BusName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(BusName, AtomAsrRack_eventSetBusVolumeByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
			MetaData->SetValue(NewProp_BusName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister()
	{
		return UAtomAsrRack::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomAsrRack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomAsrRack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName());

				UProperty* NewProp_RackId = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RackId"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RackId, UAtomAsrRack), 0x0010000000020815);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot(), "ApplyDspBusSnapshot"); // 3035477701
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting(), "AttachDspBusSetting"); // 523787381
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting(), "DetachDspBusSetting"); // 63203344
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack(), "GetAsrRack"); // 4134698001
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack(), "GetDefaultAsrRack"); // 497424322
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName(), "SetBusSendLevelByName"); // 653447244
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName(), "SetBusVolumeByName"); // 1899225375
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomAsrRack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomAsrRack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
				MetaData->SetValue(NewProp_RackId, TEXT("Category"), TEXT("AtomAsrRack"));
				MetaData->SetValue(NewProp_RackId, TEXT("ModuleRelativePath"), TEXT("Public/AtomAsrRack.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomAsrRack, 3902988516);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomAsrRack(Z_Construct_UClass_UAtomAsrRack, &UAtomAsrRack::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomAsrRack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAsrRack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
