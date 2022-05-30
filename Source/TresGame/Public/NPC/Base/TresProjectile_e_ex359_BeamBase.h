#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex359_LightBase.h"
#include "TresProjectile_e_ex359_BeamBase.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class AActor;

UCLASS(Abstract)
class ATresProjectile_e_ex359_BeamBase : public ATresProjectile_e_ex359_LightBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TailParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_TailParticleComp;
    
    UPROPERTY()
    AActor* m_Target;
    
    UPROPERTY()
    AActor* m_SpawnActor;
    
    ATresProjectile_e_ex359_BeamBase();
};

