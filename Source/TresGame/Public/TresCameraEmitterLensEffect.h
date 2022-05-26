#pragma once
#include "CoreMinimal.h"
#include "Particles/EmitterCameraLensEffectBase.h"
#include "TresCameraEmitterLensEffect.generated.h"

UCLASS(NotPlaceable)
class ATresCameraEmitterLensEffect : public AEmitterCameraLensEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_FieldOfView;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bOnlyCameraSee: 1;
    
public:
    ATresCameraEmitterLensEffect();
};

