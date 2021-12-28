// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SQEX_ParticleAttachDataBase.h"
#include "TresGame.h"
#include "SQEX_ParticleAttachData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API USQEX_ParticleAttachData : public USQEX_ParticleAttachDataBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FName AttachName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool bUseCommonEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	TArray<struct FSQEX_AttachEffectData> EffectDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	int PlayNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	TEnumAsByte<ESQEX_CHANGE_ANIMATION_TYPE> WhenChangeAnimationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	TEnumAsByte<ESQEX_ATTACH_EFFECT_END_TYPE> AttachEffectEndType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	float FadeIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	float FadeOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	float StartDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	float EndDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool ToAttach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool DetachAtEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool bAbsoluteLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool bAbsoluteRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool bAbsoluteScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FName EndSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FVector LocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FRotator RotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FVector ScaleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	FVector ParticleColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	float ParticleAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachData")
	bool bOnCastShadow;
};
