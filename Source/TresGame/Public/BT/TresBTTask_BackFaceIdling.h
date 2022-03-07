// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "TresBTTask_BackFaceIdling.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BackFaceIdling : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BackFaceIdling")
	float Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BackFaceIdling")
	float RandomAngleLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BackFaceIdling")
	float TurnLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BackFaceIdling")
	float CoolDownTimer;
};
