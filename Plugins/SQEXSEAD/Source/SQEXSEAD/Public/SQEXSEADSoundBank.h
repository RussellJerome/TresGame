// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Serialization/BulkData.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADSoundBank.generated.h"

/**
 * 
 */
UCLASS(hidecategories = object, BlueprintType, meta = (ToolTip = "SQEXSoundBank class."))
class SQEXSEAD_API USQEXSEADSoundBank : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = Reimport)
	class UAssetImportData* AssetImportData;

	FByteBulkData RawData;

	static USQEXSEADSoundBank* Find(FName FileName, FString PackagePath)
	{
		FString FileNameString = FileName.ToString();
		USQEXSEADSoundBank* FileData = (USQEXSEADSoundBank*)StaticFindObject(USQEXSEADSoundBank::StaticClass(), ANY_PACKAGE, *FileNameString);
		if ((FileData == nullptr) && (!PackagePath.IsEmpty())) {
			FString PackageName = PackagePath + "/" + FileNameString;
			UPackage* Pkg = FindPackage(nullptr, *PackageName);
			if (Pkg == nullptr) {
				Pkg = LoadPackage(nullptr, *PackageName, LOAD_None);
			}
			FileData = (USQEXSEADSoundBank*)StaticFindObject(USQEXSEADSoundBank::StaticClass(), ANY_PACKAGE, *FileNameString);
		}
		if (FileData == nullptr) {
			UPackage* Pkg = FindPackage(nullptr, *FileNameString);
			if (Pkg == nullptr) {
				Pkg = LoadPackage(nullptr, *FileNameString, LOAD_None);
			}
			FileData = (USQEXSEADSoundBank*)StaticFindObject(USQEXSEADSoundBank::StaticClass(), ANY_PACKAGE, *FileNameString);
		}
		if (FileData == nullptr) {
			FString AssetFileName = FileName.ToString() + TEXT(".uasset");
			TArray<FString> AssetFiles;
			FString Content = TEXT("/Content");
			IFileManager::Get().FindFilesRecursive(AssetFiles, *(FGenericPlatformMisc::GameDir() + Content), *AssetFileName, true, false);
			for (FString& AssetPath : AssetFiles) {
				UPackage* Package = LoadPackage(nullptr, *AssetPath, LOAD_None);
			}
			FileData = (USQEXSEADSoundBank*)StaticFindObject(USQEXSEADSoundBank::StaticClass(), ANY_PACKAGE, *FileNameString);
		}
		return FileData;
	}
};
