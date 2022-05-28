// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAutoSeAssetLoaderAssets.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAutoSeAssetLoaderAssets() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FSQEXSEADAutoSeAssetLoaderAssets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADAutoSeAssetLoaderAssets"), sizeof(FSQEXSEADAutoSeAssetLoaderAssets), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets(FSQEXSEADAutoSeAssetLoaderAssets::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADAutoSeAssetLoaderAssets"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeAssetLoaderAssets
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeAssetLoaderAssets()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADAutoSeAssetLoaderAssets")),new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeAssetLoaderAssets>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADAutoSeAssetLoaderAssets;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADAutoSeAssetLoaderAssets"), sizeof(FSQEXSEADAutoSeAssetLoaderAssets), Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADAutoSeAssetLoaderAssets"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADAutoSeAssetLoaderAssets>, EStructFlags(0x00000201));
			UProperty* NewProp_Assets = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Assets"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Assets, FSQEXSEADAutoSeAssetLoaderAssets), 0x0010000000010001);
			UProperty* NewProp_Assets_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Assets, TEXT("Assets"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USoundBase_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAssetLoaderAssets.h"));
			MetaData->SetValue(NewProp_Assets, TEXT("Category"), TEXT("SQEXSEADAutoSeAssetLoaderAssets"));
			MetaData->SetValue(NewProp_Assets, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAutoSeAssetLoaderAssets.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADAutoSeAssetLoaderAssets_CRC() { return 639749164U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
