// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_CanActionAbortTiming.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CanActionAbortTiming : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanActionAbortTiming")
	TArray<ETresAIActionAbortTimingID> m_IDList;
};
