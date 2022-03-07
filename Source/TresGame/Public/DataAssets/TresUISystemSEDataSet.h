// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISystemSEDataSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUISystemSEDataSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* Click;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* Decide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* Cancel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* Beep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* Tab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* GameHelpOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUISystemSEDataSet")
	class USoundBase* GameHelpMessage;
};
