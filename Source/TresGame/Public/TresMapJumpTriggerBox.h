// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresTriggerBox.h"
#include "TresGame.h"
#include "TresMapJumpTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresMapJumpTriggerBox : public ATresTriggerBox
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpTriggerBox")
	FName m_MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpTriggerBox")
	FName m_TargetTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpTriggerBox")
	TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpTriggerBox")
	bool m_BlueprintMapJump;

	//struct FScriptMulticastDelegate OnMapJump;
};
