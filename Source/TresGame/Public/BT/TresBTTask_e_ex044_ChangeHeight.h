// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BT/TresBTTask_Action.h"
#include "TresGame.h"
#include "TresBTTask_e_ex044_ChangeHeight.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_e_ex044_ChangeHeight : public UTresBTTask_Action
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_ChangeHeight")
	class UClass* m_ActionDefinition_e_ex044;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_ChangeHeight")
	TArray<FTresActionTaskParam> ActionTaskParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_ChangeHeight")
	FBlackboardKeySelector m_HeightValueKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex044_ChangeHeight")
	bool bUseBBKey;
};
