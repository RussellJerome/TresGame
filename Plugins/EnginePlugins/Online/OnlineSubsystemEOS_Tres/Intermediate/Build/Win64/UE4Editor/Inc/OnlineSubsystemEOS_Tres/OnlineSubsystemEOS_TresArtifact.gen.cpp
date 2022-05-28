// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OnlineSubsystemEOS_TresArtifact.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemEOS_TresArtifact() {}
// Cross Module References
	ONLINESUBSYSTEMEOS_TRES_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEOS_Tres();
// End Cross Module References
class UScriptStruct* FOnlineSubsystemEOS_TresArtifact::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMEOS_TRES_API uint32 Get_Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact, Z_Construct_UPackage__Script_OnlineSubsystemEOS_Tres(), TEXT("OnlineSubsystemEOS_TresArtifact"), sizeof(FOnlineSubsystemEOS_TresArtifact), Get_Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact(FOnlineSubsystemEOS_TresArtifact::StaticStruct, TEXT("/Script/OnlineSubsystemEOS_Tres"), TEXT("OnlineSubsystemEOS_TresArtifact"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemEOS_Tres_StaticRegisterNativesFOnlineSubsystemEOS_TresArtifact
{
	FScriptStruct_OnlineSubsystemEOS_Tres_StaticRegisterNativesFOnlineSubsystemEOS_TresArtifact()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnlineSubsystemEOS_TresArtifact")),new UScriptStruct::TCppStructOps<FOnlineSubsystemEOS_TresArtifact>);
	}
} ScriptStruct_OnlineSubsystemEOS_Tres_StaticRegisterNativesFOnlineSubsystemEOS_TresArtifact;
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemEOS_Tres();
		extern uint32 Get_Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnlineSubsystemEOS_TresArtifact"), sizeof(FOnlineSubsystemEOS_TresArtifact), Get_Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnlineSubsystemEOS_TresArtifact"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FOnlineSubsystemEOS_TresArtifact>, EStructFlags(0x00000001));
			UProperty* NewProp_m_CatalogItemID = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("m_CatalogItemID"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(m_CatalogItemID, FOnlineSubsystemEOS_TresArtifact), 0x0010000000000001);
			UProperty* NewProp_m_Id = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("m_Id"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(m_Id, FOnlineSubsystemEOS_TresArtifact), 0x0010000000000001);
			UProperty* NewProp_m_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("m_Name"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(m_Name, FOnlineSubsystemEOS_TresArtifact), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresArtifact.h"));
			MetaData->SetValue(NewProp_m_CatalogItemID, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresArtifact"));
			MetaData->SetValue(NewProp_m_CatalogItemID, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresArtifact.h"));
			MetaData->SetValue(NewProp_m_Id, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresArtifact"));
			MetaData->SetValue(NewProp_m_Id, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresArtifact.h"));
			MetaData->SetValue(NewProp_m_Name, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresArtifact"));
			MetaData->SetValue(NewProp_m_Name, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresArtifact.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact_CRC() { return 2102042543U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
