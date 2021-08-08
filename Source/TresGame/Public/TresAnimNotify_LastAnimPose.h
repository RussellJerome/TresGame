// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_LastAnimPose.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_LastAnimPose : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_LandAnimPose")
	TEnumAsByte<ETresLastAnimPose> m_LastAnimPose;
};
