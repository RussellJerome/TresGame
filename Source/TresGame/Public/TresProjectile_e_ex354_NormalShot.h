#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_NormalShot.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex354_NormalShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinVelocityOnReflect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitchAdjustHeight;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_fDownDivideAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitchVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAdjustTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisableAdjustTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDisableAdjustTargetAngle;
    
    ATresProjectile_e_ex354_NormalShot();
};

