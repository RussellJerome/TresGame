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
	if (FileInfo.ReadSabMabInfo(RawData.GetData(), RawData.Num(), &ErrorMessage))
	{
		/*if (*FileInfo.pBitsPerSample != 16)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Currently, only 16 bit Sab/Mab files are supported (%s)."), *Name.ToString());
			FEditorDelegates::OnAssetPostImport.Broadcast(this, nullptr);
			return nullptr;
		}*/

		Warn->Logf(ELogVerbosity::Error, TEXT("Unable to read Sab/Mab file '%s' - \"%s\""), *Name.ToString(), *ErrorMessage);

		for (int i = 0; i < FileInfo.HeaderSections.Num(); i++)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Header Section - SectionName: '%s'"), *Uint32ToString(FileInfo.HeaderSections[i].SectionName));
		}

		for (int i = 0; i < FileInfo.Entries.Num(); i++)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Material Entry - Entry Index: '%s'"), *FString::FromInt(FileInfo.Entries[i].EntryIndex));
			Warn->Logf(ELogVerbosity::Error, TEXT("Material Entry - Channel Count: '%s'"), *FString::FromInt(FileInfo.Entries[i].ChannelCount));
			Warn->Logf(ELogVerbosity::Error, TEXT("Material Entry - Codec: '%s'"), *FString::FromInt(FileInfo.Entries[i].Codec));
		}

		for (int i = 0; i < FileInfo.MusicEntries.Num(); i++)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Music Entry - Name: '%s'"), *FileInfo.MusicEntries[i].Name);
			for (int z = 0; z < FileInfo.MusicEntries[i].Slices.Num(); z++)
			{
				Warn->Logf(ELogVerbosity::Error, TEXT("Music Slice - Name: '%s'"), *FileInfo.MusicEntries[i].Slices[z].Name);
			}
			for (int z = 0; z < FileInfo.MusicEntries[i].Modes.Num(); z++)
			{
				Warn->Logf(ELogVerbosity::Error, TEXT("Music Modes - Name: '%s'"), *FileInfo.MusicEntries[i].Modes[z].Name);
			}
		}

		for (int i = 0; i < FileInfo.Instruments.Num(); i++)
		{
			Warn->Logf(ELogVerbosity::Error, TEXT("Instrument - Name: '%s'"), *FileInfo.Instruments[i].Name);
		}
	}
	else
	{
		Warn->Logf(ELogVerbosity::Error, TEXT("Unable to read Sab/Mab file '%s' - \"%s\""), *Name.ToString(), *ErrorMessage);
		FEditorDelegates::OnAssetPostImport.Broadcast(this, nullptr);
		return nullptr;
	}

	USQEXSEADMusic* MABAsset = NewObject<USQEXSEADMusic>(InParent, Name, Flags);

	MABAsset->AudioDataArray = RawData;

	//SQEX Bypass


	//MABAsset->bProcedural = true;


	//MABAsset->bCanProcessAsync = true;
	//MABAsset->bStreaming = true;


	//MABAsset->DecompressionType = DTYPE_Procedural; //DTYPE_Procedural


	//MABAsset->HasCompressedData = false;
	//

	MABAsset->AssetImportData->Update(CurrentFilename);
	MABAsset->InvalidateCompressedData();

	/*FByteBulkData* BulkData = &MABAsset->CompressedFormatData.GetFormat(FName("None"));
	BulkData->Lock(LOCK_READ_WRITE);
	FMemory::Memmove(BulkData->Realloc(RawData.Num()), RawData.GetData(), RawData.Num());
	BulkData->Unlock();*/


	//MABAsset->RawData.Lock(LOCK_READ_WRITE);
	//void* LockedData = MABAsset->RawData.Realloc(BufferEnd - Buffer);
	//FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	//MABAsset->RawData.Unlock();

	//RAW PCM DATA INFO
	//MABAsset->RawPCMDataSize = FileInfo.SampleDataSize;
	//MABAsset->RawPCMData = static_cast<uint8*>(FMemory::Malloc(BufferEnd - Buffer));
	//FMemory::Memcpy(MABAsset->RawPCMData, Buffer, BufferEnd - Buffer);
	//



	//MABAsset->CompressedFormatData = *(reinterpret_cast<FFormatContainer*> (RawData.GetData()));

	//int32 DurationDiv = *FileInfo.pChannels * *FileInfo.pBitsPerSample * *FileInfo.pSamplesPerSec;

	/*MABAsset->DecompressionType = EDecompressionType::DTYPE_Procedural;
	MABAsset->SoundGroup = ESoundGroup::SOUNDGROUP_Default;
	MABAsset->NumChannels = *FileInfo.pChannels;
	MABAsset->Duration = *FileInfo.pSabMabDataSize * 8.0f / DurationDiv;
	MABAsset->RawPCMDataSize = FileInfo.SampleDataSize;
	MABAsset->SampleRate = *FileInfo.pSamplesPerSec;
	MABAsset->InvalidateCompressedData();*/
	MABAsset->RawData.Lock(LOCK_READ_WRITE);

	//Entry.NoHcaHeaderSize = Entry.HcaStreamStartPosition - Entry.HeaderPosition;
	//Entry.TrackEndPosition = Entry.HcaStreamStartPosition + Entry.HcaStreamSize;

	//void* LockedData = MABAsset->RawData.Realloc(BufferEnd - Buffer);
	//FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);

	/*MABAsset->RawPCMData = (uint8*)FMemory::Malloc(BufferEnd - Buffer);
	FMemory::Memcpy(MABAsset->RawPCMData, Buffer, BufferEnd - Buffer);*/
	MABAsset->RawData.Unlock();


	/*if (DurationDiv)
	{
		//MABAsset->Duration = *FileInfo.pSabMabDataSize * 8.0f / DurationDiv;
		MABAsset->Duration = (FileInfo.SampleDataSize * 8.0f / DurationDiv) * 10000;
	}
	else { MABAsset->Duration = 0.0f; }*/

	//MABAsset->Duration = FileInfo.Entries[0].NoHcaHeaderSize / FileInfo.Entries[0].SampleRate;
	MABAsset->Duration = 72.837563f;

	MABAsset->bLooping = FileInfo.Entries[0].IsLooping;
	MABAsset->SampleRate = FileInfo.Entries[0].SampleRate;
	MABAsset->NumChannels = FileInfo.Entries[0].ChannelCount;

	FEditorDelegates::OnAssetPostImport.Broadcast(this, MABAsset);
	for (int32 ComponentIndex = 0; ComponentIndex < ComponentsToRestart.Num(); ++ComponentIndex) { ComponentsToRestart[ComponentIndex]->Play(); }
	return MABAsset;
}