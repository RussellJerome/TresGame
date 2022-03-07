// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame.h"
#include "TresAIEventBattlePoint.generated.h"

//These Delegates may not be correct!
DECLARE_MULTICAST_DELEGATE(OnPhaseChange);

UCLASS()
class TRESGAME_API ATresAIEventBattlePoint : public AActor
{
	GENERATED_BODY()
public:
	//UPROPERTY(BlueprintAssignable, Category = "TresAIEventBattlePoint")
	//FTresPhaseChange OnPhaseChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIEventBattlePoint")
	bool m_UseBattlePlayerEmotionManager;

	UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	void SetPhaseTag(const FGameplayTag& InTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	bool IsPhaseTag(const FGameplayTag& InTag) { return false; };
};
