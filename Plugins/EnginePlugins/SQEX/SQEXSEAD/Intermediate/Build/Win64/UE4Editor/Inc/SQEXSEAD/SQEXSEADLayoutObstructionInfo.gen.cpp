// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutObstructionInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutObstructionInfo() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutObstructionType();
// End Cross Module References
class UScriptStruct* FSQEXSEADLayoutObstructionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADLayoutObstructionInfo"), sizeof(FSQEXSEADLayoutObstructionInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADLayoutObstructionInfo(FSQEXSEADLayoutObstructionInfo::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADLayoutObstructionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADLayoutObstructionInfo
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADLayoutObstructionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADLayoutObstructionInfo")),new UScriptStruct::TCppStructOps<FSQEXSEADLayoutObstructionInfo>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADLayoutObstructionInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADLayoutObstructionInfo"), sizeof(FSQEXSEADLayoutObstructionInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADLayoutObstructionInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADLayoutObstructionInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_LinkedMeshActorList = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LinkedMeshActorList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LinkedMeshActorList, FSQEXSEADLayoutObstructionInfo), 0x0010000000000001);
			UProperty* NewProp_LinkedMeshActorList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LinkedMeshActorList, TEXT("LinkedMeshActorList"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AStaticMeshActor_NoRegister());
			UProperty* NewProp_ObstructionPointLocations = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObstructionPointLocations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ObstructionPointLocations, FSQEXSEADLayoutObstructionInfo), 0x0010000000000001);
			UProperty* NewProp_ObstructionPointLocations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ObstructionPointLocations, TEXT("ObstructionPointLocations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_ObstructionType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ObstructionType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ObstructionType, FSQEXSEADLayoutObstructionInfo), 0x0010000000000001, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutObstructionType());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstructionInfo.h"));
			MetaData->SetValue(NewProp_LinkedMeshActorList, TEXT("Category"), TEXT("SQEXSEADLayoutObstructionInfo"));
			MetaData->SetValue(NewProp_LinkedMeshActorList, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstructionInfo.h"));
			MetaData->SetValue(NewProp_ObstructionPointLocations, TEXT("Category"), TEXT("SQEXSEADLayoutObstructionInfo"));
			MetaData->SetValue(NewProp_ObstructionPointLocations, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstructionInfo.h"));
			MetaData->SetValue(NewProp_ObstructionType, TEXT("Category"), TEXT("SQEXSEADLayoutObstructionInfo"));
			MetaData->SetValue(NewProp_ObstructionType, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstructionInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutObstructionInfo_CRC() { return 2832615690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
