// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSurfaceNameTable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSurfaceNameTable() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSurfaceNameTable_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSurfaceNameTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
// End Cross Module References
	void USQEXSEADSurfaceNameTable::StaticRegisterNativesUSQEXSEADSurfaceNameTable()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADSurfaceNameTable_NoRegister()
	{
		return USQEXSEADSurfaceNameTable::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADSurfaceNameTable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADSurfaceNameTable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_Names = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Names"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(Names, USQEXSEADSurfaceNameTable), 0x0010000000000001);
				NewProp_Names->ArrayDim = CPP_ARRAY_DIM(Names, USQEXSEADSurfaceNameTable);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADSurfaceNameTable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADSurfaceNameTable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceNameTable.h"));
				MetaData->SetValue(NewProp_Names, TEXT("Category"), TEXT("SQEXSEADSurfaceNameTable"));
				MetaData->SetValue(NewProp_Names, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceNameTable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADSurfaceNameTable, 1096835940);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADSurfaceNameTable(Z_Construct_UClass_USQEXSEADSurfaceNameTable, &USQEXSEADSurfaceNameTable::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADSurfaceNameTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADSurfaceNameTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
