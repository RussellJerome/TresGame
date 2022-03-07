// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_Bonamik_EnableGroundCollision.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_Bonamik_EnableGroundCollision : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_EnableGroundCollision")
	bool m_Enable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_Bonamik_EnableGroundCollision")
	TArray<FString> m_Groups;
};
