// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresStaticSESet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresStaticSESet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresStaticSESet")
	class USoundBase* m_Assets;
};
