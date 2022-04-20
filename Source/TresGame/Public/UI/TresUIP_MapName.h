// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/TresUIParts.h"
#include "GFxObject.h"
#include "TresUIP_MapName.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUIP_MapName : public UTresUIParts
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresUIP_MapName")
	class UGFxObject* m_MapNameRoot;
};
