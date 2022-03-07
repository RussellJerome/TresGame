// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "MerNavOctreeRenderingComponent.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class MERCUNA_API UMerNavOctreeRenderingComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MerNavOctreeRenderingComponent")
	class UMaterialInterface* SelectionMaterial;
};
