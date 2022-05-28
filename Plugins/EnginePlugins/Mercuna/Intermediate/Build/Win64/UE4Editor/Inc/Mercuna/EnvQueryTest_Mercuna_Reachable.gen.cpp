// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EnvQueryTest_Mercuna_Reachable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Mercuna_Reachable() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_Reachable_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_Reachable();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaQueryTest();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
// End Cross Module References
	void UEnvQueryTest_Mercuna_Reachable::StaticRegisterNativesUEnvQueryTest_Mercuna_Reachable()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_Reachable_NoRegister()
	{
		return UEnvQueryTest_Mercuna_Reachable::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_Reachable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMercunaQueryTest();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UEnvQueryTest_Mercuna_Reachable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Context = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Context"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Context, UEnvQueryTest_Mercuna_Reachable), 0x0014000000010001, Z_Construct_UClass_UEnvQueryContext_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_MaxPathLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MaxPathLength, UEnvQueryTest_Mercuna_Reachable), 0x0010008000010001, Z_Construct_UScriptStruct_FAIDataProviderFloatValue());
				static TCppClassTypeInfo<TCppClassTypeTraits<UEnvQueryTest_Mercuna_Reachable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvQueryTest_Mercuna_Reachable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryTest_Mercuna_Reachable.h"));
				MetaData->SetValue(NewProp_Context, TEXT("Category"), TEXT("EnvQueryTest_Mercuna_Reachable"));
				MetaData->SetValue(NewProp_Context, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryTest_Mercuna_Reachable.h"));
				MetaData->SetValue(NewProp_MaxPathLength, TEXT("Category"), TEXT("EnvQueryTest_Mercuna_Reachable"));
				MetaData->SetValue(NewProp_MaxPathLength, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryTest_Mercuna_Reachable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Mercuna_Reachable, 908383699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Mercuna_Reachable(Z_Construct_UClass_UEnvQueryTest_Mercuna_Reachable, &UEnvQueryTest_Mercuna_Reachable::StaticClass, TEXT("/Script/Mercuna"), TEXT("UEnvQueryTest_Mercuna_Reachable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Mercuna_Reachable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
