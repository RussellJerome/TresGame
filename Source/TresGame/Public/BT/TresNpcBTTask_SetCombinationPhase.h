// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetCombinationPhase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SetCombinationPhase : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetCombinationPhase")
	int m_PhaseIndex;
};
