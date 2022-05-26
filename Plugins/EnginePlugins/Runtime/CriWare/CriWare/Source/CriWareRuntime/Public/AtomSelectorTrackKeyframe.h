#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    FString SelectorLabel;
    
    CRIWARERUNTIME_API FAtomSelectorTrackKeyframe();
};

