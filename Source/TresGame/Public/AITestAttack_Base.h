// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresGame.h"
#include "AITestAttack_Base.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UAITestAttack_Base : public UTresAttackDefinitionBase
{
	GENERATED_BODY()
public:
	/*Whether or not Flying Mode is enabled*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AITestAttack_Base")
	bool m_bFlyingMode;

	/*The Anim Notify Traction Param*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AITestAttack_Base")
	struct FAITestTractionParam m_AnimNotifyTractionParam;

	/*Whether or not the Weapon is visible*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AITestAttack_Base")
	bool m_bWeaponVisible;
};
