#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "Engine/EngineTypes.h"
#include "TresInterpTrackInstIndirectLightingCacheQualityControl.generated.h"

class UPrimitiveComponent;

UCLASS()
class TRESGAME_API UTresInterpTrackInstIndirectLightingCacheQualityControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> m_Components;
    
    UPROPERTY()
    TArray<TEnumAsByte<EIndirectLightingCacheQuality>> m_OriginalValues;
    
    UTresInterpTrackInstIndirectLightingCacheQualityControl();
};

