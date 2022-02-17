// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresPlayerMagicSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresPlayerMagicSet : public UDataAsset
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerMagicSet")
	TArray<struct FTresPlayerMagicAssetUnit> m_units;
	
	
};
