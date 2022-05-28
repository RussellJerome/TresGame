// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotifyState_PlayAutoSe.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotifyState_PlayAutoSe() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_PlayAutoSe_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_PlayAutoSe();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams();
// End Cross Module References
	void USQEXSEADAnimNotifyState_PlayAutoSe::StaticRegisterNativesUSQEXSEADAnimNotifyState_PlayAutoSe()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_PlayAutoSe_NoRegister()
	{
		return USQEXSEADAnimNotifyState_PlayAutoSe::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_PlayAutoSe()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotifyState();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAnimNotifyState_PlayAutoSe::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20113080u;


				UProperty* NewProp_FadeOutDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeOutDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutDuration, USQEXSEADAnimNotifyState_PlayAutoSe), 0x0010000000000015);
				UProperty* NewProp_PlaySettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlaySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PlaySettings, USQEXSEADAnimNotifyState_PlayAutoSe), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAnimNotifyPlayAutoSeParams());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAnimNotifyState_PlayAutoSe> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAnimNotifyState_PlayAutoSe.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_PlayAutoSe.h"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_PlayAutoSe"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_PlayAutoSe.h"));
				MetaData->SetValue(NewProp_PlaySettings, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_PlayAutoSe"));
				MetaData->SetValue(NewProp_PlaySettings, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_PlayAutoSe.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAnimNotifyState_PlayAutoSe, 816599406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAnimNotifyState_PlayAutoSe(Z_Construct_UClass_USQEXSEADAnimNotifyState_PlayAutoSe, &USQEXSEADAnimNotifyState_PlayAutoSe::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAnimNotifyState_PlayAutoSe"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAnimNotifyState_PlayAutoSe);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
