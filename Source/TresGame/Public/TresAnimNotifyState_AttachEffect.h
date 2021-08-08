// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "TresGame.h"
#include "TresAnimNotifyState_AttachEffect.generated.h"

/**
 *
 */

UCLASS()
class TRESGAME_API UTresAnimNotifyState_AttachEffect : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TArray<FSQEX_AttachEffectNotifyDataToMetaAttachData> MetaAttachDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_AttachEffect")
	TArray<FSQEX_AttachEffectNotifyDataToDataAsset> AttachDataList;
};
