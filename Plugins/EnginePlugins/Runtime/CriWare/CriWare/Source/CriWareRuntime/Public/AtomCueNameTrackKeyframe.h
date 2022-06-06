#pragma once
#include "CoreMinimal.h"
#include "AtomCueNameTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueNameTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    FString CueName;
    
    CRIWARERUNTIME_API FAtomCueNameTrackKeyframe();
};

