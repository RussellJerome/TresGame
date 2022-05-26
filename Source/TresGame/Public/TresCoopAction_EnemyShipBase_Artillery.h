#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_Artillery.h"
#include "TresCoopAction_EnemyShipBase_Artillery.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresCoopAction_EnemyShipBase_Artillery : public UTresAction_EnemyShipBase_Artillery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitAppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RunningTime;
    
public:
    UTresCoopAction_EnemyShipBase_Artillery();
};

