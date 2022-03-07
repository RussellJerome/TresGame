// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_PlaySE.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_PlaySE : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	class USoundBase* m_SoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	TEnumAsByte<ETresSoundAliasLabel> m_SoundAliasID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	ETresSoundAliasUnitID m_SoundAliasUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	float m_VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	float m_PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlaySE")
	bool m_bFollow;
};
