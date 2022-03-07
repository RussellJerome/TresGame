// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipBattleDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGumiShipBattleDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipBattleDataTableSet")
	class UDataTable* m_pBaseParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipBattleDataTableSet")
	class UDataTable* m_pAttackMethodParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipBattleDataTableSet")
	class UDataTable* m_pEnemyUniqueParameterDataTable;
};
