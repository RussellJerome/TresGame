// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresEwOpacityListAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresEwOpacityListAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEwOpacityListAsset")
	float OpacitySpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEwOpacityListAsset")
	TArray<struct FTresEwOpacityData> DataArray;
};
