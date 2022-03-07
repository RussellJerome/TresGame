// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_IsInViewport.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_IsInViewport : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsInViewport")
	FBlackboardKeySelector m_Target;
};
