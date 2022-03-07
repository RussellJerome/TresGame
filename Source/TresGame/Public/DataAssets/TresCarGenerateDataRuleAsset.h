// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresCarGenerateDataRuleAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCarGenerateDataRuleAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarGenerateDataRuleAsset")
	TArray<struct FTresCarGenerateData> DataArray;
};
