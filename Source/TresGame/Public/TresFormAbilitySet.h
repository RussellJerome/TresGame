// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresFormAbilitySet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresFormAbilitySet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFormAbilitySet")
	TMap<ETresCharWearForm, struct FTresFormAbilitySetUnit> m_Data;
};
