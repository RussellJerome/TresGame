// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresMapSetVolume.h"
#include "TresMapSetVolumeEx.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresMapSetVolumeEx : public ATresMapSetVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSetVolumeEx")
	class UTresMapSet* EndOverlapMapset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresMapSetVolumeEx")
	FName EndOverlapCommandName;
};
