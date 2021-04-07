// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresLevelEntitySequenceAction.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresLevelEntitySequenceAction : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntitySequenceAction")
	FName m_TargetGroup;
};
