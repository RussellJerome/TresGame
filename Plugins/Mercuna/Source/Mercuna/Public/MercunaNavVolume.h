// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MercunaNavVolume.generated.h"

/**
 * 
 */
UCLASS()
class MERCUNA_API AMercunaNavVolume : public AVolume
{
	GENERATED_BODY()
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MercunaNavVolume")
	class AMercunaNavOctree* NavOctree;
};
