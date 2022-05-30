#include "TresEnemy_e_ex367_KeyBladeLaserProjectileBase.h"

ATresEnemy_e_ex367_KeyBladeLaserProjectileBase::ATresEnemy_e_ex367_KeyBladeLaserProjectileBase() {
    this->m_ChildAttackWaitTime = 0.00f;
    this->m_AttackWaitTime = 0.00f;
    this->m_AttackHitBGTime = 0.00f;
    this->m_ChildAttackTime = 0.00f;
    this->m_AttackTime = 0.00f;
    this->m_LockOnAttackWaitTime = 0.20f;
    this->m_RotationSpeed = 0.40f;
    this->m_HitParticleData = NULL;
    this->m_HitBulletData = NULL;
    this->m_ChildProjectile = NULL;
    this->m_ChildLaserNum = 0;
    this->m_ChildLaserPitch = 0.00f;
    this->m_Target = NULL;
}

