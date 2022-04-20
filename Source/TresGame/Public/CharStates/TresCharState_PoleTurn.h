// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_PoleTurn.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCharState_PoleTurn : public UTresStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharState_PoleTurn")
	class AActor* m_pHitActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharState_PoleTurn")
	class USceneComponent* m_pHitComponent;
};
