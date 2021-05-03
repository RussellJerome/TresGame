// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SQEXSEADAttachSeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SQEXSEAD_API USQEXSEADAttachSeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	class USoundBase* SoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	float FadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	float FadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	bool bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	FName AttachPointName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	bool bFollowOwnerVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	class UAudioComponent* MyAudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAttachSeComponent")
	class USceneComponent* MyAttachComponent;

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADAttachSeComponent")
	void Stop() {};
};
