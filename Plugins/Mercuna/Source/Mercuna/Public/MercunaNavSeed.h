// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MercunaNavSeed.generated.h"

UCLASS()
class MERCUNA_API AMercunaNavSeed : public AActor
{
	GENERATED_BODY()
public:
	AMercunaNavSeed()
	{
		PrimaryActorTick.bCanEverTick = true;
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	};
};
