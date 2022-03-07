// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresNpcBTTask_RequestCombination.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_RequestCombination : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_RequestCombination")
	ETresFNpcAICombiID m_CombiID;
};
