// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_BlackboardObjectModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardObjectModifier : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardObjectModifier")
	class UObject* m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardObjectModifier")
	FBlackboardKeySelector m_BlackboardKey;
};
