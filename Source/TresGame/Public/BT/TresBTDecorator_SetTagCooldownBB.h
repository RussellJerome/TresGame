// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h"
#include "TresBTDecorator_SetTagCooldownBB.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_SetTagCooldownBB : public UBTDecorator_SetTagCooldown
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetTagCooldownBB")
	bool bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetTagCooldownBB")
	FBlackboardKeySelector BlackboardKey;
};
