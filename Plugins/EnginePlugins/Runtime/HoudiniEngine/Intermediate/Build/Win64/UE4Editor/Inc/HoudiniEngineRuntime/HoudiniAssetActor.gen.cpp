// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetActor.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetActor() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_AHoudiniAssetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
// End Cross Module References
	void AHoudiniAssetActor::StaticRegisterNativesAHoudiniAssetActor()
	{
	}
	UClass* Z_Construct_UClass_AHoudiniAssetActor_NoRegister()
	{
		return AHoudiniAssetActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AHoudiniAssetActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = AHoudiniAssetActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_HoudiniAssetComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HoudiniAssetComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HoudiniAssetComponent, AHoudiniAssetActor), 0x00100000000a001d, Z_Construct_UClass_UHoudiniAssetComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AHoudiniAssetActor> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniAssetActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetActor.h"));
				MetaData->SetValue(NewProp_HoudiniAssetComponent, TEXT("Category"), TEXT("HoudiniAssetActor"));
				MetaData->SetValue(NewProp_HoudiniAssetComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HoudiniAssetComponent, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHoudiniAssetActor, 3608042877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHoudiniAssetActor(Z_Construct_UClass_AHoudiniAssetActor, &AHoudiniAssetActor::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("AHoudiniAssetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoudiniAssetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
