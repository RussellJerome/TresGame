// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_EntryLimit.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_EntryLimit : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_EntryLimit")
	int m_MaxEntries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_EntryLimit")
	bool m_IncrementOnlyOnSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_EntryLimit")
	bool m_bInitSubtree;
};
