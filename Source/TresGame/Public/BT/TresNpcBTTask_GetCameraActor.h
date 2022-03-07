// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_GetCameraActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_GetCameraActor : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_GetCameraActor")
	FBlackboardKeySelector m_BlackboardValue;
};
