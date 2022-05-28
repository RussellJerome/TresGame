// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MerNavOctreeRenderingComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMerNavOctreeRenderingComponent() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMerNavOctreeRenderingComponent_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMerNavOctreeRenderingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UMerNavOctreeRenderingComponent::StaticRegisterNativesUMerNavOctreeRenderingComponent()
	{
	}
	UClass* Z_Construct_UClass_UMerNavOctreeRenderingComponent_NoRegister()
	{
		return UMerNavOctreeRenderingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMerNavOctreeRenderingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPrimitiveComponent();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMerNavOctreeRenderingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A00080u;


				UProperty* NewProp_SelectionMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SelectionMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SelectionMaterial, UMerNavOctreeRenderingComponent), 0x0010000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_Material = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Material"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Material, UMerNavOctreeRenderingComponent), 0x0010000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UMerNavOctreeRenderingComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MerNavOctreeRenderingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MerNavOctreeRenderingComponent.h"));
				MetaData->SetValue(NewProp_SelectionMaterial, TEXT("ModuleRelativePath"), TEXT("Public/MerNavOctreeRenderingComponent.h"));
				MetaData->SetValue(NewProp_Material, TEXT("ModuleRelativePath"), TEXT("Public/MerNavOctreeRenderingComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMerNavOctreeRenderingComponent, 3066399354);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMerNavOctreeRenderingComponent(Z_Construct_UClass_UMerNavOctreeRenderingComponent, &UMerNavOctreeRenderingComponent::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMerNavOctreeRenderingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMerNavOctreeRenderingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
