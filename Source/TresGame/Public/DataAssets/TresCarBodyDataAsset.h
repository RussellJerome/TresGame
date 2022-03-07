// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarBodyDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCarBodyDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	class UClass* CarActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	float CarFrontLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	float CarBackLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	float LightOffsetForward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	float LightOffsetSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	float LightOffsetHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	TArray<FTransform> TyreTransforms1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarBodyDataAsset")
	TArray<FTransform> TyreTransforms2;
};
