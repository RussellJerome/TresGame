// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresGame.h"
#include "TresBTService_BlackboardVectorValueModifier.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_BlackboardVectorValueModifier : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifier")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifier")
	FVector m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifier")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifier")
	FBlackboardKeySelector m_BlackboardKeyValueB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_BlackboardVectorValueModifier")
	float m_Interval;
};
