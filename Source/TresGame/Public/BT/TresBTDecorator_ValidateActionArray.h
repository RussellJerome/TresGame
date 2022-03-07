// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_ValidateActionArray.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ValidateActionArray : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateActionArray")
	TArray<FTres_ValidateAction_Param> m_ValidateActionParam;
};
