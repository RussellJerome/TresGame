// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EManaComponentTextureType.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentTextureType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
static UEnum* EManaComponentTextureType_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentTextureType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaComponentTextureType(EManaComponentTextureType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaComponentTextureType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaComponentTextureType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EManaComponentTextureType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EManaComponentTextureType::Texture_Y"), 0);
			EnumNames.Emplace(TEXT("EManaComponentTextureType::Texture_U"), 1);
			EnumNames.Emplace(TEXT("EManaComponentTextureType::Texture_V"), 2);
			EnumNames.Emplace(TEXT("EManaComponentTextureType::Texture_A"), 3);
			EnumNames.Emplace(TEXT("EManaComponentTextureType::Texture_UV"), 4);
			EnumNames.Emplace(TEXT("EManaComponentTextureType::Texture_MAX"), 5);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EManaComponentTextureType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EManaComponentTextureType.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Texture_MAX.Hidden"), TEXT(""));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_CRC() { return 1105196916U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
