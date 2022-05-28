// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EnvQueryGenerator_Mercuna_Sphere.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Mercuna_Sphere() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_Sphere_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_Sphere();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaPointDistribution();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryGenerator_Mercuna_Sphere::StaticRegisterNativesUEnvQueryGenerator_Mercuna_Sphere()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_Sphere_NoRegister()
	{
		return UEnvQueryGenerator_Mercuna_Sphere::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_Sphere()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvQueryGenerator();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UEnvQueryGenerator_Mercuna_Sphere::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20901080u;


				UProperty* NewProp_center = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("center"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(center, UEnvQueryGenerator_Mercuna_Sphere), 0x0014000000000001, Z_Construct_UClass_UEnvQueryContext_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Distribution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Distribution"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Distribution, UEnvQueryGenerator_Mercuna_Sphere), 0x0010000000010001, Z_Construct_UEnum_Mercuna_EMercunaPointDistribution());
				UProperty* NewProp_Distribution_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Distribution, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_PointsPerShell = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PointsPerShell"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PointsPerShell, UEnvQueryGenerator_Mercuna_Sphere), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderIntValue());
				UProperty* NewProp_NumberOfShells = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumberOfShells"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NumberOfShells, UEnvQueryGenerator_Mercuna_Sphere), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderIntValue());
				UProperty* NewProp_OuterRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OuterRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OuterRadius, UEnvQueryGenerator_Mercuna_Sphere), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				UProperty* NewProp_InnerRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InnerRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InnerRadius, UEnvQueryGenerator_Mercuna_Sphere), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				static TCppClassTypeInfo<TCppClassTypeTraits<UEnvQueryGenerator_Mercuna_Sphere> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(NewProp_center, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_Sphere"));
				MetaData->SetValue(NewProp_center, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(NewProp_Distribution, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_Sphere"));
				MetaData->SetValue(NewProp_Distribution, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(NewProp_PointsPerShell, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_Sphere"));
				MetaData->SetValue(NewProp_PointsPerShell, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(NewProp_NumberOfShells, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_Sphere"));
				MetaData->SetValue(NewProp_NumberOfShells, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(NewProp_OuterRadius, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_Sphere"));
				MetaData->SetValue(NewProp_OuterRadius, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
				MetaData->SetValue(NewProp_InnerRadius, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_Sphere"));
				MetaData->SetValue(NewProp_InnerRadius, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_Sphere.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Mercuna_Sphere, 551950892);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Mercuna_Sphere(Z_Construct_UClass_UEnvQueryGenerator_Mercuna_Sphere, &UEnvQueryGenerator_Mercuna_Sphere::StaticClass, TEXT("/Script/Mercuna"), TEXT("UEnvQueryGenerator_Mercuna_Sphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Mercuna_Sphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
