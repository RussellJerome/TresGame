// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MerSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMerSettings() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UMerSettings_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UMerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	void UMerSettings::StaticRegisterNativesUMerSettings()
	{
	}
	UClass* Z_Construct_UClass_UMerSettings_NoRegister()
	{
		return UMerSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UMerSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMerSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_MaxPawnRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxPawnRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxPawnRadius, UMerSettings), 0x0010000000004001);
				UProperty* NewProp_MinPawnRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinPawnRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MinPawnRadius, UMerSettings), 0x0010000000004001);
				UProperty* NewProp_CellSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CellSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CellSize, UMerSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAlwaysShowErrors, UMerSettings);
				UProperty* NewProp_bAlwaysShowErrors = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bAlwaysShowErrors"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAlwaysShowErrors, UMerSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bAlwaysShowErrors, UMerSettings), sizeof(bool), true);
				UProperty* NewProp_DebugLengthScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugLengthScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DebugLengthScale, UMerSettings), 0x0010000000004001);
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UMerSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MerSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MerSettings.h"));
				MetaData->SetValue(NewProp_MaxPawnRadius, TEXT("Category"), TEXT("MerSettings"));
				MetaData->SetValue(NewProp_MaxPawnRadius, TEXT("ModuleRelativePath"), TEXT("Public/MerSettings.h"));
				MetaData->SetValue(NewProp_MinPawnRadius, TEXT("Category"), TEXT("MerSettings"));
				MetaData->SetValue(NewProp_MinPawnRadius, TEXT("ModuleRelativePath"), TEXT("Public/MerSettings.h"));
				MetaData->SetValue(NewProp_CellSize, TEXT("Category"), TEXT("MerSettings"));
				MetaData->SetValue(NewProp_CellSize, TEXT("ModuleRelativePath"), TEXT("Public/MerSettings.h"));
				MetaData->SetValue(NewProp_bAlwaysShowErrors, TEXT("Category"), TEXT("MerSettings"));
				MetaData->SetValue(NewProp_bAlwaysShowErrors, TEXT("ModuleRelativePath"), TEXT("Public/MerSettings.h"));
				MetaData->SetValue(NewProp_DebugLengthScale, TEXT("Category"), TEXT("MerSettings"));
				MetaData->SetValue(NewProp_DebugLengthScale, TEXT("ModuleRelativePath"), TEXT("Public/MerSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMerSettings, 440383892);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMerSettings(Z_Construct_UClass_UMerSettings, &UMerSettings::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
