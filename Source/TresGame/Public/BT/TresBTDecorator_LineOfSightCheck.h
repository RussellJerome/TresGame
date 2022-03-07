// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_LineOfSightCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_LineOfSightCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_LineOfSightCheck")
	FBlackboardKeySelector m_Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_LineOfSightCheck")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_LineOfSightCheck")
	bool m_bEnableSourceHead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_LineOfSightCheck")
	bool m_bEnableTargetHead;
};
