// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresItemSynthesisDataTableSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresItemSynthesisDataTableSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresItemSynthesisDataTableSet")
	class UDataTable* m_ItemSynthesisData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresItemSynthesisDataTableSet")
	class UDataTable* m_ItemCollectData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresItemSynthesisDataTableSet")
	class UDataTable* m_ItemMotifData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresItemSynthesisDataTableSet")
	class UDataTable* m_ItemWeaponEnhanceData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresItemSynthesisDataTableSet")
	class UDataTable* m_ItemWeaponEnhanceIconData;
};
