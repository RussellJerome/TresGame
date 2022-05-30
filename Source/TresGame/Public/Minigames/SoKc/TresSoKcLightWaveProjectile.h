#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresSoKcLightWaveProjectile.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresSoKcLightWaveProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLightWaveProjectileFinishSignature);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pLightWaveBeamEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLightWaveBeamLoopEndWaitTime;
    
public:
    ATresSoKcLightWaveProjectile();
};

