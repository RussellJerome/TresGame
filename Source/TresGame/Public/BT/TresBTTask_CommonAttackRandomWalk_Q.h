// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialAttackProcess.h"
#include "TresBTTask_CommonAttackRandomWalk_Q.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_CommonAttackRandomWalk_Q : public UTresBTTask_SequentialAttackProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackRandomWalk_Q")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackRandomWalk_Q")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackRandomWalk_Q")
	float m_CommonOnRingAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackRandomWalk_Q")
	float m_ItemSpace;
};
