// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_PlayWeaponHitSE.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_PlayWeaponHitSE : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponHitSE")
	TEnumAsByte<ETresSoundAliasLabel_WeaponHit::Type> m_SoundAliasID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponHitSE")
	TEnumAsByte<ETresSoundAliasUnit::Type> m_SoundAliasUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponHitSE")
	float m_VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponHitSE")
	float m_PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponHitSE")
	FName m_SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponHitSE")
	bool m_bFollow;
};
