// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_e_ex006_ScrumStateCheckPersentage.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_e_ex006_ScrumStateCheckPersentage : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex006_ScrumStateCheckPersentage")
	TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex006_ScrumStateCheckPersentage")
	int m_Value;
};
