// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "TresBTService_GameplayFocus.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTService_GameplayFocus : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTService_GameplayFocus")
	float m_DelayClearFocusTime;
};
