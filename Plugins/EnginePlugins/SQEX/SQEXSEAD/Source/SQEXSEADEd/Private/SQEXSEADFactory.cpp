// Fill out your copyright notice in the Description page of Project Settings.

#include "SQEXSEADFactory.h"
#include "AudioDeviceManager.h"
#include "Sound/SoundNodeWavePlayer.h"

#include "PackageTools.h"
#include "Misc/MessageDialog.h"
#include "AssetToolsModule.h"

#define LOCTEXT_NAMESPACE "AtomFactory"

static uint8 BytesToUint8(const uint8* Data, int& Buffer)
{
	uint8 value = 0;
	value |= Data[Buffer];
	Buffer++;
	return value;
}
static uint16 BytesToUint16(const uint8* Data, int& Buffer, bool bIsBigEndian)
{
	uint32 value = 0;
	if (bIsBigEndian)
	{
		value |= Data[Buffer + 1];
		value |= Data[Buffer] << 8;
	}
	else
	{
		value |= Data[Buffer + 1] << 8;
		value |= Data[Buffer];
	}
	Buffer += 2;
	return value;
}
static uint32 BytesToUint32(const uint8* Data, int& Buffer, bool bIsBigEndian)
{
	uint32 value = 0;
	if (bIsBigEndian)
	{
		value |= Data[Buffer + 3];
		value |= Data[Buffer + 2] << 8;
		value |= Data[Buffer + 1] << 16;
		value |= Data[Buffer] << 24;
	}
	else
	{
		value |= Data[Buffer + 3] << 24;
		value |= Data[Buffer + 2] << 16;
		value |= Data[Buffer + 1] << 8;
		value |= Data[Buffer];
	}
	Buffer += 4;
	return value;
}
static FString Uint8ToString(uint8 Input)
{
	uint8 Byte1 = Input;
	FString CombinedString = BytesToString(&Byte1, 1);
	CombinedString[0] = CombinedString[0] - 1;
	return CombinedString;
}
static FString Uint16ToString(uint16 Input)
{
	uint8 Byte1 = Input;
	uint8 Byte2 = Input >> 8;
	FString CombinedString = BytesToString(&Byte1, 1) += BytesToString(&Byte2, 1);
	CombinedString[0] = CombinedString[0] - 1;
	CombinedString[1] = CombinedString[1] - 1;
	return CombinedString;
}
static FString Uint32ToString(uint32 Input)
{
	uint8 Byte1 = Input;
	uint8 Byte2 = Input >> 8;
	uint8 Byte3 = Input >> 16;
	uint8 Byte4 = Input >> 24;
	FString CombinedString = BytesToString(&Byte1, 1) += BytesToString(&Byte2, 1) += BytesToString(&Byte3, 1) += BytesToString(&Byte4, 1);
	for (int i = 0; i < CombinedString.Len(); i++) { CombinedString[i] = CombinedString[i] - 1; }
	return CombinedString;
}
static FString ListOfBytesToString(const uint8* Input, int Count)
{
	FString NewString = BytesToString(Input, Count);
	for (int i = 0; i < NewString.Len(); i++) { NewString[i] = NewString[i] - 1; }
	return NewString;
}
static TArray<uint8> ReadBytes(const uint8* Input, int Index, int Count)
{
	TArray<uint8> ReturnedData;
	while (Index < Count)
	{
		ReturnedData.Add(BytesToUint8(Input, Index));
		Index++;
	}
	return ReturnedData;
}

struct FSabMabHeaderSection
{
	FString SectionName;
	uint16 UnknownAt4;
	uint16 UnknownAt6;
	uint32 OffsetInInnerFile;
	uint32 UnknownAtC;
};
struct FMaterialUser
{
	FString User;
	int MaterialIndex;
};
struct FMaterialEntry
{
	int EntryIndex;
	int StreamPosition;
	int MaterialHeaderSize;
	int HeaderPosition;
	uint16 MtrlNumber;
	int ExtraDataOffset;
	int PositionOfOffsetFromMtrlSectionOffset;
	uint32 StreamSize;
	int HcaHeaderSize;
	int HcaStreamStartPosition;
	int HcaStreamSize;
	int NoHcaHeaderSize;
	int TrackEndPosition;
	int NoHcaHeaderExtraDataSize;
	uint32 LocalSectionOffset;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 ExtraDataSize;
	uint32 SampleRate;
	uint8 ChannelCount;
	uint8 Codec;
	uint16 ExtraDataId;
	bool IsLooping = LoopEnd > 0;

