// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCharacterAlias.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresCharacterAlias : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresCharacterAlias")
	TMap<FString, FString> m_AliasMap;
};
