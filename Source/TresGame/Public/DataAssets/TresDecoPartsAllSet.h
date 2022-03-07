// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresDecoPartsAllSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDecoPartsAllSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDecoPartsAllSet")
	TArray<class UTresDecoPartsSet*> m_Assets;
};
