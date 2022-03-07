// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EngineData.h"
#include "Engine/SQEX_ParticleAttachDataBase.h"
#include "TresGame.h"
#include "SQEX_ParticleAttachDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API USQEX_ParticleAttachDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachDataAsset")
	TArray<class USQEX_ParticleAttachDataBase*> EffectDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEX_ParticleAttachDataAsset")
	TArray<struct FSQEX_StructParticleAttachData> EffectDataList;
};
