// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_ThrowWeapon.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_ThrowWeapon : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ThrowWeapon")
	FName m_ThrowWeaponName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ThrowWeapon")
	FName m_WeaponAnimName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ThrowWeapon")
	bool m_bWeaponAnimLoop;
};
