// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresEnemyShipBTDecorator_IsAliveShipCore.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresEnemyShipBTDecorator_IsAliveShipCore : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEnemyShipBTDecorator_IsAliveShipCore")
	TEnumAsByte<ETresEnemyShip> m_LocType;
};
