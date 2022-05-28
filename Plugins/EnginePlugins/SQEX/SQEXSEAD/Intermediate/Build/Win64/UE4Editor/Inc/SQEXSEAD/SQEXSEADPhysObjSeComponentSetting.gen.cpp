// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADPhysObjSeComponentSetting.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADPhysObjSeComponentSetting() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADPhysObjSeComponentSetting::StaticRegisterNativesUSQEXSEADPhysObjSeComponentSetting()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting_NoRegister()
	{
		return USQEXSEADPhysObjSeComponentSetting::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADPhysObjSeComponentSetting::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_VelocityAudioFadeOutTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocityAudioFadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VelocityAudioFadeOutTime, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001);
				UProperty* NewProp_VelocityThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocityThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VelocityThreshold, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001);
				UProperty* NewProp_HitDistanceThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HitDistanceThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HitDistanceThreshold, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001);
				UProperty* NewProp_HitImpulseThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HitImpulseThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HitImpulseThreshold, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001);
				UProperty* NewProp_VelocitySE = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VelocitySE"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VelocitySE, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001, Z_Construct_UClass_USoundBase_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableSwithHitSE, USQEXSEADPhysObjSeComponentSetting);
				UProperty* NewProp_bEnableSwithHitSE = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableSwithHitSE"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableSwithHitSE, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bEnableSwithHitSE, USQEXSEADPhysObjSeComponentSetting), sizeof(uint8), false);
				UProperty* NewProp_HitSE = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HitSE"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitSE, USQEXSEADPhysObjSeComponentSetting), 0x0010000000000001, Z_Construct_UClass_USoundBase_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADPhysObjSeComponentSetting> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_VelocityAudioFadeOutTime, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_VelocityAudioFadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_VelocityThreshold, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_VelocityThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_HitDistanceThreshold, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_HitDistanceThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_HitImpulseThreshold, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_HitImpulseThreshold, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_VelocitySE, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_VelocitySE, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_bEnableSwithHitSE, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_bEnableSwithHitSE, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
				MetaData->SetValue(NewProp_HitSE, TEXT("Category"), TEXT("SQEXSEADPhysObjSeComponentSetting"));
				MetaData->SetValue(NewProp_HitSE, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADPhysObjSeComponentSetting.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADPhysObjSeComponentSetting, 3014330530);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADPhysObjSeComponentSetting(Z_Construct_UClass_USQEXSEADPhysObjSeComponentSetting, &USQEXSEADPhysObjSeComponentSetting::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADPhysObjSeComponentSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADPhysObjSeComponentSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
