// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomSectionTemplate.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplate() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData();
// End Cross Module References
class UScriptStruct* FMovieSceneAtomSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("MovieSceneAtomSectionTemplate"), sizeof(FMovieSceneAtomSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAtomSectionTemplate(FMovieSceneAtomSectionTemplate::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("MovieSceneAtomSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplate
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneAtomSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFMovieSceneAtomSectionTemplate;
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAtomSectionTemplate"), sizeof(FMovieSceneAtomSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MovieSceneAtomSectionTemplate"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FMovieSceneEvalTemplate(), new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>, EStructFlags(0x00000005));
			UProperty* NewProp_AtomData = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AtomData"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(AtomData, FMovieSceneAtomSectionTemplate), 0x0010000000000000, Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplateData());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplate.h"));
			MetaData->SetValue(NewProp_AtomData, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSectionTemplate.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_CRC() { return 507973562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
