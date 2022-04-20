// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxObject.h"
#include "TresASProxy.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresASProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresASProxy")
	class UGFxObject* m_ASObject;
};
