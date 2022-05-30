#pragma once
#include "CoreMinimal.h"
#include "TresMBCameraDataTrackKey.generated.h"

class UTresMBCameraData;

USTRUCT(BlueprintType)
struct FTresMBCameraDataTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    UTresMBCameraData* m_CameraData;
    
    TRESGAME_API FTresMBCameraDataTrackKey();
};

