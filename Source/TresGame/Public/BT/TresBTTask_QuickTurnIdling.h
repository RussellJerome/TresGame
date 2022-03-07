// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_QuickTurnIdling.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_QuickTurnIdling : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_QuickTurnIdling")
	float Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_QuickTurnIdling")
	float RandomAngleLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_QuickTurnIdling")
	float TurnLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_QuickTurnIdling")
	float CoolDownTimer;
};
