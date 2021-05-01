// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresGame.h"
#include "TresEncountVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresEncountVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	TEnumAsByte<ETresEncountVolumeVehicleMode> m_VehicleMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	TEnumAsByte<ETresEncountVolumeSnapTarget> m_SnapTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	TArray<class UClass*> m_SupportVehicleClass;

	//struct FScriptMulticastDelegate m_OnStart;
	//struct FScriptMulticastDelegate m_OnStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	float m_MinMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	float m_MaxMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	float m_MinMovementAfterBattle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	float m_ClampRateOfMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	float m_ClampRateOfMinMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	FName m_EventNameOnSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	TEnumAsByte<ECollisionResponse> m_CollResponse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	TArray<struct FTresEncountVolumeEntry> m_Entries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	TArray<class ATresEncountDisableVolume*> m_DisableVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	class ATresBattleVolume* m_BattleOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	class ATresEncountSubEQSVolume* m_SubEQSVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	class ATresBattleVolume* m_SpawnedBattleOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEncountVolume")
	class UDataTable* m_RewardsTbl;
	
	UFUNCTION(BlueprintCallable, Category = "TresEncountVolume")
	void Stop() {};

	UFUNCTION(BlueprintCallable, Category = "TresEncountVolume")
	void Start() {};
};
