// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackInstCategoryVolumeFade.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackInstCategoryVolumeFade() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstCategoryVolumeFade_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstCategoryVolumeFade();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADInterpTrackInstCategoryVolumeFade::StaticRegisterNativesUSQEXSEADInterpTrackInstCategoryVolumeFade()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstCategoryVolumeFade_NoRegister()
	{
		return USQEXSEADInterpTrackInstCategoryVolumeFade::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstCategoryVolumeFade()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackInstProperty();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackInstCategoryVolumeFade::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_ResetVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ResetVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ResetVolume, USQEXSEADInterpTrackInstCategoryVolumeFade), 0x0010000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackInstCategoryVolumeFade> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackInstCategoryVolumeFade.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackInstCategoryVolumeFade.h"));
				MetaData->SetValue(NewProp_ResetVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackInstCategoryVolumeFade.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackInstCategoryVolumeFade, 2375088831);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackInstCategoryVolumeFade(Z_Construct_UClass_USQEXSEADInterpTrackInstCategoryVolumeFade, &USQEXSEADInterpTrackInstCategoryVolumeFade::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackInstCategoryVolumeFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackInstCategoryVolumeFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
