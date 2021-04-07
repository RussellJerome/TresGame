// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresLevelEntityControlVolumeData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLevelEntityControlVolumeData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityControlVolumeData")
	FName m_Tag;
};
