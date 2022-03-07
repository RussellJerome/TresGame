// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresObjectsArray.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresObjectsArray : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresObjectsArray")
	TArray<class UObject*> m_Objects;
};
