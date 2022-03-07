// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_GetCameraLocation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_GetCameraLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_GetCameraLocation")
	FBlackboardKeySelector m_BlackboardValue;
};
