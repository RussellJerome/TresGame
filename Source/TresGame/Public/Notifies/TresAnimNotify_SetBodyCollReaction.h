// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_SetBodyCollReaction.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_SetBodyCollReaction : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_SetBodyCollReaction")
	FName m_GroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_SetBodyCollReaction")
	bool m_bReset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_SetBodyCollReaction")
	ETresBodyCollReactionType m_ReactionType;
};
