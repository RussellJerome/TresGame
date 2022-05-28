// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeDetectionSetting.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeDetectionSetting() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting();
// End Cross Module References
	void USQEXSEADAutoSeDetectionSetting::StaticRegisterNativesUSQEXSEADAutoSeDetectionSetting()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting_NoRegister()
	{
		return USQEXSEADAutoSeDetectionSetting::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAutoSeDetectionSetting::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_DetectorSettingSwing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DetectorSettingSwing"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DetectorSettingSwing, USQEXSEADAutoSeDetectionSetting), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingSwing());
				UProperty* NewProp_DetectorSettingRustle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DetectorSettingRustle"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DetectorSettingRustle, USQEXSEADAutoSeDetectionSetting), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingRustle());
				UProperty* NewProp_DetectorSettingFootStep = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DetectorSettingFootStep"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DetectorSettingFootStep, USQEXSEADAutoSeDetectionSetting), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAutoSeDetectorSettingFootStep());
				UProperty* NewProp_AnalyzerSettingForMotionOnlyMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalyzerSettingForMotionOnlyMode"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AnalyzerSettingForMotionOnlyMode, USQEXSEADAutoSeDetectionSetting), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseAnalyzerSettingForMotionOnlyMode, USQEXSEADAutoSeDetectionSetting);
				UProperty* NewProp_bUseAnalyzerSettingForMotionOnlyMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseAnalyzerSettingForMotionOnlyMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseAnalyzerSettingForMotionOnlyMode, USQEXSEADAutoSeDetectionSetting), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bUseAnalyzerSettingForMotionOnlyMode, USQEXSEADAutoSeDetectionSetting), sizeof(bool), true);
				UProperty* NewProp_AnalyzerSetting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AnalyzerSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AnalyzerSetting, USQEXSEADAutoSeDetectionSetting), 0x0010000000000015, Z_Construct_UScriptStruct_FSQEXSEADAutoSeAnalyzerSetting());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAutoSeDetectionSetting> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(NewProp_DetectorSettingSwing, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectionSetting"));
				MetaData->SetValue(NewProp_DetectorSettingSwing, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(NewProp_DetectorSettingRustle, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectionSetting"));
				MetaData->SetValue(NewProp_DetectorSettingRustle, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(NewProp_DetectorSettingFootStep, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectionSetting"));
				MetaData->SetValue(NewProp_DetectorSettingFootStep, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(NewProp_AnalyzerSettingForMotionOnlyMode, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectionSetting"));
				MetaData->SetValue(NewProp_AnalyzerSettingForMotionOnlyMode, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(NewProp_bUseAnalyzerSettingForMotionOnlyMode, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectionSetting"));
				MetaData->SetValue(NewProp_bUseAnalyzerSettingForMotionOnlyMode, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
				MetaData->SetValue(NewProp_AnalyzerSetting, TEXT("Category"), TEXT("SQEXSEADAutoSeDetectionSetting"));
				MetaData->SetValue(NewProp_AnalyzerSetting, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeDetectionSetting.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAutoSeDetectionSetting, 2097282980);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAutoSeDetectionSetting(Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting, &USQEXSEADAutoSeDetectionSetting::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAutoSeDetectionSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAutoSeDetectionSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
