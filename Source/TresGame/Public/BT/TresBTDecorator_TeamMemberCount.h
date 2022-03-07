// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "GenericTeamAgentInterface.h"
#include "TresBTDecorator_TeamMemberCount.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_TeamMemberCount : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_TeamMemberCount")
	TEnumAsByte<ETeamAttitude::Type> m_team;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_TeamMemberCount")
	TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_TeamMemberCount")
	int m_memberCount;
};
