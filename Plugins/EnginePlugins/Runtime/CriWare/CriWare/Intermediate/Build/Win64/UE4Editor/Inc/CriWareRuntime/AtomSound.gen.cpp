// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSound.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSound() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
	void AAtomSound::StaticRegisterNativesAAtomSound()
	{
	}
	UClass* Z_Construct_UClass_AAtomSound_NoRegister()
	{
		return AAtomSound::StaticClass();
	}
	UClass* Z_Construct_UClass_AAtomSound()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = AAtomSound::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_AtomComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AtomComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AtomComponent, AAtomSound), 0x00100000000a001d, Z_Construct_UClass_UAtomComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AAtomSound> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomSound.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomSound.h"));
				MetaData->SetValue(NewProp_AtomComponent, TEXT("Category"), TEXT("AtomSound"));
				MetaData->SetValue(NewProp_AtomComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AtomComponent, TEXT("ModuleRelativePath"), TEXT("Public/AtomSound.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomSound, 628297100);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomSound(Z_Construct_UClass_AAtomSound, &AAtomSound::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
