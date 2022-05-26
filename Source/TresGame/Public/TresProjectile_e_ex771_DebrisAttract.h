#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresProjectile_e_ex771_DebrisAttract.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex771_DebrisAttract : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DebrisEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DebrisEffData;
    
    ATresProjectile_e_ex771_DebrisAttract();
};

