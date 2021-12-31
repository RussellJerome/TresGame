// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresGame.h"
#include "TresAnimNotifyState_ChangeBodyCollReaction.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_ChangeBodyCollReaction : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_ChangeBodyCollReaction")
	FName m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_ChangeBodyCollReaction")
	ETresBodyCollReactionType m_ReactionType;
};
