#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex360_ShadowDive.generated.h"

class UCurveFloat;
class ATresProjectileBase;
class UEnvQuery;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack3_e_ex360_ShadowDive : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletNearProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_AttackEQSQuery;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DiveParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveTimeMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveStopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DirectMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LockOnPosOffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    float mRiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseSpeedInit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float mRiseBrakeSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RiseEndHight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FallBulletShotIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackStartHight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletNearProjectileNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BulletShotIntervalTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* m_ShotIntervalCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GroundParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartFallInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartFallAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartFallMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_NotStrongMode;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RiseLimitTime;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_FloorParticle;
    
public:
    UTresAttack3_e_ex360_ShadowDive();
};

