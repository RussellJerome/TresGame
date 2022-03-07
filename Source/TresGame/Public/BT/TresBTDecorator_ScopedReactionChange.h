// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_ScopedReactionChange.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ScopedReactionChange : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ScopedReactionChange")
	ETresBodyCollReactionType eBodyReactionType_;
};
