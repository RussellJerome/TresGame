// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_e_ex006_CoopScrumChangeStatus.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_e_ex006_CoopScrumChangeStatus : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex006_CoopScrumChangeStatus")
	ETresEnemyEx006ScrumState m_CoopStatus;
};
