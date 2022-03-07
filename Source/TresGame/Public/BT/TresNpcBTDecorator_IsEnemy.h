// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresNpcBTDecoratorBase.h"
#include "TresGame.h"
#include "TresNpcBTDecorator_IsEnemy.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_IsEnemy : public UTresNpcBTDecoratorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_IsEnemy")
	FBlackboardKeySelector m_Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_IsEnemy")
	TArray<ETresEnemyUniqueID> m_EnemiesUID;
};
