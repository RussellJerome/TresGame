#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAction_EnemyShipBase_DashTurn.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_DashTurn : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DashTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashRoll;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AccelTimePer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RotatePer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_MaxSpeedPer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_DecelePer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InertiaPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateBrakeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateVectorValue;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CancelTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SplashParticleAssetRight;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SplashParticleAssetLeft;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_SplashParticleComp;
    
public:
    UTresAction_EnemyShipBase_DashTurn();
};

