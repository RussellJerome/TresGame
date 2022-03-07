// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPlayerAttackStateDataSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerAttackStateDataSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPlayerAttackStateDataSet")
	class UDataTable* m_pAttackStateParameter;
};
