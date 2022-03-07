// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_PlayVoice.generated.h"

/**
 * 
 */

UCLASS()
class TRESGAME_API UTresAnimNotify_PlayVoice : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	class USoundBase* m_VoiceAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	TArray<FTresRandomVoice> m_RandomVoiceAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	FName m_VoiceGroupName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	float m_VolumeMultiplier;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	float m_PitchMultiplier;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	FName m_SocketName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoice")
	bool m_bFollow;
};

