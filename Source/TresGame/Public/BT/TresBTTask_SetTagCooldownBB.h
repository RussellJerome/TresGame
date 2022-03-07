// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_SetTagCooldown.h"
#include "TresBTTask_SetTagCooldownBB.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SetTagCooldownBB : public UBTTask_SetTagCooldown
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SetTagCooldownBB")
	bool bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SetTagCooldownBB")
	FBlackboardKeySelector BlackboardKey;
};
