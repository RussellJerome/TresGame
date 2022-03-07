// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_ElapsedTimeSinceLastHit.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ElapsedTimeSinceLastHit : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ElapsedTimeSinceLastHit")
	TEnumAsByte<EArithmeticKeyOperation::Type> Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ElapsedTimeSinceLastHit")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ElapsedTimeSinceLastHit")
	class UClass* ActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ElapsedTimeSinceLastHit")
	FBlackboardKeySelector m_BlackboardKeyLastHitAttackDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ElapsedTimeSinceLastHit")
	FBlackboardKeySelector m_BlackboardKeyLastHitTimestamp;
};
