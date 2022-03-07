// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_IsInViewportCounter.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_IsInViewportCounter : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_IsInViewportCounter")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_IsInViewportCounter")
	FBlackboardKeySelector m_BlackboardKeyCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_IsInViewportCounter")
	float m_Interval;
};
