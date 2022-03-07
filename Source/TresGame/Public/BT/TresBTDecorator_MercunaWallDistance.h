// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_MercunaWallDistance.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_MercunaWallDistance : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_MercunaWallDistance")
	float m_fTestDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_MercunaWallDistance")
	int m_TestCount;
};
