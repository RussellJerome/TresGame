// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresShootFlowActor.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresShootFlowActor : public ATresGimmickActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresShootFlowActor")
	class UTresShootFlowComponent* m_Root;
};