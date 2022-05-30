// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtom.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtom() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtom_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtom();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTrackKeyframe();
// End Cross Module References
	void UMatineeTrackAtom::StaticRegisterNativesUMatineeTrackAtom()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtom_NoRegister()
	{
		return UMatineeTrackAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtom()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMatineeTrackAtomSoundBase();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMatineeTrackAtom::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082080u;


				UProperty* NewProp_KeyframeList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyframeList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(KeyframeList, UMatineeTrackAtom), 0x0010000000000041);
				UProperty* NewProp_KeyframeList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_KeyframeList, TEXT("KeyframeList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAtomTrackKeyframe());
				UProperty* NewProp_SelectorList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelectorList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SelectorList, UMatineeTrackAtom), 0x0010000000000001);
				UProperty* NewProp_SelectorList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_SelectorList, TEXT("SelectorList"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_AisacList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AisacList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AisacList, UMatineeTrackAtom), 0x0010000000000001);
				UProperty* NewProp_AisacList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AisacList, TEXT("AisacList"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMatineeTrackAtom> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MatineeTrackAtom.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtom.h"));
				MetaData->SetValue(NewProp_KeyframeList, TEXT("Category"), TEXT("MatineeTrackAtom"));
				MetaData->SetValue(NewProp_KeyframeList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtom.h"));
				MetaData->SetValue(NewProp_SelectorList, TEXT("Category"), TEXT("MatineeTrackAtom"));
				MetaData->SetValue(NewProp_SelectorList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtom.h"));
				MetaData->SetValue(NewProp_AisacList, TEXT("Category"), TEXT("MatineeTrackAtom"));
				MetaData->SetValue(NewProp_AisacList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtom.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackAtom, 932405011);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtom(Z_Construct_UClass_UMatineeTrackAtom, &UMatineeTrackAtom::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
