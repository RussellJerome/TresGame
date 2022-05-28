// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomSectionTemplateData.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplateData() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FMovieSceneAtomSectionTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("MovieSceneAtomSectionTemplateData"), sizeof(FMovieSceneAtomSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAtomSectionTemplateData(FMovieSceneAtomSectionTemplateData::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("MovieSceneAtomSectionTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplateData
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAtomSectionTemplateData")),new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplateData>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplateData;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAtomSectionTemplateData"), sizeof(FMovieSceneAtomSectionTemplateData), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MovieSceneAtomSectionTemplateData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplateData>, EStructFlags(0x00000001));
			UProperty* NewProp_RowIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RowIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RowIndex, FMovieSceneAtomSectionTemplateData), 0x0010000000000000);
			UProperty* NewProp_AtomVolumeCurve = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AtomVolumeCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AtomVolumeCurve, FMovieSceneAtomSectionTemplateData), 0x0010000000000000, Z_Construct_UScriptStruct_FRichCurve());
			UProperty* NewProp_AtomPitchMultiplierCurve = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AtomPitchMultiplierCurve"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AtomPitchMultiplierCurve, FMovieSceneAtomSectionTemplateData), 0x0010000000000000, Z_Construct_UScriptStruct_FRichCurve());
			UProperty* NewProp_AtomRange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AtomRange"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AtomRange, FMovieSceneAtomSectionTemplateData), 0x0010000000000000, Z_Construct_UScriptStruct_FFloatRange());
			UProperty* NewProp_AtomStartOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AtomStartOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AtomStartOffset, FMovieSceneAtomSectionTemplateData), 0x0010000000000000);
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, FMovieSceneAtomSectionTemplateData), 0x0010000000000000, Z_Construct_UClass_USoundAtomCue_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
			MetaData->SetValue(NewProp_RowIndex, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
			MetaData->SetValue(NewProp_AtomVolumeCurve, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
			MetaData->SetValue(NewProp_AtomPitchMultiplierCurve, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
			MetaData->SetValue(NewProp_AtomRange, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
			MetaData->SetValue(NewProp_AtomStartOffset, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
			MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplateData.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData_CRC() { return 1148011613U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
