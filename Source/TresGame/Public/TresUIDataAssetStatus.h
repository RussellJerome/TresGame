// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "SwfMovie.h"
#include "TresUIDataAssetStatus.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIDataAssetStatus : public UTresUIDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetStatus")
	class USwfMovie* FaceSwfAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetStatus")
	TArray<class UObject*> FaceSwfRefAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetStatus")
	bool EnableWearForm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetStatus")
	class UClass* CampTopUIActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetStatus")
	class UTexture* MenuFaceIcon;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIDataAssetStatus")
	//class UTresUIHudCommandDataAsset* HudCommandDataAsset;
};
