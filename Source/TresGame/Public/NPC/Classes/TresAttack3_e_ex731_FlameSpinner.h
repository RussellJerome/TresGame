#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex731_FlameSpinner.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack3_e_ex731_FlameSpinner : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRiseMaxHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRiseVerticalAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRiseMaxVerticalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRiseHorizontalAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRiseMaxHorizontalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallVerticalAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallMaxVerticalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallHorizontalAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallMaxHorizontalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoundHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoundGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDeltaYawOnBound;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoundInitHorizontalVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnSpeedOnBound;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxSlideTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnSpeedOnSlide;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebug;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LandParticle;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LandParticleComp;
    
    UTresAttack3_e_ex731_FlameSpinner();
};

