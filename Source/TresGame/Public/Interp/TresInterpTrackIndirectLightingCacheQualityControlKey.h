#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresInterpTrackIndirectLightingCacheQualityControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackIndirectLightingCacheQualityControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EIndirectLightingCacheQuality> m_Quality;
    
    TRESGAME_API FTresInterpTrackIndirectLightingCacheQualityControlKey();
};

