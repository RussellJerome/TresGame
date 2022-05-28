// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EnvQueryGenerator_Mercuna_3DRing.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Mercuna_3DRing() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_3DRing_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_3DRing();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryGenerator_Mercuna_3DRing::StaticRegisterNativesUEnvQueryGenerator_Mercuna_3DRing()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_3DRing_NoRegister()
	{
		return UEnvQueryGenerator_Mercuna_3DRing::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Mercuna_3DRing()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UEnvQueryGenerator();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UEnvQueryGenerator_Mercuna_3DRing::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20901080u;


				UProperty* NewProp_center = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("center"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(center, UEnvQueryGenerator_Mercuna_3DRing), 0x0014000000000001, Z_Construct_UClass_UEnvQueryContext_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_NumberOfLayers = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumberOfLayers"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NumberOfLayers, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderIntValue());
				UProperty* NewProp_MaxHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MaxHeight, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				UProperty* NewProp_MinHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MinHeight, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				UProperty* NewProp_PointsPerRing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PointsPerRing"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PointsPerRing, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderIntValue());
				UProperty* NewProp_NumberOfRings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumberOfRings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NumberOfRings, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderIntValue());
				UProperty* NewProp_OuterRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OuterRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OuterRadius, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				UProperty* NewProp_InnerRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InnerRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InnerRadius, UEnvQueryGenerator_Mercuna_3DRing), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				static TCppClassTypeInfo<TCppClassTypeTraits<UEnvQueryGenerator_Mercuna_3DRing> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_center, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_center, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_NumberOfLayers, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_NumberOfLayers, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_MaxHeight, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_MaxHeight, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_MinHeight, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_MinHeight, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_PointsPerRing, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_PointsPerRing, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_NumberOfRings, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_NumberOfRings, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_OuterRadius, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_OuterRadius, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
				MetaData->SetValue(NewProp_InnerRadius, TEXT("Category"), TEXT("EnvQueryGenerator_Mercuna_3DRing"));
				MetaData->SetValue(NewProp_InnerRadius, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryGenerator_Mercuna_3DRing.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Mercuna_3DRing, 1800598125);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Mercuna_3DRing(Z_Construct_UClass_UEnvQueryGenerator_Mercuna_3DRing, &UEnvQueryGenerator_Mercuna_3DRing::StaticClass, TEXT("/Script/Mercuna"), TEXT("UEnvQueryGenerator_Mercuna_3DRing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Mercuna_3DRing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
