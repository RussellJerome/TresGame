// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresGame.h"
#include "TresMapJumpVolume.generated.h"

//These Delegates may not be correct!
DECLARE_MULTICAST_DELEGATE(OnMapJump);

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresMapJumpVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpVolume")
	FName m_MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpVolume")
	FName m_TargetTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpVolume")
	TEnumAsByte<ETresMapJumpFadeKind> m_FadeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpVolume")
	bool m_BlueprintMapJump;

	//UPROPERTY(BlueprintAssignable, Category = "TresMapJumpVolume")
	//FTresMapJump OnMapJump;

	UFUNCTION(BlueprintCallable, Category = "TresMapJumpVolume")
	void InvokeMapJump() {};
};
