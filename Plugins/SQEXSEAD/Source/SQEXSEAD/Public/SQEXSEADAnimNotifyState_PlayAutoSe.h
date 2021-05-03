// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADAnimNotifyState_PlayAutoSe.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAnimNotifyState_PlayAutoSe : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_PlayAutoSe")
	struct FSQEXSEADAnimNotifyPlayAutoSeParams PlaySettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_PlayAutoSe")
	float FadeOutDuration;
};
