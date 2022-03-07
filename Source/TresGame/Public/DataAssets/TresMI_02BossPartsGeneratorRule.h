// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresMI_02BossPartsGeneratorRule.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresMI_02BossPartsGeneratorRule : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMI_02BossPartsGeneratorRule")
	TArray<struct FTresMI_02GeneratorRuleParamArray> DataArray;
};
