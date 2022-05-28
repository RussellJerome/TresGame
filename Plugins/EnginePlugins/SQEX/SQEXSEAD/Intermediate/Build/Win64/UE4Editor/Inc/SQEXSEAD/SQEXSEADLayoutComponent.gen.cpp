// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutComponent() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutAudioComponent_NoRegister();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADLayoutComponent::StaticRegisterNativesUSQEXSEADLayoutComponent()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADLayoutComponent_NoRegister()
	{
		return USQEXSEADLayoutComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADLayoutComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPrimitiveComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADLayoutComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_AudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AudioComponent, USQEXSEADLayoutComponent), 0x0040000000082008, Z_Construct_UClass_USQEXSEADLayoutAudioComponent_NoRegister());
				UProperty* NewProp_FadeTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeTime, USQEXSEADLayoutComponent), 0x0010000000000001);
				UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, USQEXSEADLayoutComponent), 0x0010000000000001);
				UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, USQEXSEADLayoutComponent), 0x0010000000000001);
				UProperty* NewProp_InteriorFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InteriorFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InteriorFactor, USQEXSEADLayoutComponent), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOverrideInteriorFactor, USQEXSEADLayoutComponent);
				UProperty* NewProp_bOverrideInteriorFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOverrideInteriorFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOverrideInteriorFactor, USQEXSEADLayoutComponent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bOverrideInteriorFactor, USQEXSEADLayoutComponent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIgnoreObstruction, USQEXSEADLayoutComponent);
				UProperty* NewProp_bIgnoreObstruction = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIgnoreObstruction"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIgnoreObstruction, USQEXSEADLayoutComponent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bIgnoreObstruction, USQEXSEADLayoutComponent), sizeof(uint8), false);
				UProperty* NewProp_LayoutInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LayoutInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LayoutInfo, USQEXSEADLayoutComponent), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo());
				UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, USQEXSEADLayoutComponent), 0x0010000000000005, Z_Construct_UClass_USoundBase_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADLayoutComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_FadeTime, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_FadeTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_VolumeMultiplier, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_VolumeMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_InteriorFactor, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_InteriorFactor, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_bOverrideInteriorFactor, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_bOverrideInteriorFactor, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_bIgnoreObstruction, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_bIgnoreObstruction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_LayoutInfo, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_LayoutInfo, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
				MetaData->SetValue(NewProp_Sound, TEXT("Category"), TEXT("SQEXSEADLayoutComponent"));
				MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADLayoutComponent, 454540431);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADLayoutComponent(Z_Construct_UClass_USQEXSEADLayoutComponent, &USQEXSEADLayoutComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADLayoutComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADLayoutComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
