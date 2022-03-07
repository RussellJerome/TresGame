// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresBTService_e_ex358_BlackboardNextActionParam.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_e_ex358_BlackboardNextActionParam : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_e_ex358_BlackboardNextActionParam")
	FBlackboardKeySelector m_NextActionBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_e_ex358_BlackboardNextActionParam")
	FBlackboardKeySelector m_bIsAppearAirBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_e_ex358_BlackboardNextActionParam")
	FBlackboardKeySelector m_AppearDistanceBlackboardKey;
};
