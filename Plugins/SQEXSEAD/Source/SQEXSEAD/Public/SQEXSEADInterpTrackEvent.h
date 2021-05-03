// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADInterpTrackEvent.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackEvent : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackEvent")
	TArray<struct FSQEXSEADEventTrackKey> EventTrack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackEvent")
	bool bFireEventsWhenForwards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackEvent")
	bool bFireEventsWhenBackwards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackEvent")
	bool bFireEventsWhenJumpingForwards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackEvent")
	bool bUseCustomEventName;

	virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
	virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
	virtual UTexture2D* GetTrackIcon() const override { return TrackIcon; }
#endif

	virtual FColor GetKeyframeColor(int32 KeyIndex) const override { return FColor::FColor(); }
};
