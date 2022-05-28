// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackCategoryVolumeFade.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackCategoryVolumeFade() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackCategoryVolumeFade_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackCategoryVolumeFade();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADInterpTrackCategoryVolumeFade::StaticRegisterNativesUSQEXSEADInterpTrackCategoryVolumeFade()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackCategoryVolumeFade_NoRegister()
	{
		return USQEXSEADInterpTrackCategoryVolumeFade::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackCategoryVolumeFade()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackFloatBase();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackCategoryVolumeFade::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				UProperty* NewProp_OnMatineeEndSetCategoryVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnMatineeEndSetCategoryVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OnMatineeEndSetCategoryVolume, USQEXSEADInterpTrackCategoryVolumeFade), 0x0010000000000001);
				UProperty* NewProp_ExtendCategoryNames = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExtendCategoryNames"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ExtendCategoryNames, USQEXSEADInterpTrackCategoryVolumeFade), 0x0010000000000001);
				UProperty* NewProp_ExtendCategoryNames_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ExtendCategoryNames, TEXT("ExtendCategoryNames"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(CategoryName, USQEXSEADInterpTrackCategoryVolumeFade), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackCategoryVolumeFade> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackCategoryVolumeFade.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackCategoryVolumeFade.h"));
				MetaData->SetValue(NewProp_OnMatineeEndSetCategoryVolume, TEXT("Category"), TEXT("SQEXSEADInterpTrackCategoryVolumeFade"));
				MetaData->SetValue(NewProp_OnMatineeEndSetCategoryVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackCategoryVolumeFade.h"));
				MetaData->SetValue(NewProp_ExtendCategoryNames, TEXT("Category"), TEXT("SQEXSEADInterpTrackCategoryVolumeFade"));
				MetaData->SetValue(NewProp_ExtendCategoryNames, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackCategoryVolumeFade.h"));
				MetaData->SetValue(NewProp_CategoryName, TEXT("Category"), TEXT("SQEXSEADInterpTrackCategoryVolumeFade"));
				MetaData->SetValue(NewProp_CategoryName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackCategoryVolumeFade.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackCategoryVolumeFade, 2323282988);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackCategoryVolumeFade(Z_Construct_UClass_USQEXSEADInterpTrackCategoryVolumeFade, &USQEXSEADInterpTrackCategoryVolumeFade::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackCategoryVolumeFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackCategoryVolumeFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
