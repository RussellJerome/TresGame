// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPhotoHologramDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPhotoHologramDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramDataAsset")
	class UDataTable* m_MapDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramDataAsset")
	class UDataTable* m_HologramDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramDataAsset")
	class UDataTable* m_MapSetDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramDataAsset")
	TArray<TAssetPtr<class UTexture>> m_UIImageBgList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhotoHologramDataAsset")
	TArray<TAssetPtr<class UTexture>> m_UIImageStartList;
};
