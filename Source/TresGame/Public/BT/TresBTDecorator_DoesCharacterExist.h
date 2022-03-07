// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_DoesCharacterExist.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_DoesCharacterExist : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_DoesCharacterExist")
	TArray<ETresChrUniqueID> m_FriendsUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_DoesCharacterExist")
	TArray<ETresEnemyUniqueID> m_EnemiesUID;
};
