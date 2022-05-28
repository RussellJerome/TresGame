#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex721_CallBomb.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex721_CallBomb : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_AppearEffectOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartEmissionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTransitionTime;
    
    ATresProjectile_e_ex721_CallBomb();
    UFUNCTION()
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

