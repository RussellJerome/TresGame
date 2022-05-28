// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavSeed.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavSeed() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavSeed_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavSeed();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void AMercunaNavSeed::StaticRegisterNativesAMercunaNavSeed()
	{
	}
	UClass* Z_Construct_UClass_AMercunaNavSeed_NoRegister()
	{
		return AMercunaNavSeed::StaticClass();
	}
	UClass* Z_Construct_UClass_AMercunaNavSeed()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = AMercunaNavSeed::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMercunaNavSeed> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavSeed.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavSeed.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMercunaNavSeed, 3271000674);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMercunaNavSeed(Z_Construct_UClass_AMercunaNavSeed, &AMercunaNavSeed::StaticClass, TEXT("/Script/Mercuna"), TEXT("AMercunaNavSeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMercunaNavSeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
