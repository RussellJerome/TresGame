// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSoundObject.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundObject() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomSoundObject::StaticRegisterNativesUAtomSoundObject()
	{
	}
	UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister()
	{
		return UAtomSoundObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomSoundObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomSoundObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20080080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableCategoryCueLimitScope, UAtomSoundObject);
				UProperty* NewProp_EnableCategoryCueLimitScope = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableCategoryCueLimitScope"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableCategoryCueLimitScope, UAtomSoundObject), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(EnableCategoryCueLimitScope, UAtomSoundObject), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableVoiceLimitScope, UAtomSoundObject);
				UProperty* NewProp_EnableVoiceLimitScope = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableVoiceLimitScope"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableVoiceLimitScope, UAtomSoundObject), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(EnableVoiceLimitScope, UAtomSoundObject), sizeof(bool), true);
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomSoundObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomSoundObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomSoundObject.h"));
				MetaData->SetValue(NewProp_EnableCategoryCueLimitScope, TEXT("Category"), TEXT("AtomSoundObject"));
				MetaData->SetValue(NewProp_EnableCategoryCueLimitScope, TEXT("ModuleRelativePath"), TEXT("Public/AtomSoundObject.h"));
				MetaData->SetValue(NewProp_EnableVoiceLimitScope, TEXT("Category"), TEXT("AtomSoundObject"));
				MetaData->SetValue(NewProp_EnableVoiceLimitScope, TEXT("ModuleRelativePath"), TEXT("Public/AtomSoundObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomSoundObject, 821311280);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomSoundObject(Z_Construct_UClass_UAtomSoundObject, &UAtomSoundObject::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomSoundObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
