// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresGame_StructsAndEnums.h"
#include "TresEncountDisableVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresEncountDisableVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	TEnumAsByte<ETresEncountDisableVolumeType> m_ShapeType;
};
