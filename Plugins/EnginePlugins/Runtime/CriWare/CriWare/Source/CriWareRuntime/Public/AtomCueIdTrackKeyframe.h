#pragma once
#include "CoreMinimal.h"
#include "AtomCueIdTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueIdTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    int32 CueId;
    
    CRIWARERUNTIME_API FAtomCueIdTrackKeyframe();
};

