// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetFreeWalkMoveType.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SetFreeWalkMoveType : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFreeWalkMoveType")
	bool m_bWalk;
};
