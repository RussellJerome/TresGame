// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresBTTask_GenerateRandomNumberArray.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_GenerateRandomNumberArray : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_GenerateRandomNumberArray")
	TArray<FTres_GenerateRandomNumber_Param> m_ParamName;
};
