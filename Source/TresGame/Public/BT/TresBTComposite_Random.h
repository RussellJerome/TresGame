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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTComposite_Random")
	bool bCustomPeriod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTComposite_Random")
	float Period;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTComposite_Random")
	TArray<float> Weights;
};
