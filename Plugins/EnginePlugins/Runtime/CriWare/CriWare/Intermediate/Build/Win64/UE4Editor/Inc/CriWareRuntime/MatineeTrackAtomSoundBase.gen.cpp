// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomSoundBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomSoundBase() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMatineeTrackAtomSoundBase::StaticRegisterNativesUMatineeTrackAtomSoundBase()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister()
	{
		return UMatineeTrackAtomSoundBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMatineeTrackAtomBase();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMatineeTrackAtomSoundBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082081u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bContinueSoundOnMatineeEnd, UMatineeTrackAtomSoundBase);
				UProperty* NewProp_bContinueSoundOnMatineeEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bContinueSoundOnMatineeEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bContinueSoundOnMatineeEnd, UMatineeTrackAtomSoundBase), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bContinueSoundOnMatineeEnd, UMatineeTrackAtomSoundBase), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMatineeTrackAtomSoundBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MatineeTrackAtomSoundBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomSoundBase.h"));
				MetaData->SetValue(NewProp_bContinueSoundOnMatineeEnd, TEXT("Category"), TEXT("MatineeTrackAtomSoundBase"));
				MetaData->SetValue(NewProp_bContinueSoundOnMatineeEnd, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomSoundBase.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackAtomSoundBase, 1343305455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomSoundBase(Z_Construct_UClass_UMatineeTrackAtomSoundBase, &UMatineeTrackAtomSoundBase::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomSoundBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomSoundBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
