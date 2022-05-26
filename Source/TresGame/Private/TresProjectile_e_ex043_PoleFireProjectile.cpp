#include "TresProjectile_e_ex043_PoleFireProjectile.h"

ATresProjectile_e_ex043_PoleFireProjectile::ATresProjectile_e_ex043_PoleFireProjectile() {
    this->m_ProjectileXDirectionCurve = NULL;
    this->m_ProjectileYDirectionCurve = NULL;
    this->m_ProjectileZDirectionCurve = NULL;
    this->m_fProjectileRiseSpeed = 2500.00f;
    this->m_fLandingStartBaseSeconds = 1.00f;
    this->m_fProjectileLandTime = 1.50f;
    this->m_fMinStopDistance = 70.00f;
    this->m_fMinGroundDistance = 100.00f;
    this->m_fMinTargetDistance = 400.00f;
    this->m_fCirclingRotSpeed_Phase1 = 80.00f;
    this->m_fPreSpeedUpDurationSeconds_Phase1 = 2.00f;
    this->m_fPreAttackRotSpeed_Phase1 = 600.00f;
    this->m_fSpeedUpDurationSeconds_Phase1 = 0.90f;
    this->m_fFullSpeedDurationSeconds_Phase1 = 0.00f;
    this->m_fAttackSpeed_Phase1 = 3500.00f;
    this->m_fAttackStartDelaySeconds_Phase1 = 0.10f;
    this->m_fDelayedProjectileGroupStartSeconds_Phase1 = 0.70f;
    this->m_fPostAttackLife_Phase1 = 1.50f;
    this->m_fCirclingRotSpeed_Phase2 = 80.00f;
    this->m_fPreSpeedUpDurationSeconds_Phase2 = 2.00f;
    this->m_fPreAttackRotSpeed_Phase2 = 600.00f;
    this->m_fSpeedUpDurationSeconds_Phase2 = 0.90f;
    this->m_fFullSpeedDurationSeconds_Phase2 = 0.00f;
    this->m_fAttackSpeed_Phase2 = 3500.00f;
    this->m_fAttackStartDelaySeconds_Phase2 = 0.10f;
    this->m_fDelayedProjectileGroupStartSeconds_Phase2 = 0.70f;
    this->m_fPostAttackLife_Phase2 = 1.50f;
    this->m_fCirclingRotSpeed_Phase3 = 80.00f;
    this->m_fPreSpeedUpDurationSeconds_Phase3 = 2.00f;
    this->m_fPreAttackRotSpeed_Phase3 = 600.00f;
    this->m_fSpeedUpDurationSeconds_Phase3 = 0.90f;
    this->m_fFullSpeedDurationSeconds_Phase3 = 0.00f;
    this->m_fAttackSpeed_Phase3 = 3500.00f;
    this->m_fAttackStartDelaySeconds_Phase3 = 0.10f;
    this->m_fDelayedProjectileGroupStartSeconds_Phase3 = 0.70f;
    this->m_fPostAttackLife_Phase3 = 1.50f;
    this->m_bDebugDisplay = false;
    this->m_bDisableWorldCollision = true;
    this->m_bEnableTraceHit = false;
    this->m_bUseTraceHitNormal = false;
    this->m_bTraceHitDebugDisplay = false;
}

