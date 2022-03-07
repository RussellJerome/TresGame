// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresFootStepSet.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresFootStepSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFootStepSet")
	class UMaterialInterface* m_WetnessDecalMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFootStepSet")
	class UMaterialInterface* m_DecalMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFootStepSet")
	class UMaterialInterface* m_MudDecalMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFootStepSet")
	class UMaterialInterface* m_SnowDecalMaterial;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresFootStepSet")
	class UMaterialInterface* m_DefaultTrailMaterial;
};
