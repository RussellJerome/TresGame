// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame_StructsAndEnums.h"
#include "TresVoiceGroupSet.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresVoiceGroupSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVoiceGroupSet")
	TArray<FTresVoiceGroup> m_VoiceGroups;
	
};
