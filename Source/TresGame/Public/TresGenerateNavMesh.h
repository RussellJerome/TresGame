// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateNavMesh.generated.h"

UCLASS()
class TRESGAME_API ATresGenerateNavMesh : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGenerateNavMesh")
	class UBoxComponent* m_BoxComponent;
};
