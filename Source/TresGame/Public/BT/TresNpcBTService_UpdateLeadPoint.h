// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "TresNpcBTService_UpdateLeadPoint.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTService_UpdateLeadPoint : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTService_UpdateLeadPoint")
	FBlackboardKeySelector m_LeadTarget;
};
