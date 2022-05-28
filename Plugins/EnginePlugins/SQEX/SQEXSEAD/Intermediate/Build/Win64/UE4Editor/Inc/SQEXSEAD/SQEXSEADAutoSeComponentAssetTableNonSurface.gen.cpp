// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentAssetTableNonSurface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentAssetTableNonSurface() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentAssetTableNonSurface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentAssetTableNonSurface"), sizeof(FSQEXSEADAutoSeComponentAssetTableNonSurface), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface(FSQEXSEADAutoSeComponentAssetTableNonSurface::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentAssetTableNonSurface"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentAssetTableNonSurface
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentAssetTableNonSurface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentAssetTableNonSurface")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentAssetTableNonSurface>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentAssetTableNonSurface;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentAssetTableNonSurface"), sizeof(FSQEXSEADAutoSeComponentAssetTableNonSurface), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentAssetTableNonSurface"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentAssetTableNonSurface>, EStructFlags(0x00000201));
			UProperty* NewProp_SoundAssetPaths = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SoundAssetPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SoundAssetPaths, FSQEXSEADAutoSeComponentAssetTableNonSurface), 0x0010000000000001, Z_Construct_UScriptStruct_FStringAssetReference());
			NewProp_SoundAssetPaths->ArrayDim = CPP_ARRAY_DIM(SoundAssetPaths, FSQEXSEADAutoSeComponentAssetTableNonSurface);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTableNonSurface.h"));
			MetaData->SetValue(NewProp_SoundAssetPaths, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentAssetTableNonSurface"));
			MetaData->SetValue(NewProp_SoundAssetPaths, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTableNonSurface.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTableNonSurface_CRC() { return 1177658022U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
