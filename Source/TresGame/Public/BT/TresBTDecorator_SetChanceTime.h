// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_SetChanceTime.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_SetChanceTime : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_SetChanceTime")
	FBlackboardKeySelector m_BlackboardKey;
};
