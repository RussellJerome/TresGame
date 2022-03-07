// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "TresBTComposite_RandomFluctuation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTComposite_RandomFluctuation : public UBTCompositeNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTComposite_RandomFluctuation")
	TArray<float> Weights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTComposite_RandomFluctuation")
	FBlackboardKeySelector BlackboardKeyIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTComposite_RandomFluctuation")
	float FluctuationValue;
};
