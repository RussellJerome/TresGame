// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEX_ParticleAttachDataAsset.h"
#include "TresEquipDataBase.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresEquipDataBase : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresEquipDataBase")
	class USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;
};
