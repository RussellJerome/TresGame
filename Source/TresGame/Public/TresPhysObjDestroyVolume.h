// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPhysObjDestroyVolume.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API ATresPhysObjDestroyVolume : public ATresVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhysObjDestroyVolume")
	bool m_bDisappearFilterTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresPhysObjDestroyVolume")
	TArray<FName> m_DisappearActorTags;
};
