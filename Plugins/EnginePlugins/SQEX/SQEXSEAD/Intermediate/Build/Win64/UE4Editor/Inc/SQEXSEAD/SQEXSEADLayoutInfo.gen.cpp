// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutInfo() {}
// Cross Module References
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SQEXSEAD_API UEnum* Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType();
// End Cross Module References
class UScriptStruct* FSQEXSEADLayoutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQEXSEAD_API uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo, Z_Construct_UPackage__Script_SQEXSEAD(), TEXT("SQEXSEADLayoutInfo"), sizeof(FSQEXSEADLayoutInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSQEXSEADLayoutInfo(FSQEXSEADLayoutInfo::StaticStruct, TEXT("/Script/SQEXSEAD"), TEXT("SQEXSEADLayoutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADLayoutInfo
{
	FScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADLayoutInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SQEXSEADLayoutInfo")),new UScriptStruct::TCppStructOps<FSQEXSEADLayoutInfo>);
	}
} ScriptStruct_SQEXSEAD_StaticRegisterNativesFSQEXSEADLayoutInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_SQEXSEAD();
		extern uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SQEXSEADLayoutInfo"), sizeof(FSQEXSEADLayoutInfo), Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SQEXSEADLayoutInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSQEXSEADLayoutInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_LayoutPointLocations = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LayoutPointLocations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(LayoutPointLocations, FSQEXSEADLayoutInfo), 0x0010000000000001);
			UProperty* NewProp_LayoutPointLocations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_LayoutPointLocations, TEXT("LayoutPointLocations"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OcclusionVolume = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OcclusionVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OcclusionVolume, FSQEXSEADLayoutInfo), 0x0010000000000001);
			UProperty* NewProp_OcclusionLPF = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OcclusionLPF"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OcclusionLPF, FSQEXSEADLayoutInfo), 0x0010000000000001);
			UProperty* NewProp_OuterRadius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("OuterRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(OuterRadius, FSQEXSEADLayoutInfo), 0x0010000000000001);
			UProperty* NewProp_InnerRadius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("InnerRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(InnerRadius, FSQEXSEADLayoutInfo), 0x0010000000000001);
			UProperty* NewProp_LayoutType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LayoutType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(LayoutType, FSQEXSEADLayoutInfo), 0x0010000000000001, Z_Construct_UEnum_SQEXSEAD_ESQEXSEADLayoutType());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
			MetaData->SetValue(NewProp_LayoutPointLocations, TEXT("Category"), TEXT("SQEXSEADLayoutInfo"));
			MetaData->SetValue(NewProp_LayoutPointLocations, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
			MetaData->SetValue(NewProp_OcclusionVolume, TEXT("Category"), TEXT("SQEXSEADLayoutInfo"));
			MetaData->SetValue(NewProp_OcclusionVolume, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
			MetaData->SetValue(NewProp_OcclusionLPF, TEXT("Category"), TEXT("SQEXSEADLayoutInfo"));
			MetaData->SetValue(NewProp_OcclusionLPF, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
			MetaData->SetValue(NewProp_OuterRadius, TEXT("Category"), TEXT("SQEXSEADLayoutInfo"));
			MetaData->SetValue(NewProp_OuterRadius, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
			MetaData->SetValue(NewProp_InnerRadius, TEXT("Category"), TEXT("SQEXSEADLayoutInfo"));
			MetaData->SetValue(NewProp_InnerRadius, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
			MetaData->SetValue(NewProp_LayoutType, TEXT("Category"), TEXT("SQEXSEADLayoutInfo"));
			MetaData->SetValue(NewProp_LayoutType, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSQEXSEADLayoutInfo_CRC() { return 3850919771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
