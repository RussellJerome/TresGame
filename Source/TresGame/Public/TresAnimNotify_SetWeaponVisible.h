// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_SetWeaponVisible.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_SetWeaponVisible : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_SetWeaponVisible")
	bool m_bNewVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_SetWeaponVisible")
	bool m_bAppearEffect;
};
