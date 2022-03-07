// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/TresUIDataAsset.h"
#include "TresUIDataAssetSlideShow.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetSlideShow : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSlideShow")
	class USwfMovie* SwfAssetHudSlideShow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSlideShow")
	TArray<struct FSlideShowData> Datas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSlideShow")
	TArray<class UObject*> SlideShowSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSlideShow")
	TArray<struct FSlideShowIconData> IconDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetSlideShow")
	TArray<struct FSlideShowFrameData> FrameDatas;
};
