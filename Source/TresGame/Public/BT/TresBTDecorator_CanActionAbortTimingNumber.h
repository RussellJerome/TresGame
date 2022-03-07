// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTDecorator_CanActionAbortTiming.h"
#include "TresBTDecorator_CanActionAbortTimingNumber.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CanActionAbortTimingNumber : public UTresBTDecorator_CanActionAbortTiming
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanActionAbortTimingNumber")
	TArray<int> m_NumberList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanActionAbortTimingNumber")
	TArray<FBlackboardKeySelector> m_BlackboardKeyNumberList;
};
