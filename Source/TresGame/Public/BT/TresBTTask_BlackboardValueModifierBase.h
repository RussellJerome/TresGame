// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_BlackboardValueModifierBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardValueModifierBase : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardValueModifierBase")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardValueModifierBase")
	FBlackboardKeySelector m_BlackboardKey;
};
