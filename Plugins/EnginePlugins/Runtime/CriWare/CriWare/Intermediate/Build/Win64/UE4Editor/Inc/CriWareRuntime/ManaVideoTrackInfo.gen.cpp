// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaVideoTrackInfo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaVideoTrackInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
class UScriptStruct* FManaVideoTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaVideoTrackInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaVideoTrackInfo"), sizeof(FManaVideoTrackInfo), Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaVideoTrackInfo(FManaVideoTrackInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaVideoTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManaVideoTrackInfo")),new UScriptStruct::TCppStructOps<FManaVideoTrackInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaVideoTrackInfo"), sizeof(FManaVideoTrackInfo), Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ManaVideoTrackInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FManaVideoTrackInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_Type = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Type"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Type, FManaVideoTrackInfo), 0x0010000000020015, Z_Construct_UEnum_CriWareRuntime_EManaMovieType());
			UProperty* NewProp_Type_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Type, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsAlphaMovie, FManaVideoTrackInfo);
			UProperty* NewProp_bIsAlphaMovie = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bIsAlphaMovie"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsAlphaMovie, FManaVideoTrackInfo), 0x0010000000020015, CPP_BOOL_PROPERTY_BITMASK(bIsAlphaMovie, FManaVideoTrackInfo), sizeof(bool), true);
			UProperty* NewProp_TotalFrames = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TotalFrames"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(TotalFrames, FManaVideoTrackInfo), 0x0010000000020015);
			UProperty* NewProp_FrameRate = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FrameRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FrameRate, FManaVideoTrackInfo), 0x0010000000020015);
			UProperty* NewProp_DisplayDimension = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DisplayDimension"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DisplayDimension, FManaVideoTrackInfo), 0x0010000000020015, Z_Construct_UScriptStruct_FIntPoint());
			UProperty* NewProp_TextureDimension = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TextureDimension"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TextureDimension, FManaVideoTrackInfo), 0x0010000000020015, Z_Construct_UScriptStruct_FIntPoint());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
			MetaData->SetValue(NewProp_Type, TEXT("Category"), TEXT("ManaVideoTrackInfo"));
			MetaData->SetValue(NewProp_Type, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
			MetaData->SetValue(NewProp_bIsAlphaMovie, TEXT("Category"), TEXT("ManaVideoTrackInfo"));
			MetaData->SetValue(NewProp_bIsAlphaMovie, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
			MetaData->SetValue(NewProp_TotalFrames, TEXT("Category"), TEXT("ManaVideoTrackInfo"));
			MetaData->SetValue(NewProp_TotalFrames, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
			MetaData->SetValue(NewProp_FrameRate, TEXT("Category"), TEXT("ManaVideoTrackInfo"));
			MetaData->SetValue(NewProp_FrameRate, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
			MetaData->SetValue(NewProp_DisplayDimension, TEXT("Category"), TEXT("ManaVideoTrackInfo"));
			MetaData->SetValue(NewProp_DisplayDimension, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
			MetaData->SetValue(NewProp_TextureDimension, TEXT("Category"), TEXT("ManaVideoTrackInfo"));
			MetaData->SetValue(NewProp_TextureDimension, TEXT("ModuleRelativePath"), TEXT("Public/ManaVideoTrackInfo.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC() { return 2612458537U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
