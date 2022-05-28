// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotify_PlayAutoSe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotify_PlayAutoSe() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlayAutoSe_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlayAutoSe();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams();
// End Cross Module References
	void USQEXSEADAnimNotify_PlayAutoSe::StaticRegisterNativesUSQEXSEADAnimNotify_PlayAutoSe()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlayAutoSe_NoRegister()
	{
		return USQEXSEADAnimNotify_PlayAutoSe::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotify_PlayAutoSe()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotify();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAnimNotify_PlayAutoSe::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20112080u;


				UProperty* NewProp_PlaySettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlaySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlaySettings, USQEXSEADAnimNotify_PlayAutoSe), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAnimNotify_PlayAutoSe> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAnimNotify_PlayAutoSe.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlayAutoSe.h"));
				MetaData->SetValue(NewProp_PlaySettings, TEXT("Category"), TEXT("SQEXSEADAnimNotify_PlayAutoSe"));
				MetaData->SetValue(NewProp_PlaySettings, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotify_PlayAutoSe.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAnimNotify_PlayAutoSe, 2344449005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAnimNotify_PlayAutoSe(Z_Construct_UClass_USQEXSEADAnimNotify_PlayAutoSe, &USQEXSEADAnimNotify_PlayAutoSe::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAnimNotify_PlayAutoSe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAnimNotify_PlayAutoSe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
