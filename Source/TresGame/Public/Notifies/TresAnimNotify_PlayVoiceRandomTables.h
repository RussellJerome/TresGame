// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_PlayVoiceRandomTables.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_PlayVoiceRandomTables : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoiceRandomTables")
	TArray<struct FRandomTableParameter> m_RandomVoiceTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoiceRandomTables")
	float m_VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoiceRandomTables")
	float m_PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoiceRandomTables")
	FName m_SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayVoiceRandomTables")
	bool m_bFollow;
};
