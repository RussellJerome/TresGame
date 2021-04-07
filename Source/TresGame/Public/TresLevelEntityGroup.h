// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresLevelEntityGroup.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLevelEntityGroup : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntityGroup")
	class UTresLevelEntityManager* m_Manager;
};
