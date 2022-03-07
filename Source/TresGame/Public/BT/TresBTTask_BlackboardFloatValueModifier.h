// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_BlackboardValueModifierBase.h"
#include "TresBTTask_BlackboardFloatValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardFloatValueModifier : public UTresBTTask_BlackboardValueModifierBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardFloatValueModifier")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardFloatValueModifier")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardFloatValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValueB;
};
