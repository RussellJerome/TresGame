// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_e_ex026_GetAttackLocation.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTTask_e_ex026_GetAttackLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex026_GetAttackLocation")
	class UClass* m_ActionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex026_GetAttackLocation")
	FBlackboardKeySelector m_Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTTask_e_ex026_GetAttackLocation")
	FBlackboardKeySelector m_BlackboardKey;
};
