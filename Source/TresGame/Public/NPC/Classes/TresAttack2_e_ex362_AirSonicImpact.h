#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex362_AirSonicImpact.generated.h"

class UEnvQuery;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex362_AirSonicImpact : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_WarpEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_ReflectedWarpEQSQuery;
    
    UPROPERTY(EditAnywhere)
    float m_InitMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_LandingMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    float m_GroundCheckHigh;
    
    UPROPERTY(EditAnywhere)
    float m_WarpOffsetZ;
    
    UPROPERTY(EditAnywhere)
    float m_MoveTargetScale;
    
    UPROPERTY(EditAnywhere)
    float m_RotUpdateRate;
    
    UPROPERTY(EditAnywhere)
    float m_LandMoveScale;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionAttackDataID;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AtkHitSEAsset;
    
    UPROPERTY(EditAnywhere)
    float m_ChaseDist;
    
    UPROPERTY(VisibleInstanceOnly)
    float m_RotRate;
    
    UPROPERTY(EditAnywhere)
    float m_HomingEndDist;
    
    UPROPERTY(EditAnywhere)
    float m_HomingAfterWarpStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_HitAfterWarpStartTime;
    
    UPROPERTY(EditAnywhere)
    float m_HitAfterPitch;
    
    UPROPERTY(EditAnywhere)
    bool m_IsHitWarp;
    
public:
    UTresAttack2_e_ex362_AirSonicImpact();
};

