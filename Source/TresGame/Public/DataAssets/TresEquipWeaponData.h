// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresEquipDataBase.h"
#include "TresEquipWeaponData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresEquipWeaponData : public UTresEquipDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipWeaponData")
	TArray<struct FTresEquipmentAssetUnit> m_Equips;
};
