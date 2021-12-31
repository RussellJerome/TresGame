// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresGame.h"
#include "TresAnimNotify_ChangeEyeLookAtBlendParam.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresAnimNotify_ChangeEyeLookAtBlendParam : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ChangeEyeLookAtBlendParam")
	FVector m_ParamEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ChangeEyeLookAtBlendParam")
	float m_InterpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ChangeEyeLookAtBlendParam")
	ESQEX_ChangeFaceAnimBlendParamFunction m_InterpFunc;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ChangeEyeLookAtBlendParam")
	float m_InterpExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ChangeEyeLookAtBlendParam")
	bool m_bSetInitParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_ChangeEyeLookAtBlendParam")
	FVector m_ParamStart;
};
