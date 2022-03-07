// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_BlackboardTimeLimit.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_BlackboardTimeLimit : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_BlackboardTimeLimit")
	FBlackboardKeySelector m_TimeLimit;
};
