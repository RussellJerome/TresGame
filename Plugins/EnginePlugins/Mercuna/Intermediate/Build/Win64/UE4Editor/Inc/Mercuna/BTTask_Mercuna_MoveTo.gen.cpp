// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BTTask_Mercuna_MoveTo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Mercuna_MoveTo() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UBTTask_Mercuna_MoveTo_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UBTTask_Mercuna_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void UBTTask_Mercuna_MoveTo::StaticRegisterNativesUBTTask_Mercuna_MoveTo()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_Mercuna_MoveTo_NoRegister()
	{
		return UBTTask_Mercuna_MoveTo::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTask_Mercuna_MoveTo()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBTTask_BlackboardBase();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UBTTask_Mercuna_MoveTo::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowPartialPath, UBTTask_Mercuna_MoveTo);
				UProperty* NewProp_bAllowPartialPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAllowPartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowPartialPath, UBTTask_Mercuna_MoveTo), 0x0010040000000001, CPP_BOOL_PROPERTY_BITMASK(bAllowPartialPath, UBTTask_Mercuna_MoveTo), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bObserveBlackboardValue, UBTTask_Mercuna_MoveTo);
				UProperty* NewProp_bObserveBlackboardValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bObserveBlackboardValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bObserveBlackboardValue, UBTTask_Mercuna_MoveTo), 0x0010000000000000, CPP_BOOL_PROPERTY_BITMASK(bObserveBlackboardValue, UBTTask_Mercuna_MoveTo), sizeof(uint8), false);
				UProperty* NewProp_EndDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EndDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndDistance, UBTTask_Mercuna_MoveTo), 0x0010000000000001);
				UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, UBTTask_Mercuna_MoveTo), 0x0010000000000001);
				static TCppClassTypeInfo<TCppClassTypeTraits<UBTTask_Mercuna_MoveTo> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BTTask_Mercuna_MoveTo.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BTTask_Mercuna_MoveTo.h"));
				MetaData->SetValue(NewProp_bAllowPartialPath, TEXT("Category"), TEXT("BTTask_Mercuna_MoveTo"));
				MetaData->SetValue(NewProp_bAllowPartialPath, TEXT("ModuleRelativePath"), TEXT("Public/BTTask_Mercuna_MoveTo.h"));
				MetaData->SetValue(NewProp_bObserveBlackboardValue, TEXT("ModuleRelativePath"), TEXT("Public/BTTask_Mercuna_MoveTo.h"));
				MetaData->SetValue(NewProp_EndDistance, TEXT("Category"), TEXT("BTTask_Mercuna_MoveTo"));
				MetaData->SetValue(NewProp_EndDistance, TEXT("ModuleRelativePath"), TEXT("Public/BTTask_Mercuna_MoveTo.h"));
				MetaData->SetValue(NewProp_Speed, TEXT("Category"), TEXT("BTTask_Mercuna_MoveTo"));
				MetaData->SetValue(NewProp_Speed, TEXT("ModuleRelativePath"), TEXT("Public/BTTask_Mercuna_MoveTo.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_Mercuna_MoveTo, 1971482825);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_Mercuna_MoveTo(Z_Construct_UClass_UBTTask_Mercuna_MoveTo, &UBTTask_Mercuna_MoveTo::StaticClass, TEXT("/Script/Mercuna"), TEXT("UBTTask_Mercuna_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Mercuna_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
