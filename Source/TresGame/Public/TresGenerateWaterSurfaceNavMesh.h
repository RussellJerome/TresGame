// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateWaterSurfaceNavMesh.generated.h"

UCLASS()
class TRESGAME_API ATresGenerateWaterSurfaceNavMesh : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGenerateWaterSurfaceNavMesh")
	class UBoxComponent* m_BoxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresGenerateWaterSurfaceNavMesh")
	class UBoxComponent* m_NavModifierBoxComponent;
};
