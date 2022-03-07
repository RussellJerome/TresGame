// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_ChangeCoopStatus.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_ChangeCoopStatus : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_ChangeCoopStatus")
	ETresCoopRunningStatus m_CoopStatus;
};
