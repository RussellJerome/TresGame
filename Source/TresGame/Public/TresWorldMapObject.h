// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame.h"
#include "TresWorldMapObject.generated.h"

UCLASS()
class TRESGAME_API ATresWorldMapObject : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresWoldPlaceID> m_nWmPlaceD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresWoldMapObjID> m_nWmObjID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresGumiShipWorldSymbolID> m_nWorldSymbleID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	bool bWorldSymbol;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresGumiShipTravelPointID> m_nTravelPointID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	bool bTravelPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresGumiShipTreasureSphereID> m_nTreasureSphereID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	bool bTreasureSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresGumiShipEnemyTerritoryID> m_nTerritoryID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	bool bTerritory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	TEnumAsByte<ETresGumiShipJumpPointID> m_nJumpPointID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	bool bJumpPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	FName m_PresistenLevelPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	FName m_PlayerStartTagName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	FName m_DebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	bool m_isSortie;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	class USceneComponent* m_pSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	class UParticleSystemComponent* m_pEffect1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	class UParticleSystemComponent* m_pEffect2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	class UParticleSystemComponent* m_pEffect3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWorldMapObject")
	class UParticleSystemComponent* m_pMarkerEffect;

	UFUNCTION(BlueprintPure, Category = "TresWorldMapObject")
	bool IsTreasureSphiaState() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresWorldMapObject")
	bool IsTreasureSphia() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresWorldMapObject")
	bool IsTravelPointState() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresWorldMapObject")
	bool IsTravelPoint() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresWorldMapObject")
	bool IsJumpPoint() { return false; };
};
