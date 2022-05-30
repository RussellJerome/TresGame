#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex038_AeroStorm.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex038_AeroStorm : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pAeroCutter[3];
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AeroStormStartEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CutterInitRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CutterMaxRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CutterMaxRotSpeedTime;
    
    ATresProjectile_e_ex038_AeroStorm();
};

