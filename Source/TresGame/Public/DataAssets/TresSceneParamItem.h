// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSceneParamItem.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresSceneParamItem : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSceneParamItem")
	class UDataTable* m_SceneColorAttraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSceneParamItem")
	class UDataTable* m_SceneColorMagic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSceneParamItem")
	class UDataTable* m_SceneColorShootLock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSceneParamItem")
	class UDataTable* m_SceneColorWeaponForm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresSceneParamItem")
	class UDataTable* m_SceneColorDisneyMagic;
};
