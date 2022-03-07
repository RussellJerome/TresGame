// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresGame.h"
#include "TresBTService_Hate.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_Hate : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Hate")
	TEnumAsByte<ETresHateModifier::Type> m_HateModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Hate")
	TEnumAsByte<ETresValueModifierMethod::Type> m_ValueModifierType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Hate")
	float m_Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Hate")
	bool m_bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_Hate")
	struct FBlackboardKeySelector m_TargetActor;
};
