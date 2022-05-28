// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponent() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentSetting_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentCallback_NoRegister();
// End Cross Module References
	void USQEXSEADAutoSeComponent::StaticRegisterNativesUSQEXSEADAutoSeComponent()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponent_NoRegister()
	{
		return USQEXSEADAutoSeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAutoSeComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_CachedMovementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CachedMovementComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CachedMovementComponent, USQEXSEADAutoSeComponent), 0x0040000000082008, Z_Construct_UClass_UPawnMovementComponent_NoRegister());
				UProperty* NewProp_CachedMeshReference = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CachedMeshReference"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CachedMeshReference, USQEXSEADAutoSeComponent), 0x0040000000082008, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAlwaysMotionOnlyMode, USQEXSEADAutoSeComponent);
				UProperty* NewProp_bAlwaysMotionOnlyMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAlwaysMotionOnlyMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAlwaysMotionOnlyMode, USQEXSEADAutoSeComponent), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bAlwaysMotionOnlyMode, USQEXSEADAutoSeComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableClip, USQEXSEADAutoSeComponent);
				UProperty* NewProp_bEnableClip = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableClip"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableClip, USQEXSEADAutoSeComponent), 0x0010000000010015, CPP_BOOL_PROPERTY_BITMASK(bEnableClip, USQEXSEADAutoSeComponent), sizeof(uint8), false);
				UProperty* NewProp_DetectionSetting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DetectionSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DetectionSetting, USQEXSEADAutoSeComponent), 0x0010000000010015, Z_Construct_UClass_USQEXSEADAutoSeDetectionSetting_NoRegister());
				UProperty* NewProp_AssetTable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetTable"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AssetTable, USQEXSEADAutoSeComponent), 0x0010000000010015, Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable_NoRegister());
				UProperty* NewProp_SettingData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SettingData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SettingData, USQEXSEADAutoSeComponent), 0x0010000000010015, Z_Construct_UClass_USQEXSEADAutoSeComponentSetting_NoRegister());
				UProperty* NewProp_AutoSeCallback = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutoSeCallback"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AutoSeCallback, USQEXSEADAutoSeComponent), 0x0010000000002000, Z_Construct_UClass_USQEXSEADAutoSeComponentCallback_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAutoSeComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_CachedMovementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CachedMovementComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_CachedMeshReference, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CachedMeshReference, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_bAlwaysMotionOnlyMode, TEXT("Category"), TEXT("SQEXSEADAutoSeComponent"));
				MetaData->SetValue(NewProp_bAlwaysMotionOnlyMode, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_bEnableClip, TEXT("Category"), TEXT("SQEXSEADAutoSeComponent"));
				MetaData->SetValue(NewProp_bEnableClip, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_DetectionSetting, TEXT("Category"), TEXT("SQEXSEADAutoSeComponent"));
				MetaData->SetValue(NewProp_DetectionSetting, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_AssetTable, TEXT("Category"), TEXT("SQEXSEADAutoSeComponent"));
				MetaData->SetValue(NewProp_AssetTable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_SettingData, TEXT("Category"), TEXT("SQEXSEADAutoSeComponent"));
				MetaData->SetValue(NewProp_SettingData, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
				MetaData->SetValue(NewProp_AutoSeCallback, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAutoSeComponent, 3930109577);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAutoSeComponent(Z_Construct_UClass_USQEXSEADAutoSeComponent, &USQEXSEADAutoSeComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAutoSeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAutoSeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
