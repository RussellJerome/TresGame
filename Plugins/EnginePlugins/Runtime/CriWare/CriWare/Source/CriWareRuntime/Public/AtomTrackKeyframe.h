#pragma once
#include "CoreMinimal.h"
#include "AtomTrackKeyframe.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FAtomTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    USoundAtomCue* Cue;
    
    CRIWARERUNTIME_API FAtomTrackKeyframe();
};

