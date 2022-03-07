// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_GetAttackPermission.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_GetAttackPermission : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_GetAttackPermission")
	bool m_bCheckOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_GetAttackPermission")
	float m_ElapsedTimeSinceLastAttack;
};
