#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_EnemyShipBase_Escape.generated.h"

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_Escape : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_IsLeaveBattle;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetPushPowerMax;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetWarpOutFlag;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EscapeTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCoopDespawn: 1;
    
public:
    UTresAction_EnemyShipBase_Escape();
};

