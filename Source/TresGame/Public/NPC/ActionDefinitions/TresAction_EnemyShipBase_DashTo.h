#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAction_EnemyShipBase_DashTo.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_DashTo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FVector m_OffsetFront;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_OffsetBack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ForwardOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GoalDistanceToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingYawRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeceleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FinishSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GoalRotationOffsetFront;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GoalRotationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeclBrakeOnTurn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeedOnTurn;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ActionCanelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InertiaPower;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CancelTime;
    
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
    float m_MaxTurningTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SplashParticleAssetRight;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SplashParticleAssetLeft;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SplashParticleSocket;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SplashSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SplashSpawnMinAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval m_SplashParticleValidSpeed;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_SplashParticleComp;
    
public:
    UTresAction_EnemyShipBase_DashTo();
};

