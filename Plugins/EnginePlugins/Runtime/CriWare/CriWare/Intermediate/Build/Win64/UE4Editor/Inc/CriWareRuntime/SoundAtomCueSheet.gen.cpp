// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SoundAtomCueSheet.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheet() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	void USoundAtomCueSheet::StaticRegisterNativesUSoundAtomCueSheet()
	{
		UClass* Class = USoundAtomCueSheet::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ApplyDspBusSnapshot", (Native)&USoundAtomCueSheet::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", (Native)&USoundAtomCueSheet::execAttachDspBusSetting },
			{ "DetachDspBusSetting", (Native)&USoundAtomCueSheet::execDetachDspBusSetting },
			{ "LoadAcb", (Native)&USoundAtomCueSheet::execLoadAcb },
			{ "ReleaseAcb", (Native)&USoundAtomCueSheet::execReleaseAcb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot()
	{
		struct SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
		UObject* Outer = Z_Construct_UClass_USoundAtomCueSheet();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ApplyDspBusSnapshot"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms));
			UProperty* NewProp_Milliseconds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Milliseconds"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Milliseconds, SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), 0x0010000000000080);
			UProperty* NewProp_SnapshotName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SnapshotName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SnapshotName, SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
			MetaData->SetValue(NewProp_SnapshotName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting()
	{
		struct SoundAtomCueSheet_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
		UObject* Outer = Z_Construct_UClass_USoundAtomCueSheet();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AttachDspBusSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SoundAtomCueSheet_eventAttachDspBusSetting_Parms));
			UProperty* NewProp_SettingName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SettingName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SettingName, SoundAtomCueSheet_eventAttachDspBusSetting_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
			MetaData->SetValue(NewProp_SettingName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting()
	{
		UObject* Outer = Z_Construct_UClass_USoundAtomCueSheet();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DetachDspBusSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb()
	{
		struct SoundAtomCueSheet_eventLoadAcb_Parms
		{
			FName AcbName;
			USoundAtomCueSheet* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USoundAtomCueSheet();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadAcb"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SoundAtomCueSheet_eventLoadAcb_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, SoundAtomCueSheet_eventLoadAcb_Parms), 0x0010000000000580, Z_Construct_UClass_USoundAtomCueSheet_NoRegister());
			UProperty* NewProp_AcbName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AcbName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AcbName, SoundAtomCueSheet_eventLoadAcb_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb()
	{
		struct SoundAtomCueSheet_eventReleaseAcb_Parms
		{
			FName AcbName;
		};
		UObject* Outer = Z_Construct_UClass_USoundAtomCueSheet();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReleaseAcb"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(SoundAtomCueSheet_eventReleaseAcb_Parms));
			UProperty* NewProp_AcbName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AcbName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AcbName, SoundAtomCueSheet_eventReleaseAcb_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundAtomCueSheet()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = USoundAtomCueSheet::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot());
				OuterClass->LinkChild(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting());
				OuterClass->LinkChild(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting());
				OuterClass->LinkChild(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb());
				OuterClass->LinkChild(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb());

				UProperty* NewProp_CueSheetName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CueSheetName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CueSheetName, USoundAtomCueSheet), 0x0010000000020001);
				UProperty* NewProp_AwbDirectory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AwbDirectory"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AwbDirectory, USoundAtomCueSheet), 0x0010000000000001, Z_Construct_UScriptStruct_FDirectoryPath());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideAwbDirectory, USoundAtomCueSheet);
				UProperty* NewProp_bOverrideAwbDirectory = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideAwbDirectory"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideAwbDirectory, USoundAtomCueSheet), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bOverrideAwbDirectory, USoundAtomCueSheet), sizeof(bool), true);
				UProperty* NewProp_AcbFilePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AcbFilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AcbFilePath, USoundAtomCueSheet), 0x0010000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(Contains, USoundAtomCueSheet);
				UProperty* NewProp_Contains = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Contains"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Contains, USoundAtomCueSheet), 0x0010000000022001, CPP_BOOL_PROPERTY_BITMASK(Contains, USoundAtomCueSheet), sizeof(bool), true);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot(), "ApplyDspBusSnapshot"); // 3635945138
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting(), "AttachDspBusSetting"); // 1475193826
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting(), "DetachDspBusSetting"); // 2985634228
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb(), "LoadAcb"); // 3360787868
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb(), "ReleaseAcb"); // 436802324
				static TCppClassTypeInfo<TCppClassTypeTraits<USoundAtomCueSheet> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SoundAtomCueSheet.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
				MetaData->SetValue(NewProp_CueSheetName, TEXT("Category"), TEXT("SoundAtomCueSheet"));
				MetaData->SetValue(NewProp_CueSheetName, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
				MetaData->SetValue(NewProp_AwbDirectory, TEXT("Category"), TEXT("SoundAtomCueSheet"));
				MetaData->SetValue(NewProp_AwbDirectory, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
				MetaData->SetValue(NewProp_bOverrideAwbDirectory, TEXT("Category"), TEXT("SoundAtomCueSheet"));
				MetaData->SetValue(NewProp_bOverrideAwbDirectory, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
				MetaData->SetValue(NewProp_AcbFilePath, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
				MetaData->SetValue(NewProp_Contains, TEXT("Category"), TEXT("SoundAtomCueSheet"));
				MetaData->SetValue(NewProp_Contains, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCueSheet.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCueSheet, 3779881957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCueSheet(Z_Construct_UClass_USoundAtomCueSheet, &USoundAtomCueSheet::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCueSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
