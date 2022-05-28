// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaObstacleComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaObstacleComponent() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaObstacleComponent_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaObstacleComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMerObstacleType();
// End Cross Module References
	void UMercunaObstacleComponent::StaticRegisterNativesUMercunaObstacleComponent()
	{
	}
	UClass* Z_Construct_UClass_UMercunaObstacleComponent_NoRegister()
	{
		return UMercunaObstacleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaObstacleComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaObstacleComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_Radius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Radius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Radius, UMercunaObstacleComponent), 0x0010000000000001);
				UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, UMercunaObstacleComponent), 0x0010000000000001, Z_Construct_UEnum_Mercuna_EMerObstacleType());
				UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaObstacleComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaObstacleComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaObstacleComponent.h"));
				MetaData->SetValue(NewProp_Radius, TEXT("Category"), TEXT("MercunaObstacleComponent"));
				MetaData->SetValue(NewProp_Radius, TEXT("ModuleRelativePath"), TEXT("Public/MercunaObstacleComponent.h"));
				MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("MercunaObstacleComponent"));
				MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/MercunaObstacleComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaObstacleComponent, 2240646727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaObstacleComponent(Z_Construct_UClass_UMercunaObstacleComponent, &UMercunaObstacleComponent::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaObstacleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaObstacleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
