// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex354_CheckChargeShotNum.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_e_ex354_CheckChargeShotNum : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex354_CheckChargeShotNum")
	int m_iMaxProjNum;
};
