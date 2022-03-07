// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresNpcBTTask_SetFriendTarget.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SetFriendTarget : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendTarget")
	ETresChrUniqueID m_ChrUniqueID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendTarget")
	bool m_isTargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendTarget")
	bool m_isDestination;
};
