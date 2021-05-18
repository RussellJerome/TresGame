// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresAchievementAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAchievementAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAchievementAsset")
	TArray<int> DataArray;
};
