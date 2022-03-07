// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EngineData.h"
#include "TresGame.h"
#include "TresAnimNotify_AttachEffect.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_AttachEffect : public UAnimNotify
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
