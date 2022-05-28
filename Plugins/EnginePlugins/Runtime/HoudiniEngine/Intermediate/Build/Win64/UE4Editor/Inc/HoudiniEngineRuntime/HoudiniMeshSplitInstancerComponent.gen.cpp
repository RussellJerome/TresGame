// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniMeshSplitInstancerComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniMeshSplitInstancerComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void UHoudiniMeshSplitInstancerComponent::StaticRegisterNativesUHoudiniMeshSplitInstancerComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent_NoRegister()
	{
		return UHoudiniMeshSplitInstancerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = UHoudiniMeshSplitInstancerComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_InstancedMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InstancedMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstancedMesh, UHoudiniMeshSplitInstancerComponent), 0x00c0000000020001, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_OverrideMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverrideMaterial, UHoudiniMeshSplitInstancerComponent), 0x00c0000000020801, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_Instances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Instances"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Instances, UHoudiniMeshSplitInstancerComponent), 0x00c0008000020809);
				UProperty* NewProp_Instances_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Instances, TEXT("Instances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x00000000000a0008, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UHoudiniMeshSplitInstancerComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniMeshSplitInstancerComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniMeshSplitInstancerComponent.h"));
				MetaData->SetValue(NewProp_InstancedMesh, TEXT("Category"), TEXT("HoudiniMeshSplitInstancerComponent"));
				MetaData->SetValue(NewProp_InstancedMesh, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniMeshSplitInstancerComponent.h"));
				MetaData->SetValue(NewProp_OverrideMaterial, TEXT("Category"), TEXT("HoudiniMeshSplitInstancerComponent"));
				MetaData->SetValue(NewProp_OverrideMaterial, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniMeshSplitInstancerComponent.h"));
				MetaData->SetValue(NewProp_Instances, TEXT("Category"), TEXT("HoudiniMeshSplitInstancerComponent"));
				MetaData->SetValue(NewProp_Instances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Instances, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniMeshSplitInstancerComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniMeshSplitInstancerComponent, 2663552881);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniMeshSplitInstancerComponent(Z_Construct_UClass_UHoudiniMeshSplitInstancerComponent, &UHoudiniMeshSplitInstancerComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniMeshSplitInstancerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniMeshSplitInstancerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
