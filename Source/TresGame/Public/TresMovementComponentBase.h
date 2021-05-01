// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "TresGame.h"
#include "TresMovementComponentBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresMovementComponentBase : public UPawnMovementComponent
{
	GENERATED_BODY()
public:

	FTresMovementComponentPostPhysicsTickFunction m_PostPhysicsTickFunction;
};
