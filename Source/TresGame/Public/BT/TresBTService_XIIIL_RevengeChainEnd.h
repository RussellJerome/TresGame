// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_XIIIL_RevengeChainEnd.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_XIIIL_RevengeChainEnd : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_XIIIL_RevengeChainEnd")
	bool m_bEnableRevengeChainResetImmediate;
};
