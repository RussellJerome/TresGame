#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTimelineData.generated.h"

class UTresTimelineDataTrack;

UCLASS(Abstract)
class TRESGAME_API UTresTimelineData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UTresTimelineDataTrack*> m_Tracks;
    
    UTresTimelineData();
};

