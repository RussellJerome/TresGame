// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "UObject/Object.h"
#include "UObject/ScriptMacros.h"
#include "Serialization/BulkData.h"
#include "Sound/SoundWave.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADSoundBank.h"
#include "SQEXSEADSound.generated.h"

/**
 * 
 */
UCLASS(hidecategories = Object, editinlinenew, BlueprintType, meta = (ToolTip = "SQEXSEADSound class."))
class SQEXSEAD_API USQEXSEADSound : public USoundWave
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bUseKohrogiAttenuation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	class USQEXSEADSoundBank* ReferenceBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	int SoundIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bOverrideStopFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	float StopFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIsUISound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIgnoreEnginePause;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	float PauseFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIgnoreAudioVolumeAttenuation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIgnoreObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bEnableSEADTracingOcclusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	TEnumAsByte<ECollisionChannel> SEADOcclusionTraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	TEnumAsByte<ESQEXSEADSoundOutputPort> SEADSoundOutputPort;

	FByteBulkData RawData;

	UPROPERTY()
	TArray<uint8> ResourceData;

	virtual void PostLoad() override {
		Super::PostLoad();
#if WITH_EDITOR
		//Read Audio Data Here for playback
#endif
	};

	static USQEXSEADSound* Find(FName FileName, FString PackagePath)
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




};
