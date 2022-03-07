// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresGame.h"
#include "TresBTDecorator_GameLevelCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_GameLevelCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_GameLevelCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_GameLevelCheck")
	TEnumAsByte<ETresGameLevelID> m_GameLevel;
};
