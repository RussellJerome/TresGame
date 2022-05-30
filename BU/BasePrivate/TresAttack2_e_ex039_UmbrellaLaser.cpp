#include "TresAttack2_e_ex039_UmbrellaLaser.h"

UTresAttack2_e_ex039_UmbrellaLaser::UTresAttack2_e_ex039_UmbrellaLaser() {
    this->m_StartAnimData = NULL;
    this->m_ChargeAnimData = NULL;
    this->m_ShotStartAnimData = NULL;
    this->m_ShotLoopAnimData = NULL;
    this->m_ShotEndAnimData = NULL;
    this->m_ReloadAnimData = NULL;
    this->m_LaserParticleSystem = NULL;
    this->m_LaserProjectileClass = NULL;
    this->m_LoopTime = 3.00f;
    this->m_LaserInitialSize = 100.00f;
    this->m_LaserExtendSpeed = 10000.00f;
    this->m_LaserMaxSize = 500000000.00f;
    this->m_LaserEffectEndOffsetTime = 0.50f;
    this->m_EmissionAndGlowEffectEndOffsetTime = 0.35f;
    this->m_bEnableResetAttackCount = false;
    this->m_bEnableLoopSkipOnWallHit = true;
}

