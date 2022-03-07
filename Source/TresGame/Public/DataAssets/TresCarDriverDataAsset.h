// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarDriverDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCarDriverDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarDriverDataAsset")
	class UStaticMesh* DriverMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCarDriverDataAsset")
	class UMaterialInterface* DriverMaterial;
};
