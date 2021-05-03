// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "SQEXSEADInterpTrackInstBGMControl.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstBGMControl : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackInstBGMControl")
	float LastUpdatePosition;
};
