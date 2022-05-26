#pragma once
#include "CoreMinimal.h"
#include "TresEffectActor.h"
#include "TresEffectActor_e_ex721_ThornChain.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class ATresEffectActor_e_ex721_ThornChain : public ATresEffectActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ThornChainEffectAsset;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ThornChainEffectCmp;
    
public:
    ATresEffectActor_e_ex721_ThornChain();
};

