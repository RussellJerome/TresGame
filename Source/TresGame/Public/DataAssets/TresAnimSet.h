// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresAnimSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimSet")
	TArray<struct FTresAnimAssetUnit> Anims;
};
