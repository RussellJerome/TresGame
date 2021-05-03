// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Matinee/InterpTrackSound.h"
#include "SQEXSEADInterpTrackSound.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADInterpTrackSound : public UInterpTrackSound
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADInterpTrackSound")
	bool bTreatAsNonWorldSound;

	virtual void PostLoad() override {};
	virtual int32 GetNumKeyframes() const override { return 0; };
	virtual void GetTimeRange(float& StartTime, float& EndTime) const override {};
	virtual float GetTrackEndTime() const override { return 0.0f; };
	virtual float GetKeyframeTime(int32 KeyIndex) const override { return 0.0f; };
	virtual int32 GetKeyframeIndex(float KeyTime) const override { return 0; };
	virtual int32 AddKeyframe(float Time, UInterpTrackInst* TrInst, EInterpCurveMode InitInterpMode) override { return 0; };
	virtual int32 SetKeyframeTime(int32 KeyIndex, float NewKeyTime, bool bUpdateOrder = true) override { return 0; };
	virtual void RemoveKeyframe(int32 KeyIndex) override {};
	virtual int32 DuplicateKeyframe(int32 KeyIndex, float NewKeyTime, UInterpTrack* ToTrack = NULL) override { return 0; };
	virtual bool GetClosestSnapPosition(float InPosition, TArray<int32> &IgnoreKeys, float& OutPosition) override { return false; };
	virtual void PreviewUpdateTrack(float NewPosition, UInterpTrackInst* TrInst) override {};
	virtual void UpdateTrack(float NewPosition, UInterpTrackInst* TrInst, bool bJump) override {};
	virtual void PreviewStopPlayback(class UInterpTrackInst* TrInst) override {};
	virtual const FString GetEdHelperClassName() const override { return FString::FString(); };
	virtual const FString GetSlateHelperClassName() const override { return FString::FString(); };

#if WITH_EDITORONLY_DATA
	virtual class UTexture2D* GetTrackIcon() const override { return TrackIcon; };
#endif

	virtual void DrawTrack(FCanvas* Canvas, UInterpGroup* Group, const FInterpTrackDrawParams& Params) override {};
	virtual void SetTrackToSensibleDefault() override {};
};
