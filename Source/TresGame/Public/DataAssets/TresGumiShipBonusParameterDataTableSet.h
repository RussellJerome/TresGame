// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipBonusParameterDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGumiShipBonusParameterDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipBonusParameterDataTableSet")
	class UDataTable* m_pBonusParameterDataTable;
};
