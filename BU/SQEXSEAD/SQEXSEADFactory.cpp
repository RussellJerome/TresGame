// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADFactory.h"
#include "AudioDeviceManager.h"
#include "Sound/SoundNodeWavePlayer.h"

#include "PackageTools.h"
#include "Misc/MessageDialog.h"
#include "AssetToolsModule.h"

#define LOCTEXT_NAMESPACE "AtomFactory"

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
	//SQEX DEPRECATED THE SOUND BANKS LATER IN DEVELOPMENT

	FString PackagePath = FPackageName::GetLongPackagePath(InParent->GetOutermost()->GetName());

	FByteBulkData RawData;
	RawData.Lock(LOCK_READ_WRITE);
	void* LockedData = RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	RawData.Unlock();

	TArray<uint8> TinyRawData;
	TinyRawData.Empty(BufferEnd - Buffer);
	TinyRawData.AddUninitialized(BufferEnd - Buffer);
	FMemory::Memcpy(TinyRawData.GetData(), Buffer, TinyRawData.Num());

	FString ErrorMessage;
	FSEADAudioData FileInfo;
	if (FileInfo.ReadAudioData(Buffer, BufferEnd, TinyRawData, TinyRawData.Num(), &ErrorMessage))
	{
		if (FileInfo.bIsSab)
		{
			USQEXSEADSound* SoundObject = USQEXSEADSound::Find(*Name.ToString(), PackagePath);
			if (SoundObject == nullptr) {
				SoundObject = NewObject<USQEXSEADSound>(InParent, Name, Flags);
			}

			FByteBulkData RawDatas;
			RawDatas.Lock(LOCK_READ_WRITE);
			void* LockedDatas = RawDatas.Realloc(BufferEnd - Buffer);
			FMemory::Memcpy(LockedDatas, Buffer, BufferEnd - Buffer);
			RawDatas.Unlock();

			SoundObject->RawData.Lock(LOCK_READ_WRITE);
			LockedDatas = SoundObject->RawData.Realloc(BufferEnd - Buffer);
			FMemory::Memcpy(LockedDatas, Buffer, BufferEnd - Buffer);
			SoundObject->RawData.Unlock();

			SoundObject->ResourceData.Empty(BufferEnd - Buffer);
			SoundObject->ResourceData.AddUninitialized(BufferEnd - Buffer);
			FMemory::Memcpy(SoundObject->ResourceData.GetData(), Buffer, SoundObject->ResourceData.Num());


			return SoundObject;
		}
		else
		{
			USQEXSEADMusic* MusicObject = USQEXSEADMusic::Find(*Name.ToString(), PackagePath);
			if (MusicObject == nullptr) {
				MusicObject = NewObject<USQEXSEADMusic>(InParent, Name, Flags);
			}

			FByteBulkData RawDatas;
			RawDatas.Lock(LOCK_READ_WRITE);
			void* LockedDatas = RawDatas.Realloc(BufferEnd - Buffer);
			FMemory::Memcpy(LockedDatas, Buffer, BufferEnd - Buffer);
			RawDatas.Unlock();

			MusicObject->RawData.Lock(LOCK_READ_WRITE);
			LockedDatas = MusicObject->RawData.Realloc(BufferEnd - Buffer);
			FMemory::Memcpy(LockedDatas, Buffer, BufferEnd - Buffer);
			MusicObject->RawData.Unlock();

			MusicObject->ResourceData.Empty(BufferEnd - Buffer);
			MusicObject->ResourceData.AddUninitialized(BufferEnd - Buffer);
			FMemory::Memcpy(MusicObject->ResourceData.GetData(), Buffer, MusicObject->ResourceData.Num());

			return MusicObject;
		}
	}

	return nullptr;









	/*USQEXSEADSound* SoundObject = USQEXSEADSound::Find(*Name.ToString(), PackagePath);
	if (SoundObject == nullptr) {
		SoundObject = NewObject<USQEXSEADSound>(InParent, Name, Flags);
	}
	FByteBulkData RawData;
	RawData.Lock(LOCK_READ_WRITE);
	void* LockedData = RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	RawData.Unlock();

	SoundObject->RawData.Lock(LOCK_READ_WRITE);
	LockedData = SoundObject->RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	SoundObject->RawData.Unlock();


	return SoundObject;*/



	/*FString PackagePath = FPackageName::GetLongPackagePath(InParent->GetOutermost()->GetName());
	USQEXSEADSoundBank* SoundBankObject = USQEXSEADSoundBank::Find(*Name.ToString(), PackagePath);

	if (SoundBankObject == nullptr) {
		SoundBankObject = NewObject<USQEXSEADSoundBank>(InParent, Name, Flags);
	}

	FByteBulkData RawData;
	RawData.Lock(LOCK_READ_WRITE);
	void* LockedData = RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	RawData.Unlock();

	SoundBankObject->RawData.Lock(LOCK_READ_WRITE);
	LockedData = SoundBankObject->RawData.Realloc(BufferEnd - Buffer);
	FMemory::Memcpy(LockedData, Buffer, BufferEnd - Buffer);
	SoundBankObject->RawData.Unlock();

	if (SoundBankObject->AssetImportData == nullptr) {
		SoundBankObject->AssetImportData = NewObject<UAssetImportData>(SoundBankObject, TEXT("AssetImportData"));
	}

	if (SoundBankObject->AssetImportData != nullptr) {
		SoundBankObject->AssetImportData->Update(CurrentFilename);
	}

	int DataSize = RawData.GetBulkDataSize();
	void* Data = NULL;
	RawData.GetCopy(&Data, true);

	TArray<uint8> TinyRawData;
	TinyRawData.Empty(BufferEnd - Buffer);
	TinyRawData.AddUninitialized(BufferEnd - Buffer);
	FMemory::Memcpy(TinyRawData.GetData(), Buffer, TinyRawData.Num());

	FString ErrorMessage;
	FSEADAudioData FileInfo;
	if (FileInfo.ReadAudioData(Buffer, BufferEnd, TinyRawData, TinyRawData.Num(), &ErrorMessage))
	{
		int NumCues = FileInfo.HCAArray.Num();

		for (int i = 0; i < NumCues; i++)
		{
			//FString AssetName = UTF8_TO_TCHAR("Test");
			FString AssetName = FString::FromInt(i); //Temporary Until we read the names proper
			FString PackageName = PackageTools::SanitizePackageName(PackagePath + TEXT("/") + AssetName);
			UPackage* Pkg = CreatePackage(NULL, *PackageName);

			USQEXSEADSound* ExistingAsset = (USQEXSEADSound*)StaticFindObject(USQEXSEADSound::StaticClass(), Pkg, *AssetName);
			if (ExistingAsset == nullptr)
			{
				UObject* SameNameAsset = StaticFindObject(nullptr, InParent, *AssetName);
				if (SameNameAsset != nullptr)
				{
					FMessageDialog::Open(EAppMsgType::Ok, NSLOCTEXT("UnrealEd", "Error_AssetExist", "Asset with same name exists. Can't overwrite another asset"));
				}
				else
				{
					FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
					ExistingAsset = (USQEXSEADSound*)AssetToolsModule.Get().CreateAsset(AssetName, PackagePath, USQEXSEADSound::StaticClass(), NULL);

					FByteBulkData RawDatas;
					RawDatas.Lock(LOCK_READ_WRITE);
					void* LockedDatas = RawDatas.Realloc(BufferEnd - Buffer);
					FMemory::Memcpy(LockedDatas, Buffer, BufferEnd - Buffer);
					RawDatas.Unlock();

					ExistingAsset->RawData.Lock(LOCK_READ_WRITE);
					LockedDatas = ExistingAsset->RawData.Realloc(BufferEnd - Buffer);
					FMemory::Memcpy(LockedDatas, Buffer, BufferEnd - Buffer);
					ExistingAsset->RawData.Unlock();

					ExistingAsset->ResourceData.Empty(BufferEnd - Buffer);
					ExistingAsset->ResourceData.AddUninitialized(BufferEnd - Buffer);
					FMemory::Memcpy(ExistingAsset->ResourceData.GetData(), Buffer, ExistingAsset->ResourceData.Num());
					
				}
			}

			if (ExistingAsset == NULL)
			{
				continue;
			}

			if (ExistingAsset->ReferenceBank != SoundBankObject)
			{
				ExistingAsset->SoundIndex = i;
				ExistingAsset->ReferenceBank = SoundBankObject;
				ExistingAsset->MarkPackageDirty();
			}
		}
	}

	FMemory::Free(Data);
	return SoundBankObject;*/




	//ORIGINAL IMPORTER


	/*TArray<UAudioComponent*> ComponentsToRestart;
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
	for (int32 ComponentIndex = 0; ComponentIndex < ComponentsToRestart.Num(); ++ComponentIndex) { ComponentsToRestart[ComponentIndex]->Play(); }*/
}