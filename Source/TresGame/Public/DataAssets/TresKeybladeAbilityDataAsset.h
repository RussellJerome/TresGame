// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresKeybladeAbilityDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresKeybladeAbilityDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresKeybladeAbilityDataAsset")
	TMap<ETresItemDefWeapon, struct FTresKeybladeAbilityData> m_Datas;
};
