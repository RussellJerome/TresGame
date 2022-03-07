// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_CoverWaitCheck.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_CoverWaitCheck : public UTresNpcBTDecoratorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_CoverWaitCheck")
	float m_AdjustLength;
};
