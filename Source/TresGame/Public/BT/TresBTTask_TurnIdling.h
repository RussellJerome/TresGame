// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_TurnIdling.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_TurnIdling : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_TurnIdling")
	float Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_TurnIdling")
	float RandomAngleLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_TurnIdling")
	float TurnLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_TurnIdling")
	float CoolDownTimer;
};
