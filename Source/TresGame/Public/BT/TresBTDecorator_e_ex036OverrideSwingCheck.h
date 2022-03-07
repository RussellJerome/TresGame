// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex036OverrideSwingCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_e_ex036OverrideSwingCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex036OverrideSwingCheck")
	FBlackboardKeySelector TargetDestination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex036OverrideSwingCheck")
	FBlackboardKeySelector RelayPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex036OverrideSwingCheck")
	bool m_bSwingRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex036OverrideSwingCheck")
	float m_AcceptRadius;
};
