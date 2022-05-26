#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_EnemyShipBase_ShadowSneakAttack.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_ShadowSneakAttack : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bRecoveryMast;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BaseYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RandamRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RunningTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitAppearTime;
    
public:
    UTresAction_EnemyShipBase_ShadowSneakAttack();
};

