// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresNpcBTTask_SetActionOn.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SetActionOn : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetActionOn")
	TEnumAsByte<ETresNpcActionOnType> m_ActionOnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetActionOn")
	float m_ActionTime;
};
