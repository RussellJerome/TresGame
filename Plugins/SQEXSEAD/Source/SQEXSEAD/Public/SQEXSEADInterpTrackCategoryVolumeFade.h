// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "SQEXSEADInterpTrackCategoryVolumeFade.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackCategoryVolumeFade : public UInterpTrackFloatBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackCategoryVolumeFade")
	FName CategoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackCategoryVolumeFade")
	TArray<FName> ExtendCategoryNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackCategoryVolumeFade")
	float OnMatineeEndSetCategoryVolume;

	virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
	virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
	virtual UTexture2D* GetTrackIcon() const override { return TrackIcon; }
#endif
};
