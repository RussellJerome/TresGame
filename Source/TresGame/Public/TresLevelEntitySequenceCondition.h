// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresLevelEntitySequenceCondition.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresLevelEntitySequenceCondition : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntitySequenceCondition")
	FName m_MonitoringGroup;
};
