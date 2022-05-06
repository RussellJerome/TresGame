// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_PlayWeaponSwingSE.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_PlayWeaponSwingSE : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponSwingSE")
	TEnumAsByte<ETresSoundAliasLabel_WeaponSwing::Type> m_SoundAliasID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponSwingSE")
	TEnumAsByte<ETresSoundAliasUnit::Type> m_SoundAliasUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponSwingSE")
	float m_VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponSwingSE")
	float m_PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponSwingSE")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayWeaponSwingSE")
	bool m_bFollow;
};
