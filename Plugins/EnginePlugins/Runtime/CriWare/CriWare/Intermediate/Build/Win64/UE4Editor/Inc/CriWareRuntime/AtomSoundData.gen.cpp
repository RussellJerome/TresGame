// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSoundData.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundData() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSoundData_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSoundData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void AAtomSoundData::StaticRegisterNativesAAtomSoundData()
	{
	}
	UClass* Z_Construct_UClass_AAtomSoundData_NoRegister()
	{
		return AAtomSoundData::StaticClass();
	}
	UClass* Z_Construct_UClass_AAtomSoundData()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = AAtomSoundData::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_CueSheet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CueSheet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CueSheet, AAtomSoundData), 0x0010000000000000, Z_Construct_UClass_USoundAtomCueSheet_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AAtomSoundData> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomSoundData.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomSoundData.h"));
				MetaData->SetValue(NewProp_CueSheet, TEXT("ModuleRelativePath"), TEXT("Public/AtomSoundData.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomSoundData, 3869745727);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomSoundData(Z_Construct_UClass_AAtomSoundData, &AAtomSoundData::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomSoundData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSoundData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
