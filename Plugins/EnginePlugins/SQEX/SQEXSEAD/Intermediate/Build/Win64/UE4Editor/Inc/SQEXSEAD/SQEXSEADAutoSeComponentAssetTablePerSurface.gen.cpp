// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeComponentAssetTablePerSurface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeComponentAssetTablePerSurface() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FStringAssetReference();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeComponentAssetTablePerSurface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeComponentAssetTablePerSurface"), sizeof(FSQEXSEADAutoSeComponentAssetTablePerSurface), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface(FSQEXSEADAutoSeComponentAssetTablePerSurface::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeComponentAssetTablePerSurface"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentAssetTablePerSurface
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentAssetTablePerSurface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeComponentAssetTablePerSurface")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentAssetTablePerSurface>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeComponentAssetTablePerSurface;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeComponentAssetTablePerSurface"), sizeof(FSQEXSEADAutoSeComponentAssetTablePerSurface), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeComponentAssetTablePerSurface"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeComponentAssetTablePerSurface>, EStructFlags(0x00000201));
			UProperty* NewProp_SoundAssetPaths = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SoundAssetPaths"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SoundAssetPaths, FSQEXSEADAutoSeComponentAssetTablePerSurface), 0x0010000000000001, Z_Construct_UScriptStruct_FStringAssetReference());
			NewProp_SoundAssetPaths->ArrayDim = CPP_ARRAY_DIM(SoundAssetPaths, FSQEXSEADAutoSeComponentAssetTablePerSurface);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTablePerSurface.h"));
			MetaData->SetValue(NewProp_SoundAssetPaths, TEXT("Category"), TEXT("SQEXSEADAutoSeComponentAssetTablePerSurface"));
			MetaData->SetValue(NewProp_SoundAssetPaths, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeComponentAssetTablePerSurface.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeComponentAssetTablePerSurface_CRC() { return 164650779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
