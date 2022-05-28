// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEAD_BGM.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEAD_BGM() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEAD_BGM_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEAD_BGM();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSound_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister();
// End Cross Module References
	void USQEXSEAD_BGM::StaticRegisterNativesUSQEXSEAD_BGM()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEAD_BGM_NoRegister()
	{
		return USQEXSEAD_BGM::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEAD_BGM()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEAD_BGM::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;


				UProperty* NewProp_Sound_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sound_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound_, USQEXSEAD_BGM), 0x0010000000000000, Z_Construct_UClass_USQEXSEADSound_NoRegister());
				UProperty* NewProp_OwnerSlot_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OwnerSlot_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OwnerSlot_, USQEXSEAD_BGM), 0x0010000000000000, Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEAD_BGM> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEAD_BGM.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGM.h"));
				MetaData->SetValue(NewProp_Sound_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGM.h"));
				MetaData->SetValue(NewProp_OwnerSlot_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEAD_BGM.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEAD_BGM, 1507921463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEAD_BGM(Z_Construct_UClass_USQEXSEAD_BGM, &USQEXSEAD_BGM::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEAD_BGM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEAD_BGM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
