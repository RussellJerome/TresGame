#include "TresEnemy_e_ex301_KeyBladeLaserProjectileBase.h"

ATresEnemy_e_ex301_KeyBladeLaserProjectileBase::ATresEnemy_e_ex301_KeyBladeLaserProjectileBase() {
    this->m_ChangeDist = 1000.00f;
    this->m_DirectChange = false;
    this->m_AttackWaitTime = 0.00f;
    this->m_AttackTime = 0.00f;
    this->m_EndTime = 0.00f;
    this->m_AttackPitch = 45.00f;
    this->m_AttackRoll = 0.00f;
    this->m_LockOnAttackWaitTime = 0.20f;
    this->m_RotationSpeed = 0.40f;
    this->m_BulletProjectile = NULL;
    this->m_ChildShotNum = 0;
    this->m_ChildShotTime = 0.20f;
}

