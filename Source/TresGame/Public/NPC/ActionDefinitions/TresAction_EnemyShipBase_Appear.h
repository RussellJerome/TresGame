#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_EnemyShipBase_Appear.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_Appear : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetBodyPushPowerLow;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetWarpOutFlag;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bResetDamageCount;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_InitSpeedRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_FacingYawRange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableReverse;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitAppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitAfterAppear;
    
public:
    UTresAction_EnemyShipBase_Appear();
};

