// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "TresBTComposite_BlackboardRandom.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTComposite_BlackboardRandom : public UBTCompositeNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "SQEX")
	TArray<struct FBlackboardKeySelector> Weights;
};
