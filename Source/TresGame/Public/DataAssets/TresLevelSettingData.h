// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresLevelSettingData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLevelSettingData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	float AsyncLoadingTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	int AsyncLoadingUseFullTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	float PriorityAsyncLoadingExtraTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	float LevelStreamingActorsUpdateTimeLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	int LevelStreamingComponentsRegistrationGranularity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	int LevelStreamingComponentsUnregistrationGranularity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelSettingData")
	float LevelStreamingUnregisterComponentsTimeLimit;
};
