// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EHoudiniRuntimeSettingsSessionType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniRuntimeSettingsSessionType() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
static UEnum* EHoudiniRuntimeSettingsSessionType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRuntimeSettingsSessionType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRuntimeSettingsSessionType(EHoudiniRuntimeSettingsSessionType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRuntimeSettingsSessionType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		extern uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRuntimeSettingsSessionType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EHoudiniRuntimeSettingsSessionType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("HRSST_InProcess"), 0);
			EnumNames.Emplace(TEXT("HRSST_Socket"), 1);
			EnumNames.Emplace(TEXT("HRSST_NamedPipe"), 2);
			EnumNames.Emplace(TEXT("HRSST_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("EHoudiniRuntimeSettingsSessionType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("HRSST_MAX.Hidden"), TEXT(""));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EHoudiniRuntimeSettingsSessionType.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType_CRC() { return 4260281881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
