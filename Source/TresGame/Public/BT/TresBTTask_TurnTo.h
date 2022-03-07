// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_TurnTo.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_TurnTo : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_TurnTo")
	float Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_TurnTo")
	float RandomAngleLimit;
};
