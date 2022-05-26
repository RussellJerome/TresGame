#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstLightExposure.generated.h"

class ULightComponentBase;

UCLASS()
class TRESGAME_API UTresInterpTrackInstLightExposure : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<ULightComponentBase*> m_LightComponents;
    
    UPROPERTY()
    TArray<float> m_OriginalValues;
    
    UTresInterpTrackInstLightExposure();
};

