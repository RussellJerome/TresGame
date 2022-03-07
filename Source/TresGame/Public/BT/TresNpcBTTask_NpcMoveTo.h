// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_MoveTo.h"
#include "TresNpcBTTask_NpcMoveTo.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_NpcMoveTo : public UTresBTTask_MoveTo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_NpcMoveTo")
	bool m_bWalk;
};
