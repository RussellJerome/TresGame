// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackInstAtom.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackInstAtom() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackInstAtom_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackInstAtom();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
	void UMatineeTrackInstAtom::StaticRegisterNativesUMatineeTrackInstAtom()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackInstAtom_NoRegister()
	{
		return UMatineeTrackInstAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackInstAtom()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrackInst();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMatineeTrackInstAtom::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_AtomTrack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AtomTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AtomTrack, UMatineeTrackInstAtom), 0x0010000000002000, Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister());
				UProperty* NewProp_AtomComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AtomComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AtomComponent, UMatineeTrackInstAtom), 0x0010000000082008, Z_Construct_UClass_UAtomComponent_NoRegister());
				UProperty* NewProp_LastUpdatePosition = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LastUpdatePosition"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LastUpdatePosition, UMatineeTrackInstAtom), 0x0010000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMatineeTrackInstAtom> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MatineeTrackInstAtom.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackInstAtom.h"));
				MetaData->SetValue(NewProp_AtomTrack, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackInstAtom.h"));
				MetaData->SetValue(NewProp_AtomComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AtomComponent, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackInstAtom.h"));
				MetaData->SetValue(NewProp_LastUpdatePosition, TEXT("ModuleRelativePath"), TEXT("Public/MatineeTrackInstAtom.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatineeTrackInstAtom, 3230416595);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackInstAtom(Z_Construct_UClass_UMatineeTrackInstAtom, &UMatineeTrackInstAtom::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackInstAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackInstAtom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
