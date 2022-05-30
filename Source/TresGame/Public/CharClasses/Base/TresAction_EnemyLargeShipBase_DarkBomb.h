#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_EnemyLargeShipBase_DarkBomb.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAction_EnemyLargeShipBase_DarkBomb : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffCharge;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SubEffCharge;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffMuzzle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombChargeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_HomingTargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombShotWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombProjAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombProjCantFireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombLowSpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombLowSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBombTargetLength;
    
private:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_ChargeEffect;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_SubChargeEffectLeft;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_SubChargeEffectRight;
    
public:
    UTresAction_EnemyLargeShipBase_DarkBomb();
};

