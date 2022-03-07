// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEX_ParticleAttachDataAsset.h"
#include "TresWeaponSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresWeaponSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponSet")
	TArray<struct FTresEquipmentSetTable> MyEquipTbl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponSet")
	FName FormName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponSet")
	class USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWeaponSet")
	TArray<struct FTresEquipmentSetAssetUnit> Equips;
};
