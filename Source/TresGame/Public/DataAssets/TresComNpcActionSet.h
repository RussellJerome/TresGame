// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresComNpcActionSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresComNpcActionSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcActionSet")
	TArray<struct FTresComNpcActionSetDatas> m_Datas;
};
