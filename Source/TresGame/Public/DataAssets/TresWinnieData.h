// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresWinnieData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresWinnieData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWinnieData")
	class UDataTable* PlayerAnimationDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWinnieData")
	class UDataTable* CharacterAnimationDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWinnieData")
	class UDataTable* SoundEffectDataRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWinnieData")
	class UDataTable* VoiceDataRef;
};
