// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetActionPoint.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SetActionPoint : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetActionPoint")
	bool m_isSetActionTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetActionPoint")
	int m_ActionTargetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetActionPoint")
	bool m_isSearchActionPoint;
};
