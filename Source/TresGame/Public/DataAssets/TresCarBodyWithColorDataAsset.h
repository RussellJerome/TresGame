// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarBodyWithColorDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCarBodyWithColorDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyWithColorDataAsset")
	class UTresCarBodyDataAsset* CarBodyDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyWithColorDataAsset")
	class UMaterialInterface* ColorMaterial;
};
