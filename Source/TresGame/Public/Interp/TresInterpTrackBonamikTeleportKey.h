#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBonamikTeleportKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikTeleportKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    float m_Distance;
    
    UPROPERTY(EditAnywhere)
    int32 m_PreRoll;
    
    TRESGAME_API FTresInterpTrackBonamikTeleportKey();
};

