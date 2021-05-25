// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADFactory.h"
#include "AudioDeviceManager.h"
#include "Sound/SoundNodeWavePlayer.h"

USQEXSEADFactory::USQEXSEADFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Formats.Add(TEXT("mab;MAB Data"));
	Formats.Add(TEXT("sab;SAB Data"));
	bCreateNew = false;
	bEditAfterNew = true;
	bEditorImport = true;
	SupportedClass = USQEXSEADMusic::StaticClass();
}
static bool bSoundFactorySuppressImportOverwriteDialog = false;
UObject* USQEXSEADFactory::FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	TArray<UAudioComponent*> ComponentsToRestart;
	FAudioDeviceManager* AudioDeviceManager = GEngine->GetAudioDeviceManager();
	bSoundFactorySuppressImportOverwriteDialog = false;
	TArray<uint8> RawData;
	RawData.Empty(BufferEnd - Buffer);
	RawData.AddUninitialized(BufferEnd - Buffer);
	FMemory::Memcpy(RawData.GetData(), Buffer, RawData.Num());
	FString ErrorMessage;
	FSabMabInfo FileInfo;
	if (FileInfo.ReadSabMabInfo(Buffer, BufferEnd, RawData, RawData.Num(), &ErrorMessage))
	{
		int BitDepth = 16;
		if (BitDepth != 16)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Currently, only 16 bit files are supported (%s)."), *Name.ToString());
			FEditorDelegates::OnAssetPostImport.Broadcast(this, nullptr);
			return nullptr;
		}

		if (FileInfo.bIsSab)
		{
			USQEXSEADSound* SABAsset = NewObject<USQEXSEADSound>(InParent, Name, Flags);

			SABAsset->InvalidateCompressedData();
			SABAsset->AssetImportData->Update(GetCurrentFilename());

			int BytesPerSample = 2;
			int DataChunkSize = FileInfo.Entries[0].HCAFMTChannelCount * FileInfo.Entries[0].HCAFMTSampleCount * BytesPerSample;
			int32 DurationDiv = FileInfo.Entries[0].HCAFMTChannelCount * BitDepth * FileInfo.Entries[0].SampleRate;
			SABAsset->Duration = DataChunkSize * 8.0f / DurationDiv;

			SABAsset->Volume = 25;
			FEditorDelegates::OnAssetPostImport.Broadcast(this, SABAsset);
			return SABAsset;
		}
		else
		{
			USQEXSEADMusic* MABAsset = NewObject<USQEXSEADMusic>(InParent, Name, Flags);

			MABAsset->InvalidateCompressedData();
			MABAsset->AssetImportData->Update(GetCurrentFilename());

			int BytesPerSample = 2;
			int DataChunkSize = FileInfo.Entries[0].HCAFMTChannelCount * FileInfo.Entries[0].HCAFMTSampleCount * BytesPerSample;
			int32 DurationDiv = FileInfo.Entries[0].HCAFMTChannelCount * BitDepth * FileInfo.Entries[0].SampleRate;
			MABAsset->Duration = DataChunkSize * 8.0f / DurationDiv;

			MABAsset->Volume = 25;
			FEditorDelegates::OnAssetPostImport.Broadcast(this, MABAsset);
			return MABAsset;
		}
	}
	else
	{
		Warn->Logf(ELogVerbosity::Error, TEXT("Unable to read Sab/Mab file '%s' - \"%s\""), *Name.ToString(), *ErrorMessage);
		FEditorDelegates::OnAssetPostImport.Broadcast(this, nullptr);
		return nullptr;
	}
	for (int32 ComponentIndex = 0; ComponentIndex < ComponentsToRestart.Num(); ++ComponentIndex) { ComponentsToRestart[ComponentIndex]->Play(); }
}