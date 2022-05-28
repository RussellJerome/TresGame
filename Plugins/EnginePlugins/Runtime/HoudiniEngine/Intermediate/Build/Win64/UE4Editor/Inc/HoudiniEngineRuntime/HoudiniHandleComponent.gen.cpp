// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniHandleComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniHandleComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
// End Cross Module References
	void UHoudiniHandleComponent::StaticRegisterNativesUHoudiniHandleComponent()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniHandleComponent_NoRegister()
	{
		return UHoudiniHandleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniHandleComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = UHoudiniHandleComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_HandleType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HandleType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(HandleType, UHoudiniHandleComponent), 0x0040000000000000, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType());
				UProperty* NewProp_HandleType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_HandleType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UHoudiniHandleComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniHandleComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniHandleComponent.h"));
				MetaData->SetValue(NewProp_HandleType, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniHandleComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniHandleComponent, 2461122137);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniHandleComponent(Z_Construct_UClass_UHoudiniHandleComponent, &UHoudiniHandleComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniHandleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniHandleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
