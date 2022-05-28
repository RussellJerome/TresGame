// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriWarePluginSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWarePluginSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UCriWarePluginSettings::StaticRegisterNativesUCriWarePluginSettings()
	{
	}
	UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister()
	{
		return UCriWarePluginSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriWarePluginSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UCriWarePluginSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_StartupMovies = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartupMovies"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(StartupMovies, UCriWarePluginSettings), 0x0010040000044001);
				UProperty* NewProp_StartupMovies_Inner = new(EC_InternalUseOnlyConstructor, NewProp_StartupMovies, TEXT("StartupMovies"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bMoviesAreSkippable, UCriWarePluginSettings);
				UProperty* NewProp_bMoviesAreSkippable = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bMoviesAreSkippable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bMoviesAreSkippable, UCriWarePluginSettings), 0x0010040000044001, CPP_BOOL_PROPERTY_BITMASK(bMoviesAreSkippable, UCriWarePluginSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bWaitForMoviesToComplete, UCriWarePluginSettings);
				UProperty* NewProp_bWaitForMoviesToComplete = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bWaitForMoviesToComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bWaitForMoviesToComplete, UCriWarePluginSettings), 0x0010040000044001, CPP_BOOL_PROPERTY_BITMASK(bWaitForMoviesToComplete, UCriWarePluginSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseManaStartupMovies, UCriWarePluginSettings);
				UProperty* NewProp_bUseManaStartupMovies = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseManaStartupMovies"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseManaStartupMovies, UCriWarePluginSettings), 0x0010040000044001, CPP_BOOL_PROPERTY_BITMASK(bUseManaStartupMovies, UCriWarePluginSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UseH264Decoder, UCriWarePluginSettings);
				UProperty* NewProp_UseH264Decoder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UseH264Decoder"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UseH264Decoder, UCriWarePluginSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(UseH264Decoder, UCriWarePluginSettings), sizeof(bool), true);
				UProperty* NewProp_MaxManaBPS = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxManaBPS"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxManaBPS, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_MaxDecoderHandles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDecoderHandles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxDecoderHandles, UCriWarePluginSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(EnableDecodeSkip, UCriWarePluginSettings);
				UProperty* NewProp_EnableDecodeSkip = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EnableDecodeSkip"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(EnableDecodeSkip, UCriWarePluginSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(EnableDecodeSkip, UCriWarePluginSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(InitializeMana, UCriWarePluginSettings);
				UProperty* NewProp_InitializeMana = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InitializeMana"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(InitializeMana, UCriWarePluginSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(InitializeMana, UCriWarePluginSettings), sizeof(bool), true);
				UProperty* NewProp_PS4_SamplingRateOfAudio3dStreamingVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_SamplingRateOfAudio3dStreamingVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_SamplingRateOfAudio3dStreamingVoices, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_NumberOfAudio3dStreamingVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_NumberOfAudio3dStreamingVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_NumberOfAudio3dStreamingVoices, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_SamplingRateOfAudio3dMemoryVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_SamplingRateOfAudio3dMemoryVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_SamplingRateOfAudio3dMemoryVoices, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_NumberOfAudio3dMemoryVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_NumberOfAudio3dMemoryVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_NumberOfAudio3dMemoryVoices, UCriWarePluginSettings), 0x0010040000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(PS4_UseAudio3d, UCriWarePluginSettings);
				UProperty* NewProp_PS4_UseAudio3d = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_UseAudio3d"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(PS4_UseAudio3d, UCriWarePluginSettings), 0x0010040000004001, CPP_BOOL_PROPERTY_BITMASK(PS4_UseAudio3d, UCriWarePluginSettings), sizeof(bool), true);
				UProperty* NewProp_PS4_OutputThreadPriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_OutputThreadPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_OutputThreadPriority, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_ServerThreadPriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_ServerThreadPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_ServerThreadPriority, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_OutputThreadAffinityMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_OutputThreadAffinityMask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_OutputThreadAffinityMask, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_ServerThreadAffinityMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_ServerThreadAffinityMask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_ServerThreadAffinityMask, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_WASAPI_NumChannels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WASAPI_NumChannels"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(WASAPI_NumChannels, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_WASAPI_SamplingRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WASAPI_SamplingRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(WASAPI_SamplingRate, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_WASAPI_BitsPerSample = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WASAPI_BitsPerSample"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(WASAPI_BitsPerSample, UCriWarePluginSettings), 0x0010040000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(WASAPI_IsExclusive, UCriWarePluginSettings);
				UProperty* NewProp_WASAPI_IsExclusive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WASAPI_IsExclusive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(WASAPI_IsExclusive, UCriWarePluginSettings), 0x0010040000004001, CPP_BOOL_PROPERTY_BITMASK(WASAPI_IsExclusive, UCriWarePluginSettings), sizeof(bool), true);
				UProperty* NewProp_HcaMxStreamingVoiceNumChannels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HcaMxStreamingVoiceNumChannels"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HcaMxStreamingVoiceNumChannels, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_NumHcaMxStreamingVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumHcaMxStreamingVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumHcaMxStreamingVoices, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_HcaMxMemoryVoiceNumChannels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HcaMxMemoryVoiceNumChannels"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HcaMxMemoryVoiceNumChannels, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_NumHcaMxMemoryVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumHcaMxMemoryVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumHcaMxMemoryVoices, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_HcaMxVoiceSamplingRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HcaMxVoiceSamplingRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(HcaMxVoiceSamplingRate, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_DistanceFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DistanceFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DistanceFactor, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_AcfFileName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AcfFileName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AcfFileName, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_StandardStreamingVoiceSamplingRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StandardStreamingVoiceSamplingRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StandardStreamingVoiceSamplingRate, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_StandardStreamingVoiceNumChannels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StandardStreamingVoiceNumChannels"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StandardStreamingVoiceNumChannels, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_NumStandardStreamingVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumStandardStreamingVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumStandardStreamingVoices, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_StandardMemoryVoiceSamplingRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StandardMemoryVoiceSamplingRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StandardMemoryVoiceSamplingRate, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_StandardMemoryVoiceNumChannels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StandardMemoryVoiceNumChannels"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(StandardMemoryVoiceNumChannels, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_NumStandardMemoryVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumStandardMemoryVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumStandardMemoryVoices, UCriWarePluginSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(OutputsLogAtom, UCriWarePluginSettings);
				UProperty* NewProp_OutputsLogAtom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OutputsLogAtom"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(OutputsLogAtom, UCriWarePluginSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(OutputsLogAtom, UCriWarePluginSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(UsesInGamePreview, UCriWarePluginSettings);
				UProperty* NewProp_UsesInGamePreview = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UsesInGamePreview"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UsesInGamePreview, UCriWarePluginSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(UsesInGamePreview, UCriWarePluginSettings), sizeof(bool), true);
				UProperty* NewProp_MaxVirtualVoices = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxVirtualVoices"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxVirtualVoices, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_PS4_MemoryFileSystemThreadPriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_MemoryFileSystemThreadPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_MemoryFileSystemThreadPriority, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_DataDecompressionThreadPriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_DataDecompressionThreadPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_DataDecompressionThreadPriority, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_FileAccessThreadPriority = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_FileAccessThreadPriority"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_FileAccessThreadPriority, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_MemoryFileSystemThreadAffinityMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_MemoryFileSystemThreadAffinityMask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_MemoryFileSystemThreadAffinityMask, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_DataDecompressionThreadAffinityMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_DataDecompressionThreadAffinityMask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_DataDecompressionThreadAffinityMask, UCriWarePluginSettings), 0x0010040000004001);
				UProperty* NewProp_PS4_FileAccessThreadAffinityMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS4_FileAccessThreadAffinityMask"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PS4_FileAccessThreadAffinityMask, UCriWarePluginSettings), 0x0010040000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(OutputsLogFileSystem, UCriWarePluginSettings);
				UProperty* NewProp_OutputsLogFileSystem = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OutputsLogFileSystem"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(OutputsLogFileSystem, UCriWarePluginSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(OutputsLogFileSystem, UCriWarePluginSettings), sizeof(bool), true);
				UProperty* NewProp_MaxFiles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxFiles"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxFiles, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_NumLoaders = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumLoaders"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumLoaders, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_MaxBinds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxBinds"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxBinds, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_NumBinders = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumBinders"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumBinders, UCriWarePluginSettings), 0x0010000000004001);
				UProperty* NewProp_ContentDir = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ContentDir"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ContentDir, UCriWarePluginSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNoExistCriWareIni, UCriWarePluginSettings);
				UProperty* NewProp_bNoExistCriWareIni = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bNoExistCriWareIni"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNoExistCriWareIni, UCriWarePluginSettings), 0x0010040000034001, CPP_BOOL_PROPERTY_BITMASK(bNoExistCriWareIni, UCriWarePluginSettings), sizeof(bool), true);
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCriWarePluginSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CriWarePluginSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_StartupMovies, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_StartupMovies, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_bMoviesAreSkippable, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_bMoviesAreSkippable, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_bWaitForMoviesToComplete, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_bWaitForMoviesToComplete, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_bUseManaStartupMovies, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_bUseManaStartupMovies, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_UseH264Decoder, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_UseH264Decoder, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_MaxManaBPS, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_MaxManaBPS, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_MaxDecoderHandles, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_MaxDecoderHandles, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_EnableDecodeSkip, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_EnableDecodeSkip, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_InitializeMana, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_InitializeMana, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_SamplingRateOfAudio3dStreamingVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_SamplingRateOfAudio3dStreamingVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_NumberOfAudio3dStreamingVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_NumberOfAudio3dStreamingVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_SamplingRateOfAudio3dMemoryVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_SamplingRateOfAudio3dMemoryVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_NumberOfAudio3dMemoryVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_NumberOfAudio3dMemoryVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_UseAudio3d, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_UseAudio3d, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_OutputThreadPriority, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_OutputThreadPriority, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_ServerThreadPriority, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_ServerThreadPriority, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_OutputThreadAffinityMask, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_OutputThreadAffinityMask, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_ServerThreadAffinityMask, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_ServerThreadAffinityMask, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_WASAPI_NumChannels, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_WASAPI_NumChannels, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_WASAPI_SamplingRate, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_WASAPI_SamplingRate, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_WASAPI_BitsPerSample, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_WASAPI_BitsPerSample, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_WASAPI_IsExclusive, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_WASAPI_IsExclusive, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_HcaMxStreamingVoiceNumChannels, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_HcaMxStreamingVoiceNumChannels, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_NumHcaMxStreamingVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_NumHcaMxStreamingVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_HcaMxMemoryVoiceNumChannels, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_HcaMxMemoryVoiceNumChannels, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_NumHcaMxMemoryVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_NumHcaMxMemoryVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_HcaMxVoiceSamplingRate, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_HcaMxVoiceSamplingRate, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_DistanceFactor, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_DistanceFactor, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_AcfFileName, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_AcfFileName, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_StandardStreamingVoiceSamplingRate, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_StandardStreamingVoiceSamplingRate, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_StandardStreamingVoiceNumChannels, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_StandardStreamingVoiceNumChannels, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_NumStandardStreamingVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_NumStandardStreamingVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_StandardMemoryVoiceSamplingRate, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_StandardMemoryVoiceSamplingRate, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_StandardMemoryVoiceNumChannels, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_StandardMemoryVoiceNumChannels, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_NumStandardMemoryVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_NumStandardMemoryVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_OutputsLogAtom, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_OutputsLogAtom, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_UsesInGamePreview, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_UsesInGamePreview, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_MaxVirtualVoices, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_MaxVirtualVoices, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_MemoryFileSystemThreadPriority, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_MemoryFileSystemThreadPriority, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_DataDecompressionThreadPriority, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_DataDecompressionThreadPriority, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_FileAccessThreadPriority, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_FileAccessThreadPriority, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_MemoryFileSystemThreadAffinityMask, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_MemoryFileSystemThreadAffinityMask, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_DataDecompressionThreadAffinityMask, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_DataDecompressionThreadAffinityMask, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_PS4_FileAccessThreadAffinityMask, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_PS4_FileAccessThreadAffinityMask, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_OutputsLogFileSystem, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_OutputsLogFileSystem, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_MaxFiles, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_MaxFiles, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_NumLoaders, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_NumLoaders, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_MaxBinds, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_MaxBinds, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_NumBinders, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_NumBinders, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_ContentDir, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_ContentDir, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
				MetaData->SetValue(NewProp_bNoExistCriWareIni, TEXT("Category"), TEXT("CriWarePluginSettings"));
				MetaData->SetValue(NewProp_bNoExistCriWareIni, TEXT("ModuleRelativePath"), TEXT("Public/CriWarePluginSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWarePluginSettings, 4091206793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWarePluginSettings(Z_Construct_UClass_UCriWarePluginSettings, &UCriWarePluginSettings::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWarePluginSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWarePluginSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
