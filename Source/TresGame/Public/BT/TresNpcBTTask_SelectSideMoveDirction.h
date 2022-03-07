// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SelectSideMoveDirction.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SelectSideMoveDirction : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SelectSideMoveDirction")
	bool m_bAwayFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SelectSideMoveDirction")
	bool m_bUseEventBattlePoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SelectSideMoveDirction")
	float m_LimitLength;
};
