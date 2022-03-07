// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_BlackboardLoop.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_BlackboardLoop : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_BlackboardLoop")
	FBlackboardKeySelector BlackboardKeyLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_BlackboardLoop")
	FBlackboardKeySelector BlackboardKeyCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_BlackboardLoop")
	bool bTerminateIfChildFails;
};
