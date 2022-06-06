#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBonamikWindControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikWindControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    TRESGAME_API FTresInterpTrackBonamikWindControlKey();
};

