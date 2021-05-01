// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPhotoHologramAreaVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPhotoHologramAreaVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramAreaVolume")
	bool IsEndOverlapTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramAreaVolume")
	bool IsWarningEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramAreaVolume")
	bool IsPlayerLocationResetEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramAreaVolume")
	bool IsHologramLocationResetEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramAreaVolume")
	bool IsHologramDestroyEvent;
};
