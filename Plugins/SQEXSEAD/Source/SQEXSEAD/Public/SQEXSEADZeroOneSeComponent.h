// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADZeroOneSeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SQEXSEAD_API USQEXSEADZeroOneSeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	class USoundBase* SoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	float FadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	float FadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	class USoundBase* OnStopSoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	TEnumAsByte<ESQEXSEADAudioStartTimings> AudioStartTiming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	FName AttachPointName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	bool bEnable_Slot0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	TEnumAsByte<ESQEXSEADZeroOneProperties> PropertyType_Slot0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	float ZeroOneFadeTime_Slot0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	float ValiableValueThreshold_Slot0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	bool bEnable_Slot1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	TEnumAsByte<ESQEXSEADZeroOneProperties> PropertyType_Slot1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	float ZeroOneFadeTime_Slot1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	float ValiableValueThreshold_Slot1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADZeroOneSeComponent")
	class USQEXSEADAudioComponent* MyAudioComponent;

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADZeroOneSeComponent")
	void Stop() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADZeroOneSeComponent")
	void SetZeroOneValue(int Slot, float Value, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADZeroOneSeComponent")
	void Play() {};

	UFUNCTION(BlueprintPure, Category = "SQEXSEADZeroOneSeComponent")
	bool IsPlaying() { return false; };
};
