// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresDirectionalTriggerBoxTickBase.h"
#include "TresGame.h"
#include "TresMapJumpDirectionalTriggerBox.generated.h"

//These Delegates may not be correct!
DECLARE_MULTICAST_DELEGATE(OnMapJump);

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresMapJumpDirectionalTriggerBox : public ATresDirectionalTriggerBoxTickBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBox")
	FName m_MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBox")
	FName m_TargetTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBox")
	TEnumAsByte<ETresMapJumpFadeKind> m_FadeType = ETresMapJumpFadeKind::MAPJUMP_FADE_KIND_WIPEOUT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBox")
	bool m_BlueprintMapJump;

	//UPROPERTY(BlueprintAssignable, Category = "TresMapJumpDirectionalTriggerBox")
	//FTresMapJump OnMapJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBox")
	float m_OverrideMarkerSize = 1950.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapJumpDirectionalTriggerBox")
	class UTresMapMarkerComponent* MapMarkerComponent;

	UFUNCTION(BlueprintCallable, Category = "TresMapJumpDirectionalTriggerBox")
	void SetActiveMapMarker(bool Active) {};

	UFUNCTION(BlueprintCallable, Category = "TresMapJumpDirectionalTriggerBox")
	void InvokeMapJump() {};

	UFUNCTION(BlueprintCallable, Category = "TresMapJumpDirectionalTriggerBox")
	void BPE_MapJump() {};
};
