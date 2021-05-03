// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADWhizSound.generated.h"

UCLASS()
class SQEXSEAD_API ASQEXSEADWhizSound : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADWhizSound")
	class USQEXSEADWhizSeComponent* WhizComponent;
};
