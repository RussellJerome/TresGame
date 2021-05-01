// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "AITestAttack_Base.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UAITestAttack_Base : public UTresAttackDefinitionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AITestAttack_Base")
	bool m_bFlyingMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AITestAttack_Base")
	struct FAITestTractionParam m_AnimNotifyTractionParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AITestAttack_Base")
	bool m_bWeaponVisible;
};
