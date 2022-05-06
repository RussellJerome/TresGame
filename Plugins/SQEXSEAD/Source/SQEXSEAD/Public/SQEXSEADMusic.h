// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEXSEADSound.h"
#include "SQEXSEADMusic.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADMusic : public USQEXSEADSound
{
	GENERATED_BODY()

	/*virtual int32 GeneratePCMData(uint8* PCMData, const int32 SamplesNeeded) override
	{
		UE_LOG(LogTemp, Warning, TEXT("Samples Needed: %s"), SamplesNeeded);
		//int32 BytesGenerated = Super::GeneratePCMData(PCMData, SamplesNeeded);
		return 0;
	};*/


public:

	static USQEXSEADMusic* Find(FName FileName, FString PackagePath)
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





};
