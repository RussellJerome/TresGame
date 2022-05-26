#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEXSEADAnimNotifyState_AttachSound.generated.h"

class USoundBase;

UCLASS(CollapseCategories, EditInlineNew)
class SQEXSEAD_API USQEXSEADAnimNotifyState_AttachSound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartWaitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* LoopEndSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LoopEndSoundVolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LoopEndSoundPitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollowOwnerVisible: 1;
    
    USQEXSEADAnimNotifyState_AttachSound();
};

