#include "TresAttack10_e_ex781_TimeBreak.h"

UTresAttack10_e_ex781_TimeBreak::UTresAttack10_e_ex781_TimeBreak() {
    this->m_TimeBreakTime = 1.00f;
    this->m_TimeBreakAttackUpDataTime = 0.30f;
    this->m_TimeBreakWaitTime = 0.50f;
    this->m_MoveSubDist = 400.00f;
    this->m_ToTargetSpeed = 500.00f;
    this->m_ToTargetSpeedMin = 0.00f;
    this->m_ToTargetSlowDownSpeed = 1000.00f;
    this->m_BulletProjectile = NULL;
    this->m_DoReflectionWarp = false;
    this->m_BaildParticleEffData = NULL;
    this->m_EndHITParticleEffData = NULL;
    this->m_ReflectChanceTime = 0.00f;
}

