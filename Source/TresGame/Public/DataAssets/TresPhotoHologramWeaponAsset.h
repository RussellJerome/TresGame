// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresPhotoHologramWeaponAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPhotoHologramWeaponAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramWeaponAsset")
	TArray<struct FTresEquipmentAssetUnit> FixedEquips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramWeaponAsset")
	class UDataTable* PoseDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramWeaponAsset")
	TArray<class UTresAnimSet*> ReplaceAnimSets;
};
