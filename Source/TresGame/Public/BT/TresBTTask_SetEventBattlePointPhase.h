// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "TresBTTask_SetEventBattlePointPhase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SetEventBattlePointPhase : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SetEventBattlePointPhase")
	FGameplayTag m_PhaseTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SetEventBattlePointPhase")
	bool m_bUseActorTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SetEventBattlePointPhase")
	FName m_ActorTag;
};
