#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectile_e_ex313_DarkBiteShadow.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex313_DarkBiteShadow : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ShadowEffData;
    
    ATresProjectile_e_ex313_DarkBiteShadow();
};

