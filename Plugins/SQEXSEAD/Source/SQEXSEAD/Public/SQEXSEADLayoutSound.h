// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADLayoutSound.generated.h"

UCLASS()
class SQEXSEAD_API ASQEXSEADLayoutSound : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutSound")
	class USQEXSEADLayoutComponent* LayoutComponent;
};
