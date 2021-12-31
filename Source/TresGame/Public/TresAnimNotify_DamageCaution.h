// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_DamageCaution.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_DamageCaution : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_DamageCaution")
	TEnumAsByte<ETresRiskDodgeType> DodgeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_DamageCaution")
	float m_EntryTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_DamageCaution")
	float m_LimitAngle;
};
