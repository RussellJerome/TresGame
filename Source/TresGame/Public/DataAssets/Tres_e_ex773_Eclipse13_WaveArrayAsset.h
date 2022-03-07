// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "Tres_e_ex773_Eclipse13_WaveArrayAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTres_e_ex773_Eclipse13_WaveArrayAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tres_e_ex773_Eclipse13_WaveArrayAsset")
	TArray<struct FTres_e_ex773_Eclipse13_WaveData> DataArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tres_e_ex773_Eclipse13_WaveArrayAsset")
	float RequestReturnTime;
};
