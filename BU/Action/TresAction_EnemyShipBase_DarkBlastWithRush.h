#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_EnemyShipBase_DarkBlastWithRush.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_DarkBlastWithRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_HomingYawRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVector> m_HomingOffsetList;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseCameraDirectionForHoming;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_HomingOffsetSelf;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeedTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeceleTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableFinishOnReachNear;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartWithTurn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotationYawAccel;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_TurnRotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnRotEndSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnRotStartBrakeAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnRotAccelOnBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxRollAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollDeclAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkBlastEffCharge;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBlastBeginTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkBlastChargeTime;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_DarkBlastEffOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_DarkBlastProjOffset;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_DarkBlastEffect;
    
public:
    UTresAction_EnemyShipBase_DarkBlastWithRush();
};

