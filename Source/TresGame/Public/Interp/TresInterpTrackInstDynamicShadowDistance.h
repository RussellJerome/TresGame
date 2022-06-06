#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstDynamicShadowDistance.generated.h"

class UDirectionalLightComponent;

UCLASS()
class TRESGAME_API UTresInterpTrackInstDynamicShadowDistance : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UDirectionalLightComponent*> m_LightComponents;
    
    UPROPERTY()
    TArray<float> m_OriginalValues;
    
    UTresInterpTrackInstDynamicShadowDistance();
};

