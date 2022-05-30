#pragma once
#include "CoreMinimal.h"
#include "TresEffectActor.h"
#include "TresAttractionVfxMerryGoRoundRing.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresAttractionVfxMerryGoRoundRing : public ATresEffectActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VfxAssetRing;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VfxAssetTiming;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_EffectRing;
    
public:
    ATresAttractionVfxMerryGoRoundRing();
};

