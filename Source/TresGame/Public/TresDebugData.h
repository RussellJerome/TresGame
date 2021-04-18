// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresDebugData.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresDebugData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugData")
	TArray<class UPackage*> m_UPackage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresDebugData")
	TArray<class UObject*> m_UObject;
};
