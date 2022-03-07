// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresEquipDataBase.h"
#include "TresEquipKeybladeData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresEquipKeybladeData : public UTresEquipDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipKeybladeData")
	TMap<ETresWeaponForm, struct FTresEquipValiableSetList> m_EquipMap;
};
