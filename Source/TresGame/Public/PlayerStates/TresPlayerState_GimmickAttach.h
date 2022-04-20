// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_GimmickAttach.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPlayerState_GimmickAttach : public UTresStateBase
{
	GENERATED_BODY()
public:
	void OnAnimStarted(class UAnimationAsset* InAnimAsset) {};
	void OnAnimEnded(class UAnimationAsset* InAnimAsset, bool bInterrupted) {};
};
