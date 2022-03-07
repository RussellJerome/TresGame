// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresTextColorSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTextColorSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTextColorSet")
	TArray<struct FTresTextColor> Colors;
};
