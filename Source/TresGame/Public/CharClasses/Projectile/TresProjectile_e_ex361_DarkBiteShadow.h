#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNotifyInterface.h"
#include "TresProjectile_e_ex361_DarkBiteShadow.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex361_DarkBiteShadow : public AActor, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShadowEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ShadowEffData;
    
    ATresProjectile_e_ex361_DarkBiteShadow();
    
    // Fix for true pure virtual functions not being implemented
};

