// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresStateSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresStateSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStateSet")
	TArray<struct FTresStateAsset> MyStates;
};
