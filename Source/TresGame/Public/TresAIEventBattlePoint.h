// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGame_StructsAndEnums.h"
#include "TresAIEventBattlePoint.generated.h"

UCLASS()
class TRESGAME_API ATresAIEventBattlePoint : public AActor
{
	GENERATED_BODY()
public:
	//struct FScriptMulticastDelegate OnPhaseChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAIEventBattlePoint")
	bool m_UseBattlePlayerEmotionManager;

	UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	void SetPhaseTag(const FGameplayTag& InTag) {};

	UFUNCTION(BlueprintCallable, Category = "TresAIEventBattlePoint")
	bool IsPhaseTag(const FGameplayTag& InTag) { return false; };
};
