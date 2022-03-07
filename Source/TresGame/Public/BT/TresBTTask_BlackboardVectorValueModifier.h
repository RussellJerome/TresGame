// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_BlackboardValueModifierBase.h"
#include "TresBTTask_BlackboardVectorValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_BlackboardVectorValueModifier : public UTresBTTask_BlackboardValueModifierBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardVectorValueModifier")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardVectorValueModifier")
	FVector m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_BlackboardVectorValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValueB;
};
