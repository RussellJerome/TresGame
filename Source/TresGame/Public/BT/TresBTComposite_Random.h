// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "TresBTComposite_Random.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTComposite_Random : public UBTCompositeNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "SQEX")
	bool bCustomPeriod;

	UPROPERTY(EditDefaultsOnly, Category = "SQEX")
	float Period;

	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<float> Weights;
};
