// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_ActorValueCheckBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ActorValueCheckBase : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ActorValueCheckBase")
	FName m_BBActorName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ActorValueCheckBase")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_Operation;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ActorValueCheckBase")
	bool m_bUseBB;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ActorValueCheckBase")
	FBlackboardKeySelector m_CheckValueBBKey;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ActorValueCheckBase")
	float m_CheckValue;
};
