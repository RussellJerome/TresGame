// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EMerOctreeDebugDrawMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMerOctreeDebugDrawMode() {}
// Cross Module References
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
static UEnum* EMerOctreeDebugDrawMode_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode, Z_Construct_UPackage__Script_Mercuna(), TEXT("EMerOctreeDebugDrawMode"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMerOctreeDebugDrawMode(EMerOctreeDebugDrawMode_StaticEnum, TEXT("/Script/Mercuna"), TEXT("EMerOctreeDebugDrawMode"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna();
		extern uint32 Get_Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMerOctreeDebugDrawMode"), 0, Get_Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMerOctreeDebugDrawMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::DISABLED"), 0);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::UNNAVIGABLE"), 1);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::NAVIGABLE"), 2);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::BOTH"), 3);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::REGION"), 4);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::REACHABLE"), 5);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::PATHFIND"), 6);
			EnumNames.Emplace(TEXT("EMerOctreeDebugDrawMode::EMerOctreeDebugDrawMode_MAX"), 7);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EMerOctreeDebugDrawMode");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/EMerOctreeDebugDrawMode.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode_CRC() { return 983168118U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
