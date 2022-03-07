// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_CanCoop.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_CanCoop : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanCoop")
	class UClass* CoopDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanCoop")
	ETresCanCoopJoinRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanCoop")
	bool bRecruitment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanCoop")
	bool bUseBlackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanCoop")
	FBlackboardKeySelector BlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_CanCoop")
	bool bEditRecruitment;
};
