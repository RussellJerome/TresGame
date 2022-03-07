// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_BlackboardFloatValueModifierArray.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardFloatValueModifierArray : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardFloatValueModifierArray")
	TArray<FTresBlackboardFloatValueModifier> m_FloatValueModifiers;
};
