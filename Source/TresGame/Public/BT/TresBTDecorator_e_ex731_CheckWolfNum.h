// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_e_ex731_CheckWolfNum.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_e_ex731_CheckWolfNum : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex731_CheckWolfNum")
	int m_iMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex731_CheckWolfNum")
	int m_iMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex731_CheckWolfNum")
	bool m_bMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_e_ex731_CheckWolfNum")
	bool m_bMax;
};
