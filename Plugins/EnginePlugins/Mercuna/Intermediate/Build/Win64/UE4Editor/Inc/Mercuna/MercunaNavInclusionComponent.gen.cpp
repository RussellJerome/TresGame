// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavInclusionComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavInclusionComponent() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavInclusionComponent_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavInclusionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void UMercunaNavInclusionComponent::StaticRegisterNativesUMercunaNavInclusionComponent()
	{
	}
	UClass* Z_Construct_UClass_UMercunaNavInclusionComponent_NoRegister()
	{
		return UMercunaNavInclusionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaNavInclusionComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaNavInclusionComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaNavInclusionComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavInclusionComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavInclusionComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaNavInclusionComponent, 2562743760);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaNavInclusionComponent(Z_Construct_UClass_UMercunaNavInclusionComponent, &UMercunaNavInclusionComponent::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaNavInclusionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaNavInclusionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
