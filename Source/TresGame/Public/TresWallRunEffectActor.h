// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresWallRunEffectActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresWallRunEffectActor : public ATresGimmickActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresWallRunEffectActor")
	class UTresWallRunEffectComponent* m_Root;
};
