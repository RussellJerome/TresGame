// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISaveMenuDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUISaveMenuDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISaveMenuDataAsset")
	class UDataTable* MenuRestrictionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISaveMenuDataAsset")
	class UDataTable* AreaSelectData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISaveMenuDataAsset")
	class UDataTable* m_FaceIconLotteryData;
};
