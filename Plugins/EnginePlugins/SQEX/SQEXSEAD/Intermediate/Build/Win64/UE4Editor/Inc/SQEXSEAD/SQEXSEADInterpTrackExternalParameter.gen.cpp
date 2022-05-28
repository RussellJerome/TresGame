// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackExternalParameter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackExternalParameter() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackExternalParameter_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackExternalParameter();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADInterpTrackExternalParameter::StaticRegisterNativesUSQEXSEADInterpTrackExternalParameter()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackExternalParameter_NoRegister()
	{
		return USQEXSEADInterpTrackExternalParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackExternalParameter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackFloatBase();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackExternalParameter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				UProperty* NewProp_OnMatineeEndSetParameterValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnMatineeEndSetParameterValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OnMatineeEndSetParameterValue, USQEXSEADInterpTrackExternalParameter), 0x0010000000000001);
				UProperty* NewProp_ExternalParameterName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExternalParameterName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(ExternalParameterName, USQEXSEADInterpTrackExternalParameter), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackExternalParameter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackExternalParameter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackExternalParameter.h"));
				MetaData->SetValue(NewProp_OnMatineeEndSetParameterValue, TEXT("Category"), TEXT("SQEXSEADInterpTrackExternalParameter"));
				MetaData->SetValue(NewProp_OnMatineeEndSetParameterValue, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackExternalParameter.h"));
				MetaData->SetValue(NewProp_ExternalParameterName, TEXT("Category"), TEXT("SQEXSEADInterpTrackExternalParameter"));
				MetaData->SetValue(NewProp_ExternalParameterName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackExternalParameter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackExternalParameter, 2445552968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackExternalParameter(Z_Construct_UClass_USQEXSEADInterpTrackExternalParameter, &USQEXSEADInterpTrackExternalParameter::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackExternalParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackExternalParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
