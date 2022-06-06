#include "TresAttack5_e_ex360_DarkSplicer.h"

UTresAttack5_e_ex360_DarkSplicer::UTresAttack5_e_ex360_DarkSplicer() {
    this->m_Type = TRES_ENEMY_EX360_DARKSPLICER_MOVE_CUTDOWN;
    this->m_WarpEQSQuery = NULL;
    this->m_BulletProjectile = NULL;
    this->m_RiseSpeedMax = 0.00f;
    this->m_RiseTime = 0.00f;
    this->m_SpinShotIntervalTime = 0.10f;
    this->m_SpinShotPitch = 0.00f;
    this->m_SpinShotYaw = 0.00f;
    this->m_DontToTarget = true;
    this->m_SpinTargetShotIntervalTimeMin = 0.10f;
    this->m_SpinTargetShotIntervalTimeMax = 0.30f;
    this->m_WarpPosOffsetZ = 0.00f;
    this->m_NotHitTime = 0.20f;
    this->m_ChaseRate = 1.00f;
    this->m_AvaterPawn = NULL;
}

