// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresDecoPartsSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDecoPartsSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDecoPartsSet")
	TEnumAsByte<ETresDecoPartsAttachPartIdx> m_AttachPartIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDecoPartsSet")
	TArray<struct FTresDecoPartsUnit> m_AssetList;
};
