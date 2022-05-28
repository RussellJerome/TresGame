// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniToolDescription.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniToolDescription() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolDescription();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
// End Cross Module References
class UScriptStruct* FHoudiniToolDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HOUDINIENGINERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FHoudiniToolDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniToolDescription, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniToolDescription"), sizeof(FHoudiniToolDescription), Get_Z_Construct_UScriptStruct_FHoudiniToolDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHoudiniToolDescription(FHoudiniToolDescription::StaticStruct, TEXT("/Script/HoudiniEngineRuntime"), TEXT("HoudiniToolDescription"), false, nullptr, nullptr);
static struct FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniToolDescription
{
	FScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniToolDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HoudiniToolDescription")),new UScriptStruct::TCppStructOps<FHoudiniToolDescription>);
	}
} ScriptStruct_HoudiniEngineRuntime_StaticRegisterNativesFHoudiniToolDescription;
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolDescription()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FHoudiniToolDescription_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HoudiniToolDescription"), sizeof(FHoudiniToolDescription), Get_Z_Construct_UScriptStruct_FHoudiniToolDescription_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HoudiniToolDescription"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FHoudiniToolDescription>, EStructFlags(0x00000001));
			UProperty* NewProp_HelpURL = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HelpURL"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HelpURL, FHoudiniToolDescription), 0x0010000000000001);
			UProperty* NewProp_HoudiniAsset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HoudiniAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HoudiniAsset, FHoudiniToolDescription), 0x0010000000000001, Z_Construct_UClass_UHoudiniAsset_NoRegister());
			UProperty* NewProp_IconPath = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IconPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IconPath, FHoudiniToolDescription), 0x0010000000000001, Z_Construct_UScriptStruct_FFilePath());
			UProperty* NewProp_ToolTip = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ToolTip"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ToolTip, FHoudiniToolDescription), 0x0010000000000001);
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FHoudiniToolDescription), 0x0010000000000001, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Name = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Name, FHoudiniToolDescription), 0x0010000000000001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
			MetaData->SetValue(NewProp_HelpURL, TEXT("Category"), TEXT("HoudiniToolDescription"));
			MetaData->SetValue(NewProp_HelpURL, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
			MetaData->SetValue(NewProp_HoudiniAsset, TEXT("Category"), TEXT("HoudiniToolDescription"));
			MetaData->SetValue(NewProp_HoudiniAsset, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
			MetaData->SetValue(NewProp_IconPath, TEXT("Category"), TEXT("HoudiniToolDescription"));
			MetaData->SetValue(NewProp_IconPath, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
			MetaData->SetValue(NewProp_ToolTip, TEXT("Category"), TEXT("HoudiniToolDescription"));
			MetaData->SetValue(NewProp_ToolTip, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("HoudiniToolDescription"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
			MetaData->SetValue(NewProp_Name, TEXT("Category"), TEXT("HoudiniToolDescription"));
			MetaData->SetValue(NewProp_Name, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniToolDescription.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHoudiniToolDescription_CRC() { return 3652627970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
