// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresAlbumPhotoManager.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAlbumPhotoManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAlbumPhotoManager")
	TArray<int> m_PhotoIdList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAlbumPhotoManager")
	TArray<struct FTresPhotoLoadWork> m_PhotoLoadWorkPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAlbumPhotoManager")
	class UTexture2D* m_pTargetTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAlbumPhotoManager")
	TArray<class UTexture2D*> m_ReleaseTextureBuffer;
};
