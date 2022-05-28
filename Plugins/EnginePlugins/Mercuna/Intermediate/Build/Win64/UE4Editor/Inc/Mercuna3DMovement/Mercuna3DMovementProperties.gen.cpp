// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Mercuna3DMovementProperties.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercuna3DMovementProperties() {}
// Cross Module References
	MERCUNA3DMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMercuna3DMovementProperties();
	UPackage* Z_Construct_UPackage__Script_Mercuna3DMovement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FMercuna3DMovementProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MERCUNA3DMOVEMENT_API uint32 Get_Z_Construct_UScriptStruct_FMercuna3DMovementProperties_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMercuna3DMovementProperties, Z_Construct_UPackage__Script_Mercuna3DMovement(), TEXT("Mercuna3DMovementProperties"), sizeof(FMercuna3DMovementProperties), Get_Z_Construct_UScriptStruct_FMercuna3DMovementProperties_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMercuna3DMovementProperties(FMercuna3DMovementProperties::StaticStruct, TEXT("/Script/Mercuna3DMovement"), TEXT("Mercuna3DMovementProperties"), false, nullptr, nullptr);
static struct FScriptStruct_Mercuna3DMovement_StaticRegisterNativesFMercuna3DMovementProperties
{
	FScriptStruct_Mercuna3DMovement_StaticRegisterNativesFMercuna3DMovementProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Mercuna3DMovementProperties")),new UScriptStruct::TCppStructOps<FMercuna3DMovementProperties>);
	}
} ScriptStruct_Mercuna3DMovement_StaticRegisterNativesFMercuna3DMovementProperties;
	UScriptStruct* Z_Construct_UScriptStruct_FMercuna3DMovementProperties()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Mercuna3DMovement();
		extern uint32 Get_Z_Construct_UScriptStruct_FMercuna3DMovementProperties_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Mercuna3DMovementProperties"), sizeof(FMercuna3DMovementProperties), Get_Z_Construct_UScriptStruct_FMercuna3DMovementProperties_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Mercuna3DMovementProperties"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMercuna3DMovementProperties>, EStructFlags(0x00000001));
			UProperty* NewProp_MaxAngAccel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxAngAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxAngAccel, FMercuna3DMovementProperties), 0x0010000000010015);
			UProperty* NewProp_MaxAngSpeed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxAngSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxAngSpeed, FMercuna3DMovementProperties), 0x0010000000010015);
			UProperty* NewProp_MaxAccel = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxAccel"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MaxAccel, FMercuna3DMovementProperties), 0x0010000000010015, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_MaxSpeed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MaxSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxSpeed, FMercuna3DMovementProperties), 0x0010000000010015);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementProperties.h"));
			MetaData->SetValue(NewProp_MaxAngAccel, TEXT("Category"), TEXT("Mercuna3DMovementProperties"));
			MetaData->SetValue(NewProp_MaxAngAccel, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementProperties.h"));
			MetaData->SetValue(NewProp_MaxAngSpeed, TEXT("Category"), TEXT("Mercuna3DMovementProperties"));
			MetaData->SetValue(NewProp_MaxAngSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementProperties.h"));
			MetaData->SetValue(NewProp_MaxAccel, TEXT("Category"), TEXT("Mercuna3DMovementProperties"));
			MetaData->SetValue(NewProp_MaxAccel, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementProperties.h"));
			MetaData->SetValue(NewProp_MaxSpeed, TEXT("Category"), TEXT("Mercuna3DMovementProperties"));
			MetaData->SetValue(NewProp_MaxSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementProperties.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMercuna3DMovementProperties_CRC() { return 3049777170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
