// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresNpcBTDecoratorBase.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresGame.h"
#include "TresNpcBTDecorator_EnemyCountCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_EnemyCountCheck : public UTresNpcBTDecoratorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_EnemyCountCheck")
	FBlackboardKeySelector m_Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_EnemyCountCheck")
	float m_Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_EnemyCountCheck")
	int m_EnemyNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_EnemyCountCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_EnemyCountCheck")
	TArray<ETresEnemyUniqueID> m_IgnoreEnemiesUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_EnemyCountCheck")
	bool m_bEnableLockon;
};
