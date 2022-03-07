// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "TresGame.h"
#include "TresBTDecorator_IsEventBattlePointPhase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_IsEventBattlePointPhase : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsEventBattlePointPhase")
	TArray<FGameplayTag> m_PhaseTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsEventBattlePointPhase")
	bool m_bUseActorTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsEventBattlePointPhase")
	FName m_ActorTag;
};
