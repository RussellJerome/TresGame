#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackMorphControlElement.h"
#include "TresInterpTrackMorphControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackMorphControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresInterpTrackMorphControlElement> m_Elements;
    
    TRESGAME_API FTresInterpTrackMorphControlKey();
};

