// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_CommonAttackDefaultWalk_Q.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_CommonAttackDefaultWalk_Q : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackDefaultWalk_Q")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackDefaultWalk_Q")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackDefaultWalk_Q")
	float m_Angle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_CommonAttackDefaultWalk_Q")
	float m_ItemSpace;
};
