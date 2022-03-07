// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_e_ex354_TargetMoveDirection.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_e_ex354_TargetMoveDirection : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex354_TargetMoveDirection")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex354_TargetMoveDirection")
	TEnumAsByte<EEX354_TargetMoveDir> m_TargetMoveDir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex354_TargetMoveDirection")
	float m_fAngleDiffRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex354_TargetMoveDirection")
	float m_fMinTargetVelocity;
};
