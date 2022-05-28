// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutAudioComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutAudioComponent() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutAudioComponent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutAudioComponent();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAudioComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADLayoutAudioComponent::StaticRegisterNativesUSQEXSEADLayoutAudioComponent()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADLayoutAudioComponent_NoRegister()
	{
		return USQEXSEADLayoutAudioComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADLayoutAudioComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USQEXSEADAudioComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADLayoutAudioComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A81080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADLayoutAudioComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADLayoutAudioComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutAudioComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADLayoutAudioComponent, 2264094239);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADLayoutAudioComponent(Z_Construct_UClass_USQEXSEADLayoutAudioComponent, &USQEXSEADLayoutAudioComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADLayoutAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADLayoutAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
