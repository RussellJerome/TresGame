// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADMusicFactory.h"
#include "AudioDeviceManager.h"
#include "Sound/SoundNodeWavePlayer.h"

USQEXSEADMusicFactory::USQEXSEADMusicFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Formats.Add(TEXT("mab;MAB Data"));
	bCreateNew = false;
	bEditAfterNew = true;
	bEditorImport = true;
	SupportedClass = USQEXSEADMusic::StaticClass();
}

static bool bSoundFactorySuppressImportOverwriteDialog = false;

UObject* USQEXSEADMusicFactory::FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn, bool& bOutOperationCanceled)
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
	if (FileInfo.ReadSabMabInfo(RawData.GetData(), RawData.Num(), &ErrorMessage))
	{
		/*if (*FileInfo.pBitsPerSample != 16)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Currently, only 16 bit Sab/Mab files are supported (%s)."), *Name.ToString());
			FEditorDelegates::OnAssetPostImport.Broadcast(this, nullptr);
			return nullptr;
		}*/
		//Warn->Logf(ELogVerbosity::Error, TEXT("Main Version MAB: "), UTF8_TO_TCHAR(FileInfo.pVersionMain));
		Warn->Logf(ELogVerbosity::Error, TEXT("Unable to read Sab/Mab file '%s' - \"%s\""), *Name.ToString(), *ErrorMessage);
	}
	else
	{
		Warn->Logf(ELogVerbosity::Error, TEXT("Unable to read Sab/Mab file '%s' - \"%s\""), *Name.ToString(), *ErrorMessage);
		FEditorDelegates::OnAssetPostImport.Broadcast(this, nullptr);
		return nullptr;
	}

	USQEXSEADMusic* MABAsset = NewObject<USQEXSEADMusic>(InParent, Name, Flags);
	MABAsset->AssetImportData->Update(CurrentFilename);
	MABAsset->InvalidateCompressedData();

	MABAsset->RawData.Lock(LOCK_READ_WRITE);
	void* LockedData = MABAsset->RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	MABAsset->RawData.Unlock();

	int32 DurationDiv = *FileInfo.pChannels * *FileInfo.pBitsPerSample * *FileInfo.pSamplesPerSec;
	if (DurationDiv)
	{
		MABAsset->Duration = *FileInfo.pSabMabDataSize * 8.0f / DurationDiv;
	}
	else
	{
		MABAsset->Duration = 0.0f;
	}

	MABAsset->bLooping = FileInfo.bIsLooping;

	MABAsset->SampleRate = *FileInfo.pSamplesPerSec;
	MABAsset->NumChannels = *FileInfo.pChannels;

	FEditorDelegates::OnAssetPostImport.Broadcast(this, MABAsset);

	for (int32 ComponentIndex = 0; ComponentIndex < ComponentsToRestart.Num(); ++ComponentIndex)
	{
		ComponentsToRestart[ComponentIndex]->Play();
	}

	return MABAsset;
}