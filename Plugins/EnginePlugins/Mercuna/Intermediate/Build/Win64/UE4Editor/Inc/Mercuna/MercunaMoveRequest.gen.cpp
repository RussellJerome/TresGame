// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaMoveRequest.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaMoveRequest() {}
// Cross Module References
	MERCUNA_API UScriptStruct* Z_Construct_UScriptStruct_FMercunaMoveRequest();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FMercunaMoveRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MERCUNA_API uint32 Get_Z_Construct_UScriptStruct_FMercunaMoveRequest_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMercunaMoveRequest, Z_Construct_UPackage__Script_Mercuna(), TEXT("MercunaMoveRequest"), sizeof(FMercunaMoveRequest), Get_Z_Construct_UScriptStruct_FMercunaMoveRequest_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMercunaMoveRequest(FMercunaMoveRequest::StaticStruct, TEXT("/Script/Mercuna"), TEXT("MercunaMoveRequest"), false, nullptr, nullptr);
static struct FScriptStruct_Mercuna_StaticRegisterNativesFMercunaMoveRequest
{
	FScriptStruct_Mercuna_StaticRegisterNativesFMercunaMoveRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MercunaMoveRequest")),new UScriptStruct::TCppStructOps<FMercunaMoveRequest>);
	}
} ScriptStruct_Mercuna_StaticRegisterNativesFMercunaMoveRequest;
	UScriptStruct* Z_Construct_UScriptStruct_FMercunaMoveRequest()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UScriptStruct_FMercunaMoveRequest_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MercunaMoveRequest"), sizeof(FMercunaMoveRequest), Get_Z_Construct_UScriptStruct_FMercunaMoveRequest_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaMoveRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMercunaMoveRequest>, EStructFlags(0x00000201));
			UProperty* NewProp_GoalActor = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("GoalActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GoalActor, FMercunaMoveRequest), 0x0010000000000000, Z_Construct_UClass_AActor_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveRequest.h"));
			MetaData->SetValue(NewProp_GoalActor, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveRequest.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMercunaMoveRequest_CRC() { return 81849107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
