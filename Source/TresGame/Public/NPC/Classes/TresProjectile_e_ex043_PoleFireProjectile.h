#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex043_PoleFireProjectile.generated.h"

class UCurveFloat;

UCLASS(Abstract)
class ATresProjectile_e_ex043_PoleFireProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ProjectileXDirectionCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ProjectileYDirectionCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_ProjectileZDirectionCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileRiseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLandingStartBaseSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fProjectileLandTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinStopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinGroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCirclingRotSpeed_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreSpeedUpDurationSeconds_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreAttackRotSpeed_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedUpDurationSeconds_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFullSpeedDurationSeconds_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackSpeed_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStartDelaySeconds_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_DelayedProjectileNumGroups_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayedProjectileGroupStartSeconds_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPostAttackLife_Phase1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCirclingRotSpeed_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreSpeedUpDurationSeconds_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreAttackRotSpeed_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedUpDurationSeconds_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFullSpeedDurationSeconds_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackSpeed_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStartDelaySeconds_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_DelayedProjectileNumGroups_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayedProjectileGroupStartSeconds_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPostAttackLife_Phase2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCirclingRotSpeed_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreSpeedUpDurationSeconds_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPreAttackRotSpeed_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSpeedUpDurationSeconds_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFullSpeedDurationSeconds_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackSpeed_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStartDelaySeconds_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> m_DelayedProjectileNumGroups_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayedProjectileGroupStartSeconds_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fPostAttackLife_Phase3;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisplay;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableWorldCollision;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableTraceHit;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTraceHitNormal;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bTraceHitDebugDisplay;
    
    ATresProjectile_e_ex043_PoleFireProjectile();
};

