// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAsset.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAsset() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
// End Cross Module References
	void UHoudiniAsset::StaticRegisterNativesUHoudiniAsset()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister()
	{
		return UHoudiniAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAsset()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = UHoudiniAsset::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20101080u;


				UProperty* NewProp_ThumbnailInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThumbnailInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ThumbnailInfo, UHoudiniAsset), 0x0010000000000000, Z_Construct_UClass_UThumbnailInfo_NoRegister());
				UProperty* NewProp_AssetFileName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetFileName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AssetFileName, UHoudiniAsset), 0x0010000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UHoudiniAsset> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniAsset.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAsset.h"));
				MetaData->SetValue(NewProp_ThumbnailInfo, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAsset.h"));
				MetaData->SetValue(NewProp_AssetFileName, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAsset.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAsset, 482539440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAsset(Z_Construct_UClass_UHoudiniAsset, &UHoudiniAsset::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
