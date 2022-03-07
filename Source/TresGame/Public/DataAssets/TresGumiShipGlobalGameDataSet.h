// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipGlobalGameDataSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresGumiShipGlobalGameDataSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGlobalEnemySystemDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pHitEffectParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	float m_fMinScaleOfHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	float m_fMaxScaleOfHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	float m_fNearDistOfHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	float m_fFarDistOfHitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pAttackParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pWeaponParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pProjectileParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pPrizeItemParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pHudStanderdParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pEnemyTerritoryParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pBattleMissionCommonParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pBattleMissionInvidivalParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pBattleMissionItemParameterDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickMineTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickMagmaTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickMeteorTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickCannonTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickSwCannonTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickTreasureTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickCrystalTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickPrizeBoxTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickDashRingTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGumiShipGlobalGameDataSet")
	class UDataTable* m_pGimmickConstellationTable;
};
