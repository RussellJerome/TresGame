// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "SQEXSEADInterpTrackInstEvent.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackInstEvent : public UInterpTrackInst
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackInstEvent")
	float LastUpdatePosition;
};
