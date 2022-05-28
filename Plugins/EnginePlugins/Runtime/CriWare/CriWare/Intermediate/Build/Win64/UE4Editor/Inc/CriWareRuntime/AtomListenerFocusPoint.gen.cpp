// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomListenerFocusPoint.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListenerFocusPoint() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomListenerFocusPoint::StaticRegisterNativesUAtomListenerFocusPoint()
	{
	}
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister()
	{
		return UAtomListenerFocusPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomListenerFocusPoint::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_DirectionFocusLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DirectionFocusLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DirectionFocusLevel, UAtomListenerFocusPoint), 0x0010000000000001);
				UProperty* NewProp_DistanceFocusLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DistanceFocusLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DistanceFocusLevel, UAtomListenerFocusPoint), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomListenerFocusPoint> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomListenerFocusPoint.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomListenerFocusPoint.h"));
				MetaData->SetValue(NewProp_DirectionFocusLevel, TEXT("Category"), TEXT("AtomListenerFocusPoint"));
				MetaData->SetValue(NewProp_DirectionFocusLevel, TEXT("ModuleRelativePath"), TEXT("Public/AtomListenerFocusPoint.h"));
				MetaData->SetValue(NewProp_DistanceFocusLevel, TEXT("Category"), TEXT("AtomListenerFocusPoint"));
				MetaData->SetValue(NewProp_DistanceFocusLevel, TEXT("ModuleRelativePath"), TEXT("Public/AtomListenerFocusPoint.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomListenerFocusPoint, 1044786508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomListenerFocusPoint(Z_Construct_UClass_UAtomListenerFocusPoint, &UAtomListenerFocusPoint::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomListenerFocusPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomListenerFocusPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
