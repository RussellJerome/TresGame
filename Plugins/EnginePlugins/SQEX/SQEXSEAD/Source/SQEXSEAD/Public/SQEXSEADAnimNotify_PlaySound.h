#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEADAnimNotify_PlaySound.generated.h"

class USoundBase;

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADAnimNotify_PlaySound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachPointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bFollowOwnerVisible: 1;
    
    USQEXSEADAnimNotify_PlaySound();
};

