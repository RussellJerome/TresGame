// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaEventPointInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaEventPointInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FManaEventPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaEventPointInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaEventPointInfo"), sizeof(FManaEventPointInfo), Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaEventPointInfo(FManaEventPointInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaEventPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaEventPointInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaEventPointInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManaEventPointInfo")),new UScriptStruct::TCppStructOps<FManaEventPointInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaEventPointInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaEventPointInfo"), sizeof(FManaEventPointInfo), Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ManaEventPointInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FManaEventPointInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_Parameter = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Parameter"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Parameter, FManaEventPointInfo), 0x0010000000020015);
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Type, FManaEventPointInfo), 0x0010000000020015);
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FManaEventPointInfo), 0x0010000000020015);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FManaEventPointInfo), 0x0010000000020015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ManaEventPointInfo.h"));
			MetaData->SetValue(NewProp_Parameter, TEXT("Category"), TEXT("ManaEventPointInfo"));
			MetaData->SetValue(NewProp_Parameter, TEXT("ModuleRelativePath"), TEXT("Public/ManaEventPointInfo.h"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("ManaEventPointInfo"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/ManaEventPointInfo.h"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("ManaEventPointInfo"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/ManaEventPointInfo.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("ManaEventPointInfo"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/ManaEventPointInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC() { return 2230389104U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
