#include "TresAttack3_e_ex360_ShadowDive.h"

UTresAttack3_e_ex360_ShadowDive::UTresAttack3_e_ex360_ShadowDive() {
    this->m_BulletProjectile = NULL;
    this->m_BulletNearProjectile = NULL;
    this->m_AttackEQSQuery = NULL;
    this->m_DiveParticleData = NULL;
    this->m_MoveTimeMax = 0.00f;
    this->m_MoveStopDistance = 0.00f;
    this->m_MoveInitSpeed = 2000.00f;
    this->m_MoveAddSpeed = 0.00f;
    this->m_MoveSpeedMax = 2000.00f;
    this->m_AttackWaitTime = 0.00f;
    this->m_RotSpeed = 0.00f;
    this->m_DirectMoveDistance = 0.00f;
    this->m_LockOnPosOffsetZ = 0.00f;
    this->mRiseSpeed = 0.00f;
    this->m_RiseSpeedInit = 2000.00f;
    this->m_RiseAddSpeed = 1000.00f;
    this->mRiseBrakeSpeed = 0.00f;
    this->m_RiseEndHight = 300;
    this->m_FallBulletShotIntervalTime = 0.20f;
    this->m_AttackStartHight = 300.00f;
    this->m_BulletNearProjectileNumMax = 10;
    this->m_BulletShotIntervalTimeMax = 0.10f;
    this->m_ShotIntervalCurve = NULL;
    this->m_GroundParticleData = NULL;
    this->m_StartFallInitSpeed = 2000.00f;
    this->m_StartFallAddSpeed = 2000.00f;
    this->m_StartFallMaxSpeed = 4000.00f;
    this->m_NotStrongMode = false;
    this->m_RiseLimitTime = 2.00f;
    this->m_FloorParticle = NULL;
}

