// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADWhizSeComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADWhizSeComponent() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADWhizSeComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADWhizSeComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADWhizSeComponent::StaticRegisterNativesUSQEXSEADWhizSeComponent()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADWhizSeComponent_NoRegister()
	{
		return USQEXSEADWhizSeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADWhizSeComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADWhizSeComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_MyMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyMeshComponent, USQEXSEADWhizSeComponent), 0x0040000000082008, Z_Construct_UClass_UMeshComponent_NoRegister());
				UProperty* NewProp_MyAudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyAudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyAudioComponent, USQEXSEADWhizSeComponent), 0x0040000000082008, Z_Construct_UClass_UAudioComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCalcVelocityFromLocation, USQEXSEADWhizSeComponent);
				UProperty* NewProp_bCalcVelocityFromLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCalcVelocityFromLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCalcVelocityFromLocation, USQEXSEADWhizSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bCalcVelocityFromLocation, USQEXSEADWhizSeComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseRelativeVelocity, USQEXSEADWhizSeComponent);
				UProperty* NewProp_bUseRelativeVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseRelativeVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseRelativeVelocity, USQEXSEADWhizSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bUseRelativeVelocity, USQEXSEADWhizSeComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOnlyOnce, USQEXSEADWhizSeComponent);
				UProperty* NewProp_bOnlyOnce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOnlyOnce"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOnlyOnce, USQEXSEADWhizSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bOnlyOnce, USQEXSEADWhizSeComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollow, USQEXSEADWhizSeComponent);
				UProperty* NewProp_bFollow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollow, USQEXSEADWhizSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollow, USQEXSEADWhizSeComponent), sizeof(uint8), false);
				UProperty* NewProp_ApproachJudgmentVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ApproachJudgmentVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ApproachJudgmentVelocity, USQEXSEADWhizSeComponent), 0x0010000000000015);
				UProperty* NewProp_ApproachJudgmentDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ApproachJudgmentDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ApproachJudgmentDistance, USQEXSEADWhizSeComponent), 0x0010000000000015);
				UProperty* NewProp_SoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundAsset, USQEXSEADWhizSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADWhizSeComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_MyMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyMeshComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_MyAudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyAudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_bCalcVelocityFromLocation, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_bCalcVelocityFromLocation, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_bUseRelativeVelocity, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_bUseRelativeVelocity, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_bOnlyOnce, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_bOnlyOnce, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_bFollow, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_bFollow, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_ApproachJudgmentVelocity, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_ApproachJudgmentVelocity, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_ApproachJudgmentDistance, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_ApproachJudgmentDistance, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
				MetaData->SetValue(NewProp_SoundAsset, TEXT("Category"), TEXT("SQEXSEADWhizSeComponent"));
				MetaData->SetValue(NewProp_SoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADWhizSeComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADWhizSeComponent, 3253062025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADWhizSeComponent(Z_Construct_UClass_USQEXSEADWhizSeComponent, &USQEXSEADWhizSeComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADWhizSeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADWhizSeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