	uint8 HCAFMTChannelCount;
	int HCAFMTSampleRate;
	uint32 HCAFMTFrameCount;
	uint16 HCAFMTInsertedSamples;
	uint16 HCAFMTAppendedSamples;
	int HCAFMTSampleCount;

	uint16 HCACOMPFrameSize;
	uint8 HCACOMPMinResolution;
	uint8 HCACOMPMaxResolution;
	uint8 HCACOMPTrackCount;
	uint8 HCACOMPChannelConfig;
	uint8 HCACOMPTotalBandCount;
	uint8 HCACOMPBaseBandCount;
	uint8 HCACOMPStereoBandCount;
	uint8 HCACOMPBandsPerHfrGroup;

	uint16 HCACIPHEncryptionType;
};

struct FMusicLayer
{
	int Index;
	int Offset;
	uint8 Version;
	uint8 Flags;
	uint16 Size;
	uint16 MaterialIndex;
	uint16 LoopCount;
	uint32 UnknownAt8;
	uint32 EndPointSample;
};

struct FMusicSlice
{
	int Index;
	uint8 Version;
	uint16 Size;
	int SubTableOffset;
	int Offset;
	FString Name;
	uint16 CustomPointsCount;
	uint32 EntryPointsSample;
	uint32 ExitPointsSample;
	uint32 LoopStart;
	uint32 LoopEnd;
	uint32 MeterCount;
	int NameOffset;
	int NameSize;

	TArray<FMusicLayer> Layers;
};
struct FMusicMode
{
	int Offset;
	uint8 Version;
	uint16 Size;
	int NameOffset;
	uint8 NameSize;
	FString Name;
};

struct FCriWareInfo
{
	int StartAddress;
	int EndAddress;
};

struct FSEADAudioData
{
#define WAV_HEADER_SIZE 44
#define BITS_PER_SAMPLE 16

public:
	bool bIsSab;
	TArray<FSabMabHeaderSection> HeaderSections;
	TArray<FMaterialEntry> Entries;
	TArray<TArray<uint8>> AudioData;


	TArray<FCriWareInfo> HCAArray;

