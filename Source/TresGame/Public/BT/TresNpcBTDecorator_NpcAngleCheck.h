// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresNpcBTDecoratorBase.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresNpcBTDecorator_NpcAngleCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_NpcAngleCheck : public UTresNpcBTDecoratorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	FBlackboardKeySelector m_Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	bool m_bUseToSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	FBlackboardKeySelector m_ToSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	bool m_bAbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	float m_Angle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcAngleCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
};
