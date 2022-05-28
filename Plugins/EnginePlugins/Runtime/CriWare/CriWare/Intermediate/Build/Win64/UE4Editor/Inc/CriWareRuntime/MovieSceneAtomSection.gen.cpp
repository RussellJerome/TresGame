// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneAtomSection.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSection() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMovieSceneAtomSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	void UMovieSceneAtomSection::StaticRegisterNativesUMovieSceneAtomSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomSection()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMovieSceneSection();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMovieSceneAtomSection::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20280080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuppressSubtitles, UMovieSceneAtomSection);
				UProperty* NewProp_bSuppressSubtitles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bSuppressSubtitles"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuppressSubtitles, UMovieSceneAtomSection), 0x0040000000000001, CPP_BOOL_PROPERTY_BITMASK(bSuppressSubtitles, UMovieSceneAtomSection), sizeof(bool), true);
				UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(PitchMultiplier, UMovieSceneAtomSection), 0x0040000000000001, Z_Construct_UScriptStruct_FRichCurve());
				UProperty* NewProp_SoundVolume = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SoundVolume, UMovieSceneAtomSection), 0x0040000000000001, Z_Construct_UScriptStruct_FRichCurve());
				UProperty* NewProp_StartOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartOffset, UMovieSceneAtomSection), 0x0040000000000001);
				UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, UMovieSceneAtomSection), 0x0040000000000001, Z_Construct_UClass_USoundAtomCue_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UMovieSceneAtomSection> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MovieSceneAtomSection.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSection.h"));
				MetaData->SetValue(NewProp_bSuppressSubtitles, TEXT("Category"), TEXT("MovieSceneAtomSection"));
				MetaData->SetValue(NewProp_bSuppressSubtitles, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSection.h"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("Category"), TEXT("MovieSceneAtomSection"));
				MetaData->SetValue(NewProp_PitchMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSection.h"));
				MetaData->SetValue(NewProp_SoundVolume, TEXT("Category"), TEXT("MovieSceneAtomSection"));
				MetaData->SetValue(NewProp_SoundVolume, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSection.h"));
				MetaData->SetValue(NewProp_StartOffset, TEXT("Category"), TEXT("MovieSceneAtomSection"));
				MetaData->SetValue(NewProp_StartOffset, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSection.h"));
				MetaData->SetValue(NewProp_Sound, TEXT("Category"), TEXT("MovieSceneAtomSection"));
				MetaData->SetValue(NewProp_Sound, TEXT("ModuleRelativePath"), TEXT("Public/MovieSceneAtomSection.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAtomSection, 703787310);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAtomSection(Z_Construct_UClass_UMovieSceneAtomSection, &UMovieSceneAtomSection::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMovieSceneAtomSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