	bool ReadAudioData(const uint8*& Buffer, const uint8* BufferEnd, TArray<uint8> SabMabDataArray, int32 SabMabDataSize, FString* ErrorMessage = NULL, bool InHeaderDataOnly = false, void** OutFormatHeader = NULL)
	{
		if (SabMabDataArray.GetData() <= 0)
			return false;
		const uint8* SabMabData = SabMabDataArray.GetData();
		int StartBufferOffset = 0; //Automatically Changes
		FString FileID = Uint32ToString(BytesToUint32(SabMabData, StartBufferOffset, false));
		uint8 VersionMain = BytesToUint8(SabMabData, StartBufferOffset);
		uint8 VersionSub = BytesToUint8(SabMabData, StartBufferOffset);
		uint16 HeaderUnknownAt6 = BytesToUint16(SabMabData, StartBufferOffset, false);
		uint8 SectionsCount = BytesToUint8(SabMabData, StartBufferOffset);
		uint8 DescriptorLength = BytesToUint8(SabMabData, StartBufferOffset);
		uint16 HeaderUnknownAtA = BytesToUint16(SabMabData, StartBufferOffset, false);
		uint32 FileSize = BytesToUint32(SabMabData, StartBufferOffset, false);

		int bytesNeededToPad = 16 - DescriptorLength % 16;
		int HeaderSize = 16 + DescriptorLength + bytesNeededToPad;

		if (FileID != "mabf")
		{
			if (FileID == "sabf") { bIsSab = true; }
			else
			{
				if (ErrorMessage) { *ErrorMessage = "FILE UNKNOWN: Invalid Sab/Mab file"; }
				return false;
			}
		}
		int InnerFileStartOffset = 0;
		int Position = InnerFileStartOffset + HeaderSize;
		for (int i = 0; i < SectionsCount; i++)
		{
			FSabMabHeaderSection HeaderSection;
			HeaderSection.SectionName = Uint32ToString(BytesToUint32(SabMabData, Position, false));
			HeaderSection.UnknownAt4 = BytesToUint16(SabMabData, Position, false);
			HeaderSection.UnknownAt6 = BytesToUint16(SabMabData, Position, false);
			HeaderSection.OffsetInInnerFile = BytesToUint32(SabMabData, Position, false);
			HeaderSection.UnknownAtC = BytesToUint32(SabMabData, Position, false);
			HeaderSections.Add(HeaderSection);
		}

		for (int i = 0; i < HeaderSections.Num(); i++)
		{
			if (HeaderSections[i].SectionName == "mtrl")
			{
				int InnerFilePositionOfFirstTracks = 0;
				FSabMabHeaderSection SectionDeclaration = HeaderSections[i];
				int MaterialSectionOffset = InnerFileStartOffset + SectionDeclaration.OffsetInInnerFile;
				int MaterialSectionOffsetOffset = MaterialSectionOffset + 2;
				uint16 EntryAddressesSize = BytesToUint16(SabMabData, MaterialSectionOffsetOffset, false);
				uint16 EntryCount = BytesToUint16(SabMabData, MaterialSectionOffsetOffset, false);
				for (int songEntryIndex = 0; songEntryIndex < EntryCount; songEntryIndex++)
				{
					int positionOfOffsetFromMaterialSectionOffset = MaterialSectionOffset + 16 + songEntryIndex * 4;
					int positionOfOffsetFromMaterialSectionOffsetOffset = positionOfOffsetFromMaterialSectionOffset;
					uint32 localEntryOffset = BytesToUint32(SabMabData, positionOfOffsetFromMaterialSectionOffsetOffset, false);
					if (songEntryIndex == 0) { InnerFilePositionOfFirstTracks = SectionDeclaration.OffsetInInnerFile + localEntryOffset; }
					int EntryOffset = MaterialSectionOffset + localEntryOffset + 5;
					int8 Codec = BytesToUint8(SabMabData, EntryOffset);
					if (Codec == 0) { continue; }
					FMaterialEntry Entry;
					Entry.EntryIndex = songEntryIndex;
					Entry.PositionOfOffsetFromMtrlSectionOffset = positionOfOffsetFromMaterialSectionOffset;
					Entry.LocalSectionOffset = BytesToUint32(SabMabData, Entry.PositionOfOffsetFromMtrlSectionOffset, false);
					Entry.HeaderPosition = MaterialSectionOffset + Entry.LocalSectionOffset;
					int HeaderPositionOffset = Entry.HeaderPosition + 4;
					Entry.ChannelCount = BytesToUint8(SabMabData, HeaderPositionOffset);
					Entry.Codec = BytesToUint8(SabMabData, HeaderPositionOffset);
					Entry.MtrlNumber = BytesToUint16(SabMabData, HeaderPositionOffset, false);
					Entry.SampleRate = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.LoopStart = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.LoopEnd = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.ExtraDataSize = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.StreamSize = BytesToUint32(SabMabData, HeaderPositionOffset, false);
					Entry.ExtraDataId = BytesToUint16(SabMabData, HeaderPositionOffset, false);
					Entry.ExtraDataOffset = Entry.HeaderPosition + 32;
					Entry.StreamPosition = Entry.ExtraDataOffset + Entry.ExtraDataSize;
					Entry.MaterialHeaderSize = Entry.StreamPosition - Entry.HeaderPosition;
					int ExtraDataOffsetOffset = Entry.ExtraDataOffset + 16 + 6;

					//why is this in big endian wtf?
					int hcaHeaderSizeByteBig = BytesToUint8(SabMabData, ExtraDataOffsetOffset);
					int hcaHeaderSizeByteSmall = BytesToUint8(SabMabData, ExtraDataOffsetOffset);
					Entry.HcaHeaderSize = (uint16)((hcaHeaderSizeByteBig << 8) + hcaHeaderSizeByteSmall);

					Entry.NoHcaHeaderExtraDataSize = Entry.ExtraDataSize - Entry.HcaHeaderSize;
					Entry.HcaStreamStartPosition = Entry.ExtraDataOffset + 16;
					Entry.HcaStreamSize = Entry.HcaHeaderSize + Entry.StreamSize;
					Entry.NoHcaHeaderSize = Entry.HcaStreamStartPosition - Entry.HeaderPosition;
					Entry.TrackEndPosition = Entry.HcaStreamStartPosition + Entry.HcaStreamSize;

					int InitalHCAOffset = 0;
					TArray<uint8> hcaFileBytes = SabMabDataArray;
					FString Signature = ListOfBytesToString(&hcaFileBytes.GetData()[Entry.HcaStreamStartPosition], Entry.HcaStreamStartPosition + 4);
					int StartPositionOffsetInit = Entry.HcaStreamStartPosition + 4;
					uint16 Version = BytesToUint16(hcaFileBytes.GetData(), StartPositionOffsetInit, false);
					uint16 HeaderSize = BytesToUint16(hcaFileBytes.GetData(), StartPositionOffsetInit, false);

					if (Signature != "HCA\0")
					{
						if (ErrorMessage) { *ErrorMessage = "Not a valid HCA file"; }
					}
					int StartPosition = Entry.HcaStreamStartPosition + 8;
					FCriWareInfo CriwareInfo;
					CriwareInfo.StartAddress = StartPosition;
					CriwareInfo.EndAddress = HeaderSize;
					HCAArray.Add(CriwareInfo);
					Entries.Add(Entry);
				}
			}
			else { continue; }
		}

		return true;
	}
};


