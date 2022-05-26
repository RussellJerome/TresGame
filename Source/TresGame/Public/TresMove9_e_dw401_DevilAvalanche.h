#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove9_e_dw401_DevilAvalanche.generated.h"

UCLASS(HideDropdown)
class UTresMove9_e_dw401_DevilAvalanche : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireIntervalRand;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireImpactSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireAngleMinAir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireAngleMaxAir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_StartFallDistAir;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_GravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_YawDiffusion;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchDiffusion;
    
    UTresMove9_e_dw401_DevilAvalanche();
};

