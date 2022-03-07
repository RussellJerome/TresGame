// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_bx901_CheckPlayerDistance.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_e_bx901_CheckPlayerDistance : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_bx901_CheckPlayerDistance")
	float m_fMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_bx901_CheckPlayerDistance")
	float m_fMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_bx901_CheckPlayerDistance")
	bool m_bMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_bx901_CheckPlayerDistance")
	bool m_bMax;
};
