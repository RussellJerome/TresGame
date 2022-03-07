// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresGame.h"
#include "TresNpcBTTask_SetFriendLinkCommand.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresNpcBTTask_SetFriendLinkCommand : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendLinkCommand")
	bool m_CommandSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendLinkCommand")
	TEnumAsByte<ETresCommandKind> m_CommandKind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendLinkCommand")
	float m_ReceptionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresNpcBTTask_SetFriendLinkCommand")
	bool m_CommandAuto;
};
