// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavVolume.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavVolume() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavVolume_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavOctree_NoRegister();
// End Cross Module References
	void AMercunaNavVolume::StaticRegisterNativesAMercunaNavVolume()
	{
	}
	UClass* Z_Construct_UClass_AMercunaNavVolume_NoRegister()
	{
		return AMercunaNavVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_AMercunaNavVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AVolume();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = AMercunaNavVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_NavOctree = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NavOctree"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(NavOctree, AMercunaNavVolume), 0x0040000000000000, Z_Construct_UClass_AMercunaNavOctree_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AMercunaNavVolume> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Brush Physics Object Display Rendering Physics Input Blueprint"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_NavOctree, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavVolume.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMercunaNavVolume, 2014068080);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMercunaNavVolume(Z_Construct_UClass_AMercunaNavVolume, &AMercunaNavVolume::StaticClass, TEXT("/Script/Mercuna"), TEXT("AMercunaNavVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMercunaNavVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
