#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresCoopAction_EnemyShipBase_DarkCharge.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresCoopAction_EnemyShipBase_DarkCharge : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_AuraEffectComp;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_AuraEffectMatComp1;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_AuraEffectMatComp2;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetAttackColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSetBodyColImmediately;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_CollGrpName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AppearParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WaitAppearTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeedKeepTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimAfterHitAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CancelPlayerRange;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnableCancelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeAfterCancel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeAfterCancelOnHitWall;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DashAuraEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DashAuraEffectForLargeShip;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DashAuraMatEffect;
    
public:
    UTresCoopAction_EnemyShipBase_DarkCharge();
};

