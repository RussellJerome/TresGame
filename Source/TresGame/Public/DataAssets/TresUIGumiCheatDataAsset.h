// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIGumiCheatDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIGumiCheatDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiCheatDataAsset")
	TArray<ETresItemDefGumiParts> m_CheatParts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiCheatDataAsset")
	TArray<ETresItemDefGumiMaterial> m_CheatMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiCheatDataAsset")
	TArray<ETresItemDefGumiPattern> m_CheatPatterns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiCheatDataAsset")
	TArray<ETresItemDefGumiSticker> m_CheatStickers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiCheatDataAsset")
	TArray<ETresItemDefGumiShipBP> m_CheatDefGumiShips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIGumiCheatDataAsset")
	TArray<ETresItemDefGumiEtc> m_CheatWeapons;
};
