// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADInterpTrackAutoSeControl.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackAutoSeControl : public UInterpTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackAutoSeControl")
	TArray<struct FSQEXSEADAutoSeControlTrackKey> Keys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackAutoSeControl")
	FName OverrideGroupName;
	
	virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
	virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
	virtual UTexture2D* GetTrackIcon() const override { return TrackIcon; }
#endif

	virtual FColor GetKeyframeColor(int32 KeyIndex) const override { return FColor::FColor(); }
};
