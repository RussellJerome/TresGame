// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavExclusionComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavExclusionComponent() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavExclusionComponent_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavExclusionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void UMercunaNavExclusionComponent::StaticRegisterNativesUMercunaNavExclusionComponent()
	{
	}
	UClass* Z_Construct_UClass_UMercunaNavExclusionComponent_NoRegister()
	{
		return UMercunaNavExclusionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaNavExclusionComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaNavExclusionComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaNavExclusionComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavExclusionComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavExclusionComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaNavExclusionComponent, 3513907008);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaNavExclusionComponent(Z_Construct_UClass_UMercunaNavExclusionComponent, &UMercunaNavExclusionComponent::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaNavExclusionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaNavExclusionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
