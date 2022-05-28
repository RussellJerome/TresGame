// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomSelector.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomSelector() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSelector_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSelector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe();
// End Cross Module References
	void UMatineeTrackAtomSelector::StaticRegisterNativesUMatineeTrackAtomSelector()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSelector_NoRegister()
	{
		return UMatineeTrackAtomSelector::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSelector()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrack();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMatineeTrackAtomSelector::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082080u;


				UProperty* NewProp_KeyframeList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("KeyframeList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(KeyframeList, UMatineeTrackAtomSelector), 0x0010000000000041);
				UProperty* NewProp_KeyframeList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_KeyframeList, TEXT("KeyframeList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FAtomSelectorTrackKeyframe());
				static TCppClassTypeInfo<TCppClassTypeTraits<UMatineeTrackAtomSelector> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MatineeTrackAtomSelector.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomSelector.h"));
				MetaData->SetValue(NewProp_KeyframeList, TEXT("Category"), TEXT("MatineeTrackAtomSelector"));
				MetaData->SetValue(NewProp_KeyframeList, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomSelector.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackAtomSelector, 687405708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomSelector(Z_Construct_UClass_UMatineeTrackAtomSelector, &UMatineeTrackAtomSelector::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
