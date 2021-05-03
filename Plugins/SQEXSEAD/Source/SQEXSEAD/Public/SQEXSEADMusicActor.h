// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADMusicActor.generated.h"

UCLASS()
class SQEXSEAD_API ASQEXSEADMusicActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADMusicActor")
	bool bAutoPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADMusicActor")
	class UAudioComponent* AudioComponent;

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void Stop() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void SetNextSectionIndex(int SectionIndex) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void SetNextSection(const FString& SectionName) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void SetModeIndex(int ModeIndex) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void SetMode(const FString& modeName) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void Play(float StartTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void FadeIn(float FadeInDuration, float FadeVolumeLevel) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void BlendModeIndex(int ModeIndex, float Rate, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void BlendMode(const FString& modeName, float Rate, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADMusicActor")
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {};
};
