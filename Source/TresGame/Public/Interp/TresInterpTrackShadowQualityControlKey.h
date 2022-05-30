#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SQEX_KineDriver.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ShadowQuality -FallbackName=ESQEX_ShadowQuality
#include "TresInterpTrackShadowQualityControlKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackShadowQualityControlKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEX_ShadowQuality> m_Quality;
    
    TRESGAME_API FTresInterpTrackShadowQualityControlKey();
};

