// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGummiShipPlanDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGummiShipPlanDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGummiShipPlanDataTableSet")
	TArray<class UDataTable*> m_pGummiPlanData;
};
