// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_WallKick.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCharState_WallKick : public UTresStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharState_WallKick")
	class AActor* m_pHitActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharState_WallKick")
	class UPrimitiveComponent* m_pHitComponent;
};
