#pragma once
#include "CoreMinimal.h"
#include "TresTrackSnapToFloorKey.generated.h"

USTRUCT(BlueprintType)
struct FTresTrackSnapToFloorKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    bool m_SnapToFloor;
    
    TRESGAME_API FTresTrackSnapToFloorKey();
};

