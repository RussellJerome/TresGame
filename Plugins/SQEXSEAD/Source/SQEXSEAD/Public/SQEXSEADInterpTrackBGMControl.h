// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEADInterpTrackBGMControl.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackBGMControl : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackBGMControl")
	TArray<struct FSQEXSEADBGMControlTrackKey> Keys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackBGMControl")
	TAssetPtr<class USoundBase> BGMAssetPtr;

	virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
	virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
	virtual UTexture2D* GetTrackIcon() const override { return TrackIcon; }
#endif

	virtual FColor GetKeyframeColor(int32 KeyIndex) const override { return FColor::FColor(); }
};
