// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresCharMovementComponent.h"
#include "Mercuna3DMovement_StructsAndEnums.h"
#include "TresAICharMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAICharMovementComponent : public UTresCharMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAICharMovementComponent")
	struct FMercuna3DMovementProperties MovementProperties;
};
