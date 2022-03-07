// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_CoopStatusCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CoopStatusCheck : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CoopStatusCheck")
	ETresCoopRunningStatus m_CoopStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CoopStatusCheck")
	bool bReferenceFromTeam;
};
