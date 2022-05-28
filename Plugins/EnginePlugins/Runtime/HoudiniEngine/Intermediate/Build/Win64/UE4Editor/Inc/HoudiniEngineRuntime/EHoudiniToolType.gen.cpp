// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EHoudiniToolType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniToolType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
static UEnum* EHoudiniToolType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniToolType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniToolType(EHoudiniToolType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniToolType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		extern uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniToolType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHoudiniToolType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHoudiniToolType::HTOOLTYPE_GENERATOR"), 0);
			EnumNames.Emplace(TEXT("EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE"), 1);
			EnumNames.Emplace(TEXT("EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI"), 2);
			EnumNames.Emplace(TEXT("EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH"), 3);
			EnumNames.Emplace(TEXT("EHoudiniToolType::HTOOLTYPE_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHoudiniToolType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("HTOOLTYPE_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EHoudiniToolType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniToolType_CRC() { return 27807765U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
