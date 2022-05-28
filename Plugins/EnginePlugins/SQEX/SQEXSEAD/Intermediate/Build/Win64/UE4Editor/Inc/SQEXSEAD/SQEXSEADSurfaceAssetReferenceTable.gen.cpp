// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADSurfaceAssetReferenceTable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADSurfaceAssetReferenceTable() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData();
// End Cross Module References
	void USQEXSEADSurfaceAssetReferenceTable::StaticRegisterNativesUSQEXSEADSurfaceAssetReferenceTable()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable_NoRegister()
	{
		return USQEXSEADSurfaceAssetReferenceTable::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADSurfaceAssetReferenceTable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_TableData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TableData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TableData, USQEXSEADSurfaceAssetReferenceTable), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADSurfaceAssetReferenceTable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADSurfaceAssetReferenceTable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceTable.h"));
				MetaData->SetValue(NewProp_TableData, TEXT("Category"), TEXT("SQEXSEADSurfaceAssetReferenceTable"));
				MetaData->SetValue(NewProp_TableData, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADSurfaceAssetReferenceTable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADSurfaceAssetReferenceTable, 703633497);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADSurfaceAssetReferenceTable(Z_Construct_UClass_USQEXSEADSurfaceAssetReferenceTable, &USQEXSEADSurfaceAssetReferenceTable::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADSurfaceAssetReferenceTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADSurfaceAssetReferenceTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
