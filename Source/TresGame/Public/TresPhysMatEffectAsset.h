// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresGame.h"
#include "TresPhysMatEffectAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresPhysMatEffectAsset : public UTresLoadAsset
{
	GENERATED_BODY()
public:
	struct FTresPhysMatEffectAssetUnit m_Effects;
};
