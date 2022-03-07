// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTDecorator_FloorHeightCheck.h"
#include "TresBTDecorator_FloorHeightCheckSpecifiedLocationContext.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_FloorHeightCheckSpecifiedLocationContext : public UTresBTDecorator_FloorHeightCheck
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_FloorHeightCheckSpecifiedLocationContext")
	FBlackboardKeySelector LocationContext;
};
