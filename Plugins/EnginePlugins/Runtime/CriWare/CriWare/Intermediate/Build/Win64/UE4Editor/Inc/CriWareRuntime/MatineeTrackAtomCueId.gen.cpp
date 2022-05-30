// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomCueId.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomCueId() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCueId_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCueId();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void UMatineeTrackAtomCueId::StaticRegisterNativesUMatineeTrackAtomCueId()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCueId_NoRegister()
	{
		return UMatineeTrackAtomCueId::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCueId()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMatineeTrackAtomSoundBase();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMatineeTrackAtomCueId::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082080u;


				UProperty* NewProp_KeyframeList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyframeList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(KeyframeList, UMatineeTrackAtomCueId), 0x0010000000000041);
				UProperty* NewProp_KeyframeList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_KeyframeList, TEXT("KeyframeList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAtomCueIdTrackKeyframe());
				UProperty* NewProp_CueSheet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CueSheet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CueSheet, UMatineeTrackAtomCueId), 0x0010000000000001, Z_Construct_UClass_USoundAtomCueSheet_NoRegister());
				UProperty* NewProp_SelectorList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelectorList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SelectorList, UMatineeTrackAtomCueId), 0x0010000000000001);
				UProperty* NewProp_SelectorList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SelectorList, TEXT("SelectorList"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_AisacList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AisacList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AisacList, UMatineeTrackAtomCueId), 0x0010000000000001);
				UProperty* NewProp_AisacList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AisacList, TEXT("AisacList"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMatineeTrackAtomCueId> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MatineeTrackAtomCueId.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCueId.h"));
				MetaData->SetValue(NewProp_KeyframeList, TEXT("Category"), TEXT("MatineeTrackAtomCueId"));
				MetaData->SetValue(NewProp_KeyframeList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCueId.h"));
				MetaData->SetValue(NewProp_CueSheet, TEXT("Category"), TEXT("MatineeTrackAtomCueId"));
				MetaData->SetValue(NewProp_CueSheet, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCueId.h"));
				MetaData->SetValue(NewProp_SelectorList, TEXT("Category"), TEXT("MatineeTrackAtomCueId"));
				MetaData->SetValue(NewProp_SelectorList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCueId.h"));
				MetaData->SetValue(NewProp_AisacList, TEXT("Category"), TEXT("MatineeTrackAtomCueId"));
				MetaData->SetValue(NewProp_AisacList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCueId.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackAtomCueId, 3958230046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomCueId(Z_Construct_UClass_UMatineeTrackAtomCueId, &UMatineeTrackAtomCueId::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomCueId"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomCueId);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
