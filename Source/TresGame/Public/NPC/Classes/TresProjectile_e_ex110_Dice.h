#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex110_Dice.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex110_Dice : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DiceEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DiceEffData;
    
    ATresProjectile_e_ex110_Dice();
protected:
    UFUNCTION()
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

