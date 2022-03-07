// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresSplineGeneratorActorRuleAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresSplineGeneratorActorRuleAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSplineGeneratorActorRuleAsset")
	TArray<struct FTresSplineGeneratorActorRule> DataArray;
};
