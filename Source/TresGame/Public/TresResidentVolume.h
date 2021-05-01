// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresResidentVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresResidentVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresResidentVolume")
	TArray<FStringAssetReference> m_AssetArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresResidentVolume")
	TArray<class UObject*> m_AssetObjects;
};
