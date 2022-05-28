// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EHoudiniVertexAttributeDataType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniVertexAttributeDataType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniVertexAttributeDataType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
static UEnum* EHoudiniVertexAttributeDataType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniVertexAttributeDataType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniVertexAttributeDataType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniVertexAttributeDataType(EHoudiniVertexAttributeDataType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniVertexAttributeDataType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniVertexAttributeDataType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		extern uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniVertexAttributeDataType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniVertexAttributeDataType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniVertexAttributeDataType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHoudiniVertexAttributeDataType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("VADT_Float"), 0);
			EnumNames.Emplace(TEXT("VADT_Int32"), 1);
			EnumNames.Emplace(TEXT("VADT_Bool"), 2);
			EnumNames.Emplace(TEXT("VADT_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EHoudiniVertexAttributeDataType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EHoudiniVertexAttributeDataType.h"));
			MetaData->SetValue(ReturnEnum, TEXT("VADT_MAX.Hidden"), TEXT(""));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniVertexAttributeDataType_CRC() { return 1767817235U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
