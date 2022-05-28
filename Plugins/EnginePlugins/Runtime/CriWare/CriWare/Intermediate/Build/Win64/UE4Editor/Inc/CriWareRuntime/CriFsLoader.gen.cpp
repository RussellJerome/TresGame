// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriFsLoader.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoader() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
// End Cross Module References
	void ACriFsLoader::StaticRegisterNativesACriFsLoader()
	{
	}
	UClass* Z_Construct_UClass_ACriFsLoader_NoRegister()
	{
		return ACriFsLoader::StaticClass();
	}
	UClass* Z_Construct_UClass_ACriFsLoader()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = ACriFsLoader::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_LoaderComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LoaderComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LoaderComponent, ACriFsLoader), 0x00100000000a001d, Z_Construct_UClass_UCriFsLoaderComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ACriFsLoader> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CriFsLoader.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoader.h"));
				MetaData->SetValue(NewProp_LoaderComponent, TEXT("Category"), TEXT("CriFsLoader"));
				MetaData->SetValue(NewProp_LoaderComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LoaderComponent, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoader.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACriFsLoader, 2404298528);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACriFsLoader(Z_Construct_UClass_ACriFsLoader, &ACriFsLoader::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("ACriFsLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACriFsLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
