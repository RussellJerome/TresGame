// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackInstExternalParameter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackInstExternalParameter() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstExternalParameter_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstExternalParameter();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADInterpTrackInstExternalParameter::StaticRegisterNativesUSQEXSEADInterpTrackInstExternalParameter()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstExternalParameter_NoRegister()
	{
		return USQEXSEADInterpTrackInstExternalParameter::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackInstExternalParameter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackInstProperty();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackInstExternalParameter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_ResetValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ResetValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ResetValue, USQEXSEADInterpTrackInstExternalParameter), 0x0010000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackInstExternalParameter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackInstExternalParameter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackInstExternalParameter.h"));
				MetaData->SetValue(NewProp_ResetValue, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackInstExternalParameter.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackInstExternalParameter, 3079709356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackInstExternalParameter(Z_Construct_UClass_USQEXSEADInterpTrackInstExternalParameter, &USQEXSEADInterpTrackInstExternalParameter::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackInstExternalParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackInstExternalParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
