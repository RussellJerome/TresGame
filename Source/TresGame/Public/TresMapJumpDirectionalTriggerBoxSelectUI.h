// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresMapJumpDirectionalTriggerBox.h"
#include "TresGame.h"
#include "TresMapJumpDirectionalTriggerBoxSelectUI.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresMapJumpDirectionalTriggerBoxSelectUI : public ATresMapJumpDirectionalTriggerBox
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBoxSelectUI")
	struct FTresLocText ChoiceTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBoxSelectUI")
	TArray<struct FTresLocText> Choices;
};
