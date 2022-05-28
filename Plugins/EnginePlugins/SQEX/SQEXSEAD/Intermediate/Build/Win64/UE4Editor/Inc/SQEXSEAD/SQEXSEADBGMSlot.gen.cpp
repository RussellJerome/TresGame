// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADBGMSlot.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADBGMSlot() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlot();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEAD_BGM_NoRegister();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState();
// End Cross Module References
	void USQEXSEADBGMSlot::StaticRegisterNativesUSQEXSEADBGMSlot()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister()
	{
		return USQEXSEADBGMSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADBGMSlot()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADBGMSlot::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_PrevBGM_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PrevBGM_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PrevBGM_, USQEXSEADBGMSlot), 0x0040000000000000, Z_Construct_UClass_USQEXSEAD_BGM_NoRegister());
				UProperty* NewProp_BGM_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BGM_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BGM_, USQEXSEADBGMSlot), 0x0040000000000000, Z_Construct_UClass_USQEXSEAD_BGM_NoRegister());
				UProperty* NewProp_DefaultOptions_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultOptions_"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DefaultOptions_, USQEXSEADBGMSlot), 0x0040000000000000, Z_Construct_UScriptStruct_FSQEXSEAD_BGMOptions());
				UProperty* NewProp_State = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("State"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(State, USQEXSEADBGMSlot), 0x0010000000000000, Z_Construct_UEnum_SQEXSEAD_ESQEXSEAD_BGMState());
				UProperty* NewProp_State_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_State, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADBGMSlot> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADBGMSlot.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlot.h"));
				MetaData->SetValue(NewProp_PrevBGM_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlot.h"));
				MetaData->SetValue(NewProp_BGM_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlot.h"));
				MetaData->SetValue(NewProp_DefaultOptions_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlot.h"));
				MetaData->SetValue(NewProp_State, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMSlot.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADBGMSlot, 1256730775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADBGMSlot(Z_Construct_UClass_USQEXSEADBGMSlot, &USQEXSEADBGMSlot::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADBGMSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADBGMSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
