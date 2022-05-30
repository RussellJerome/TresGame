// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackAtomCategoryName.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackAtomCategoryName() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMatineeTrackAtomCategoryName::StaticRegisterNativesUMatineeTrackAtomCategoryName()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName_NoRegister()
	{
		return UMatineeTrackAtomCategoryName::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackAtomCategoryName()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMatineeTrackAtomBase();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMatineeTrackAtomCategoryName::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableVolumeTrack, UMatineeTrackAtomCategoryName);
				UProperty* NewProp_bEnableVolumeTrack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableVolumeTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableVolumeTrack, UMatineeTrackAtomCategoryName), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableVolumeTrack, UMatineeTrackAtomCategoryName), sizeof(bool), true);
				UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, UMatineeTrackAtomCategoryName), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMatineeTrackAtomCategoryName> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MatineeTrackAtomCategoryName.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCategoryName.h"));
				MetaData->SetValue(NewProp_bEnableVolumeTrack, TEXT("Category"), TEXT("MatineeTrackAtomCategoryName"));
				MetaData->SetValue(NewProp_bEnableVolumeTrack, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCategoryName.h"));
				MetaData->SetValue(NewProp_CategoryName, TEXT("Category"), TEXT("MatineeTrackAtomCategoryName"));
				MetaData->SetValue(NewProp_CategoryName, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackAtomCategoryName.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackAtomCategoryName, 1139529618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackAtomCategoryName(Z_Construct_UClass_UMatineeTrackAtomCategoryName, &UMatineeTrackAtomCategoryName::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackAtomCategoryName"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackAtomCategoryName);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
