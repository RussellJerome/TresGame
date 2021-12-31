// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_FaceAnimEye.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_FaceAnimEye : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	ETresFaceAnimType FaceAnimType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	float m_BlendInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_FaceAnim")
	bool IsLoop;
};
