#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex047_ProjectileBase.generated.h"

UCLASS()
class ATresEnemy_e_ex047_ProjectileBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_FireTurnHomingTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireTurnHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireTurnHomingTurnMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireTurnAfterHomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireTurnAfterHomingTurnMax;
    
    ATresEnemy_e_ex047_ProjectileBase();
};

