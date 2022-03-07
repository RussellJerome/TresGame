// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_CompareHeight.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CompareHeight : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	FBlackboardKeySelector Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	bool bUseSourceCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	bool bUseSourceBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	bool bUseTargetCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	bool bUseTargetBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CompareHeight")
	float LiteralRange;
};
