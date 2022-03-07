// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresComNpcMeshSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresComNpcMeshSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresComNpcMeshSet")
	TArray<struct FTresComNpcMeshSetDatas> m_Datas;
};
