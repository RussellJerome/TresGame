// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_OverheadCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_OverheadCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverheadCheck")
	float m_RangeXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_OverheadCheck")
	float m_RangeZ;
};
