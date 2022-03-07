// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTDecorator_RangeCheck.h"
#include "TresNpcBTDecorator_NpcRangeCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_NpcRangeCheck : public UTresBTDecorator_RangeCheck
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcRangeCheck")
	bool m_bUseLockOnTargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_NpcRangeCheck")
	bool m_bSimpleCalculateRange;
};
