// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EnvQueryTest_Mercuna_NavRaycast.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Mercuna_NavRaycast() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_NavRaycast_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_NavRaycast();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaQueryTest();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UEnvQueryTest_Mercuna_NavRaycast::StaticRegisterNativesUEnvQueryTest_Mercuna_NavRaycast()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_NavRaycast_NoRegister()
	{
		return UEnvQueryTest_Mercuna_NavRaycast::StaticClass();
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Mercuna_NavRaycast()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMercunaQueryTest();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UEnvQueryTest_Mercuna_NavRaycast::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_Context = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Context"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(Context, UEnvQueryTest_Mercuna_NavRaycast), 0x0014000000010001, Z_Construct_UClass_UEnvQueryContext_NoRegister(), Z_Construct_UClass_UClass());
				static TCppClassTypeInfo<TCppClassTypeTraits<UEnvQueryTest_Mercuna_NavRaycast> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("EnvQueryTest_Mercuna_NavRaycast.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryTest_Mercuna_NavRaycast.h"));
				MetaData->SetValue(NewProp_Context, TEXT("Category"), TEXT("EnvQueryTest_Mercuna_NavRaycast"));
				MetaData->SetValue(NewProp_Context, TEXT("ModuleRelativePath"), TEXT("Public/EnvQueryTest_Mercuna_NavRaycast.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Mercuna_NavRaycast, 3851689045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Mercuna_NavRaycast(Z_Construct_UClass_UEnvQueryTest_Mercuna_NavRaycast, &UEnvQueryTest_Mercuna_NavRaycast::StaticClass, TEXT("/Script/Mercuna"), TEXT("UEnvQueryTest_Mercuna_NavRaycast"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Mercuna_NavRaycast);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
