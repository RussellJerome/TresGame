#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresActor_e_ex773_HvnEnvEffect.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS()
class ATresActor_e_ex773_HvnEnvEffect : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_HvnEnvEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_HvnEnvEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_HvnEnvBt04EffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HvnEnvEffAlphaMin;
    
public:
    ATresActor_e_ex773_HvnEnvEffect();
};

