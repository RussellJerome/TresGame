// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EHoudiniHandleType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniHandleType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
static UEnum* EHoudiniHandleType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniHandleType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniHandleType(EHoudiniHandleType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniHandleType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		extern uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniHandleType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHoudiniHandleType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EHoudiniHandleType::Xform"), 0);
			EnumNames.Emplace(TEXT("EHoudiniHandleType::Bounder"), 1);
			EnumNames.Emplace(TEXT("EHoudiniHandleType::Unsupported"), 2);
			EnumNames.Emplace(TEXT("EHoudiniHandleType::EHoudiniHandleType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EHoudiniHandleType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EHoudiniHandleType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniHandleType_CRC() { return 1062899444U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
