// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniInstancedActorComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInstancedActorComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UHoudiniInstancedActorComponent::StaticRegisterNativesUHoudiniInstancedActorComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent_NoRegister()
	{
		return UHoudiniInstancedActorComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniInstancedActorComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = UHoudiniInstancedActorComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_Instances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Instances"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Instances, UHoudiniInstancedActorComponent), 0x0090000000020801);
				UProperty* NewProp_Instances_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Instances, TEXT("Instances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_InstancedAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InstancedAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(InstancedAsset, UHoudiniInstancedActorComponent), 0x0090000000020001, Z_Construct_UClass_UObject_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UHoudiniInstancedActorComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniInstancedActorComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniInstancedActorComponent.h"));
				MetaData->SetValue(NewProp_Instances, TEXT("Category"), TEXT("HoudiniInstancedActorComponent"));
				MetaData->SetValue(NewProp_Instances, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniInstancedActorComponent.h"));
				MetaData->SetValue(NewProp_InstancedAsset, TEXT("Category"), TEXT("HoudiniInstancedActorComponent"));
				MetaData->SetValue(NewProp_InstancedAsset, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniInstancedActorComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniInstancedActorComponent, 1915797092);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniInstancedActorComponent(Z_Construct_UClass_UHoudiniInstancedActorComponent, &UHoudiniInstancedActorComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniInstancedActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniInstancedActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
