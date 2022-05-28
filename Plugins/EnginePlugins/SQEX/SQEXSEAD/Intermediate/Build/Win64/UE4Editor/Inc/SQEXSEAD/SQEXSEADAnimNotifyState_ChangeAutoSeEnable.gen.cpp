// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAnimNotifyState_ChangeAutoSeEnable() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_ChangeAutoSeEnable_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_ChangeAutoSeEnable();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior();
// End Cross Module References
	void USQEXSEADAnimNotifyState_ChangeAutoSeEnable::StaticRegisterNativesUSQEXSEADAnimNotifyState_ChangeAutoSeEnable()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_ChangeAutoSeEnable_NoRegister()
	{
		return USQEXSEADAnimNotifyState_ChangeAutoSeEnable::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAnimNotifyState_ChangeAutoSeEnable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimNotifyState();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAnimNotifyState_ChangeAutoSeEnable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20113080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableContinuousDisabling, USQEXSEADAnimNotifyState_ChangeAutoSeEnable);
				UProperty* NewProp_bEnableContinuousDisabling = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableContinuousDisabling"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableContinuousDisabling, USQEXSEADAnimNotifyState_ChangeAutoSeEnable), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bEnableContinuousDisabling, USQEXSEADAnimNotifyState_ChangeAutoSeEnable), sizeof(uint8), false);
				UProperty* NewProp_NotifyEndBehavior = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NotifyEndBehavior"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(NotifyEndBehavior, USQEXSEADAnimNotifyState_ChangeAutoSeEnable), 0x0010000000000015, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADChangeAutoSeEnableNotifyEndBehavior());
				UProperty* NewProp_NotifyEndBehavior_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_NotifyEndBehavior, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableSetting, USQEXSEADAnimNotifyState_ChangeAutoSeEnable);
				UProperty* NewProp_bEnableSetting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableSetting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableSetting, USQEXSEADAnimNotifyState_ChangeAutoSeEnable), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bEnableSetting, USQEXSEADAnimNotifyState_ChangeAutoSeEnable), sizeof(uint8), false);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAnimNotifyState_ChangeAutoSeEnable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"));
				MetaData->SetValue(NewProp_bEnableContinuousDisabling, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_ChangeAutoSeEnable"));
				MetaData->SetValue(NewProp_bEnableContinuousDisabling, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"));
				MetaData->SetValue(NewProp_NotifyEndBehavior, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_ChangeAutoSeEnable"));
				MetaData->SetValue(NewProp_NotifyEndBehavior, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"));
				MetaData->SetValue(NewProp_bEnableSetting, TEXT("Category"), TEXT("SQEXSEADAnimNotifyState_ChangeAutoSeEnable"));
				MetaData->SetValue(NewProp_bEnableSetting, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAnimNotifyState_ChangeAutoSeEnable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAnimNotifyState_ChangeAutoSeEnable, 824039462);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAnimNotifyState_ChangeAutoSeEnable(Z_Construct_UClass_USQEXSEADAnimNotifyState_ChangeAutoSeEnable, &USQEXSEADAnimNotifyState_ChangeAutoSeEnable::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAnimNotifyState_ChangeAutoSeEnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAnimNotifyState_ChangeAutoSeEnable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
