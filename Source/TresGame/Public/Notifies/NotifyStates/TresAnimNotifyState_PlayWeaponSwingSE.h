// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresGame.h"
#include "TresAnimNotifyState_PlayWeaponSwingSE.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotifyState_PlayWeaponSwingSE : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	TEnumAsByte<ETresSoundAliasLabel_WeaponSwing::Type> m_SoundAliasID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	TEnumAsByte<ETresSoundAliasUnit::Type> m_SoundAliasUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	float m_StartWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	float m_VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	float m_PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	bool m_bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotifyState_PlayWeaponSwingSE")
	float m_FadeOutDuration;
};
