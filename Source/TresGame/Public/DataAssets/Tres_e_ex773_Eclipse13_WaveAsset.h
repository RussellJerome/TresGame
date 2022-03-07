// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "Tres_e_ex773_Eclipse13_WaveAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTres_e_ex773_Eclipse13_WaveAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tres_e_ex773_Eclipse13_WaveAsset")
	TArray<struct FTres_e_ex773_Eclipse13_ShellMoveData> DataArray;
};
