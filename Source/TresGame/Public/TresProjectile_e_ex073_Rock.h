#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex073_Rock.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex073_Rock : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_FlipProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FlipAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FlipMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigUpHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigUpHomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigUpHomingReActDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DigUpHomingOwnerFrontDist;
    
public:
    ATresProjectile_e_ex073_Rock();
};

