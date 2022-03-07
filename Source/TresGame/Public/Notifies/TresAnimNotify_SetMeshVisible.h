// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_SetMeshVisible.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_SetMeshVisible : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_SetMeshVisible")
	bool m_bNewVisible;
};
