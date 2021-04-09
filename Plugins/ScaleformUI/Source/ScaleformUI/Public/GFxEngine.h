// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxEngine.generated.h"

/**
 * 
 */
UCLASS()
class SCALEFORMUI_API UGFxEngine : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GFxEngine")
	int RefCount;
};
