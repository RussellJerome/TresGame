// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_IsChanceTimeTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_IsChanceTimeTarget : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsChanceTimeTarget")
	FBlackboardKeySelector m_BlackboardKey;
};
