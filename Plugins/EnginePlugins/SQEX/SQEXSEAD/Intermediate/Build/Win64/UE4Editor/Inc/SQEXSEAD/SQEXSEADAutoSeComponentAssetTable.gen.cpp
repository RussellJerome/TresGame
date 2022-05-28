// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentAssetTable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentAssetTable() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface();
// End Cross Module References
	void USQEXSEADAutoSeComponentAssetTable::StaticRegisterNativesUSQEXSEADAutoSeComponentAssetTable()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable_NoRegister()
	{
		return USQEXSEADAutoSeComponentAssetTable::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDataAsset();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAutoSeComponentAssetTable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_AuxSurfaceAssetTable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AuxSurfaceAssetTable"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AuxSurfaceAssetTable, USQEXSEADAutoSeComponentAssetTable), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADSurfaceAssetReferenceTableData());
				UProperty* NewProp_NonSurfaceInfos = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NonSurfaceInfos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NonSurfaceInfos, USQEXSEADAutoSeComponentAssetTable), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface());
				UProperty* NewProp_PerSurfaceInfos = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PerSurfaceInfos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PerSurfaceInfos, USQEXSEADAutoSeComponentAssetTable), 0x0010000000000001, Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface());
				NewProp_PerSurfaceInfos->ArrayDim = CPP_ARRAY_DIM(PerSurfaceInfos, USQEXSEADAutoSeComponentAssetTable);
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAutoSeComponentAssetTable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAutoSeComponentAssetTable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTable.h"));
				MetaData->SetValue(NewProp_AuxSurfaceAssetTable, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentAssetTable"));
				MetaData->SetValue(NewProp_AuxSurfaceAssetTable, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTable.h"));
				MetaData->SetValue(NewProp_NonSurfaceInfos, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentAssetTable"));
				MetaData->SetValue(NewProp_NonSurfaceInfos, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTable.h"));
				MetaData->SetValue(NewProp_PerSurfaceInfos, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentAssetTable"));
				MetaData->SetValue(NewProp_PerSurfaceInfos, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAutoSeComponentAssetTable, 147317426);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAutoSeComponentAssetTable(Z_Construct_UClass_USQEXSEADAutoSeComponentAssetTable, &USQEXSEADAutoSeComponentAssetTable::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAutoSeComponentAssetTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAutoSeComponentAssetTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
