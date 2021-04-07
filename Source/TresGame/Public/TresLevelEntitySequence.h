// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame_StructsAndEnums.h"
#include "TresLevelEntitySequence.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TRESGAME_API UTresLevelEntitySequence : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresLevelEntitySequence")
	TArray<struct FTresLevelEntitySequenceConditionalAction> m_ConditionalActions;
};