USQEXSEADMusic* USQEXSEADFactory::FindSEADMusic(FName FileName, FString PackagePath)
{
	FString FileNameString = FileName.ToString();
	USQEXSEADMusic* FileData = (USQEXSEADMusic*)StaticFindObject(USQEXSEADMusic::StaticClass(), ANY_PACKAGE, *FileNameString);
	if ((FileData == nullptr) && (!PackagePath.IsEmpty())) {
		FString PackageName = PackagePath + "/" + FileNameString;
		UPackage* Pkg = FindPackage(nullptr, *PackageName);
		if (Pkg == nullptr) {
			Pkg = LoadPackage(nullptr, *PackageName, LOAD_None);
		}
		FileData = (USQEXSEADMusic*)StaticFindObject(USQEXSEADMusic::StaticClass(), ANY_PACKAGE, *FileNameString);
	}
	if (FileData == nullptr) {
		UPackage* Pkg = FindPackage(nullptr, *FileNameString);
		if (Pkg == nullptr) {
			Pkg = LoadPackage(nullptr, *FileNameString, LOAD_None);
		}
		FileData = (USQEXSEADMusic*)StaticFindObject(USQEXSEADMusic::StaticClass(), ANY_PACKAGE, *FileNameString);
	}
	if (FileData == nullptr) {
		FString AssetFileName = FileName.ToString() + TEXT(".uasset");
		TArray<FString> AssetFiles;
		FString Content = TEXT("/Content");
		IFileManager::Get().FindFilesRecursive(AssetFiles, *(FGenericPlatformMisc::GameDir() + Content), *AssetFileName, true, false);
		for (FString& AssetPath : AssetFiles) {
			UPackage* Package = LoadPackage(nullptr, *AssetPath, LOAD_None);
		}
		FileData = (USQEXSEADMusic*)StaticFindObject(USQEXSEADMusic::StaticClass(), ANY_PACKAGE, *FileNameString);
	}
	return FileData;
}

USQEXSEADSound* USQEXSEADFactory::FindSEADSound(FName FileName, FString PackagePath)
{
	FString FileNameString = FileName.ToString();
	USQEXSEADSound* FileData = (USQEXSEADSound*)StaticFindObject(USQEXSEADSound::StaticClass(), ANY_PACKAGE, *FileNameString);
	if ((FileData == nullptr) && (!PackagePath.IsEmpty())) {
		FString PackageName = PackagePath + "/" + FileNameString;
		UPackage* Pkg = FindPackage(nullptr, *PackageName);
		if (Pkg == nullptr) {
			Pkg = LoadPackage(nullptr, *PackageName, LOAD_None);
		}
		FileData = (USQEXSEADSound*)StaticFindObject(USQEXSEADSound::StaticClass(), ANY_PACKAGE, *FileNameString);
	}
	if (FileData == nullptr) {
		UPackage* Pkg = FindPackage(nullptr, *FileNameString);
		if (Pkg == nullptr) {
			Pkg = LoadPackage(nullptr, *FileNameString, LOAD_None);
		}
		FileData = (USQEXSEADSound*)StaticFindObject(USQEXSEADSound::StaticClass(), ANY_PACKAGE, *FileNameString);
	}
	if (FileData == nullptr) {
		FString AssetFileName = FileName.ToString() + TEXT(".uasset");
		TArray<FString> AssetFiles;
		FString Content = TEXT("/Content");
		IFileManager::Get().FindFilesRecursive(AssetFiles, *(FGenericPlatformMisc::GameDir() + Content), *AssetFileName, true, false);
		for (FString& AssetPath : AssetFiles) {
			UPackage* Package = LoadPackage(nullptr, *AssetPath, LOAD_None);
		}
		FileData = (USQEXSEADSound*)StaticFindObject(USQEXSEADSound::StaticClass(), ANY_PACKAGE, *FileNameString);
	}
	return FileData;
}





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
			USQEXSEADSound* SoundObject = FindSEADSound(*Name.ToString(), PackagePath);
			if (SoundObject == nullptr)
			{
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

			return SoundObject;
		}
		else
		{
			USQEXSEADMusic* MusicObject = FindSEADMusic(*Name.ToString(), PackagePath);
			if (MusicObject == nullptr)
			{
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

			return MusicObject;
		}
	}
	return nullptr;
}