// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADAnimNotify_PlayAutoSe.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAnimNotify_PlayAutoSe : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlayAutoSe")
	struct FSQEXSEADAnimNotifyPlayAutoSeParams PlaySettings;
};
