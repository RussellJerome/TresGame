// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_SequentialExecProcess.h"
#include "TresBTTask_SurroundShadowMove_T.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_SurroundShadowMove_T : public UTresBTTask_SequentialExecProcess
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundShadowMove_T")
	class UClass* m_CommonLocomotionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundShadowMove_T")
	float m_CommonUpdateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundShadowMove_T")
	float m_SurroundRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundShadowMove_T")
	float m_SurroundDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundShadowMove_T")
	float m_SurroundRadiusValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_SurroundShadowMove_T")
	float m_SurroundTimeLimit;
};
