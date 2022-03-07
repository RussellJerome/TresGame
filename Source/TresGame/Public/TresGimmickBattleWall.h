// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBattleWall.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresGimmickBattleWall : public ATresGimmickStaticBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGimmickBattleWall")
	bool m_EnableChangeCinematicEvent;

	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickBattleWall")
	void OnChangeCinematicModeProc(bool bIsCinematicMode);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "TresGimmickBattleWall")
	void BPEV_OnChangeCinematicMode(bool bIsCinematicMode);
};
