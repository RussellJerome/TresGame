// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_BlackboardCopyKey.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardCopyKey : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardCopyKey")
	FBlackboardKeySelector m_BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardCopyKey")
	FBlackboardKeySelector m_BlackboardKeyValueB;
};
