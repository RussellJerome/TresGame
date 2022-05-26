#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuLayer.h"
#include "TresDebugMenuTimeline.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuTimeline {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTresDebugMenuLayer> m_Layers;
    
    TRESGAME_API FTresDebugMenuTimeline();
};

