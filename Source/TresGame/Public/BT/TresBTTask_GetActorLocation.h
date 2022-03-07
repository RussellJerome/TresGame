// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_GetActorLocation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_GetActorLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_GetActorLocation")
	FBlackboardKeySelector m_KeyActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_GetActorLocation")
	FBlackboardKeySelector m_KeyLocation;
};
