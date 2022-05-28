// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackBGMControl.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackBGMControl() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGMControl_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGMControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey();
// End Cross Module References
	void USQEXSEADInterpTrackBGMControl::StaticRegisterNativesUSQEXSEADInterpTrackBGMControl()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGMControl_NoRegister()
	{
		return USQEXSEADInterpTrackBGMControl::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackBGMControl()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrack();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackBGMControl::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				UProperty* NewProp_BGMAssetPtr = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BGMAssetPtr"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BGMAssetPtr, USQEXSEADInterpTrackBGMControl), 0x0010000000000001, Z_Construct_UClass_USoundBase_NoRegister());
				UProperty* NewProp_Keys = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Keys, USQEXSEADInterpTrackBGMControl), 0x0010000000000041);
				UProperty* NewProp_Keys_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Keys, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADBGMControlTrackKey());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackBGMControl> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackBGMControl.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackBGMControl.h"));
				MetaData->SetValue(NewProp_BGMAssetPtr, TEXT("Category"), TEXT("SQEXSEADInterpTrackBGMControl"));
				MetaData->SetValue(NewProp_BGMAssetPtr, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackBGMControl.h"));
				MetaData->SetValue(NewProp_Keys, TEXT("Category"), TEXT("SQEXSEADInterpTrackBGMControl"));
				MetaData->SetValue(NewProp_Keys, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackBGMControl.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackBGMControl, 846259959);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackBGMControl(Z_Construct_UClass_USQEXSEADInterpTrackBGMControl, &USQEXSEADInterpTrackBGMControl::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackBGMControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackBGMControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
