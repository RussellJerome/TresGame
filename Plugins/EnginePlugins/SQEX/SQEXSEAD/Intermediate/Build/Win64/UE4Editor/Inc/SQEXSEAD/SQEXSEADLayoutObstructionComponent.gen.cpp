// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutObstructionComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutObstructionComponent() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutObstructionComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutObstructionComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo();
// End Cross Module References
	void USQEXSEADLayoutObstructionComponent::StaticRegisterNativesUSQEXSEADLayoutObstructionComponent()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADLayoutObstructionComponent_NoRegister()
	{
		return USQEXSEADLayoutObstructionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADLayoutObstructionComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADLayoutObstructionComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_ObstructionInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObstructionInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ObstructionInfo, USQEXSEADLayoutObstructionComponent), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADLayoutObstructionComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADLayoutObstructionComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstructionComponent.h"));
				MetaData->SetValue(NewProp_ObstructionInfo, TEXT("Category"), TEXT("SQEXSEADLayoutObstructionComponent"));
				MetaData->SetValue(NewProp_ObstructionInfo, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstructionComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADLayoutObstructionComponent, 3991245587);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADLayoutObstructionComponent(Z_Construct_UClass_USQEXSEADLayoutObstructionComponent, &USQEXSEADLayoutObstructionComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADLayoutObstructionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADLayoutObstructionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
