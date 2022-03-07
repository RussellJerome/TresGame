// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSoundAliasSet.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresSoundAliasSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSoundAliasSet")
	class USoundBase* m_SoundCueAlias;
};
