// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADLayoutObstruction.generated.h"

UCLASS()
class SQEXSEAD_API ASQEXSEADLayoutObstruction : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADLayoutObstruction")
	class USQEXSEADLayoutObstructionComponent* ObstructionComponent;
};
