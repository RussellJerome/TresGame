// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTinyShipPlanDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresTinyShipPlanDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresTinyShipPlanDataTableSet")
	TArray<class UDataTable*> m_pTinyPlanData;
};
