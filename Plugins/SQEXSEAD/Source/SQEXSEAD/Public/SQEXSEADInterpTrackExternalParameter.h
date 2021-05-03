// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "SQEXSEADInterpTrackExternalParameter.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackExternalParameter : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackExternalParameter")
	FName ExternalParameterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackExternalParameter")
	float OnMatineeEndSetParameterValue;

	virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
	virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
	virtual UTexture2D* GetTrackIcon() const override { return TrackIcon; }
#endif
};
