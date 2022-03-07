// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUISlowModeDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUISlowModeDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISlowModeDataAsset")
	struct FTresUIDoFParams DoFParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISlowModeDataAsset")
	float DoFTransitionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISlowModeDataAsset")
	float SlowRate;
};
