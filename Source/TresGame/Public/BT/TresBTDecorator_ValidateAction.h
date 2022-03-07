// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ValidateAction.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_ValidateAction : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	class UClass* ActionDefinitionOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	bool bUseBlackboardQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	FBlackboardKeySelector ActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	bool bValidateLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	bool bValidateOrientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_ValidateAction")
	bool bValidateExecution;
};
