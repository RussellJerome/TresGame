// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TresVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresVolume")
	class UObject* UserData;
};
