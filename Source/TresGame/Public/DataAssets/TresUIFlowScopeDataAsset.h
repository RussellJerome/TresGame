// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresUIFlowScopeDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIFlowScopeDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	struct FTresUIBlurParams InitialUIBlurParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	struct FTresUIBlurParams InUIBlurParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	float InUIBlurTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	struct FTresUIBlurParams OutUIBlurParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	float OutUIBlurTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	struct FTresUIBlurParams SelectUIBlurParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	float SelectUIBlurTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIFlowScopeDataAsset")
	class UTexture* UIBlurMaskTexture;
};
