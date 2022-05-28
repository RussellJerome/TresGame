// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXKlangBinary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXKlangBinary() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXKlangBinary_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXKlangBinary();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXKlangBinary::StaticRegisterNativesUSQEXKlangBinary()
	{
	}
	UClass* Z_Construct_UClass_USQEXKlangBinary_NoRegister()
	{
		return USQEXKlangBinary::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXKlangBinary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXKlangBinary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20080080u;


				UProperty* NewProp_DataArray = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DataArray, USQEXKlangBinary), 0x0010000000000000);
				UProperty* NewProp_DataArray_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DataArray, TEXT("DataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXKlangBinary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXKlangBinary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXKlangBinary.h"));
				MetaData->SetValue(NewProp_DataArray, TEXT("ModuleRelativePath"), TEXT("Public/SQEXKlangBinary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXKlangBinary, 3553637618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXKlangBinary(Z_Construct_UClass_USQEXKlangBinary, &USQEXKlangBinary::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXKlangBinary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXKlangBinary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
