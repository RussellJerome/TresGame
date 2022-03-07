// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresGame.h"
#include "TresBTDecorator_FloorHeightCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_FloorHeightCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	FBlackboardKeySelector Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	TEnumAsByte<EArithmeticKeyOperation::Type> Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	float MinRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	float TestHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	TEnumAsByte<ETresFloorTestMode> TestMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	bool m_bUseOverrideKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	FBlackboardKeySelector m_OverrideKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheck")
	FBlackboardKeySelector m_OverrideKeyLocation;
};
