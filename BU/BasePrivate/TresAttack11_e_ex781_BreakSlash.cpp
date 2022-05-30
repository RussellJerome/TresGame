#include "TresAttack11_e_ex781_BreakSlash.h"

UTresAttack11_e_ex781_BreakSlash::UTresAttack11_e_ex781_BreakSlash() {
    this->m_Type = TRES_ENEMY_EX781_NORMAL_SLASH;
    this->m_AttackWaitTime = 1.00f;
    this->m_WarpWaitTime = 0.00f;
    this->m_DontWarp = false;
    this->m_DoCounter = false;
    this->m_TargetDist = 50.00f;
    this->m_BulletProjectile = NULL;
    this->m_WarpEQSQuery = NULL;
    this->m_CounterWaitTime = 0.00f;
    this->m_EffectId = 0;
    this->m_PreAttackEffectID = 30;
    this->m_GrandSlashParticleData = NULL;
    this->m_BackJumpState = NULL;
}

