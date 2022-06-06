#pragma once
#include "CoreMinimal.h"
#include "ETresFadeTrack_Color.h"
#include "TresInterpTrackFadeKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackFadeKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresFadeTrack_Color> m_Color;
    
    TRESGAME_API FTresInterpTrackFadeKey();
};

