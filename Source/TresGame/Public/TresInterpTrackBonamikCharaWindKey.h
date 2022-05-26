#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBonamikCharaWindKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikCharaWindKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    TRESGAME_API FTresInterpTrackBonamikCharaWindKey();
};

