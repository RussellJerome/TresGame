// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavSeedComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavSeedComponent() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavSeedComponent_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavSeedComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void UMercunaNavSeedComponent::StaticRegisterNativesUMercunaNavSeedComponent()
	{
	}
	UClass* Z_Construct_UClass_UMercunaNavSeedComponent_NoRegister()
	{
		return UMercunaNavSeedComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaNavSeedComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaNavSeedComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaNavSeedComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavSeedComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavSeedComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaNavSeedComponent, 2655189081);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaNavSeedComponent(Z_Construct_UClass_UMercunaNavSeedComponent, &UMercunaNavSeedComponent::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaNavSeedComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaNavSeedComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
