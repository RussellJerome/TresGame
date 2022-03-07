// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_IsAscensionMode_e_ex301.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTDecorator_IsAscensionMode_e_ex301 : public UTresNpcBTDecoratorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTDecorator_IsAscensionMode_e_ex301")
	FBlackboardKeySelector m_Source;
};
