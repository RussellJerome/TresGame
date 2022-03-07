// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_Noop.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_Noop : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_Noop")
	TEnumAsByte<EBTNodeResult::Type> m_SelectionType;
};
