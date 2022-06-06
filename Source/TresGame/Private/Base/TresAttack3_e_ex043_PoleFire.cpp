#include "TresAttack3_e_ex043_PoleFire.h"

UTresAttack3_e_ex043_PoleFire::UTresAttack3_e_ex043_PoleFire() {
    this->m_AttackAnimData = NULL;
    this->m_Projectile = NULL;
    this->m_fProjectileSpawnHeight = 210.00f;
    this->m_fProjectileSpawnRadius = 300.00f;
    this->m_fProjectileSpawnStartDegrees = 40.00f;
    this->m_iMaxProjectileNum_Phase1 = 13;
    this->m_iMaxProjectileNum_Phase2 = 13;
    this->m_iMaxProjectileNum_Phase3 = 13;
    this->m_fSetWalkingHeight = 50.00f;
    this->m_ProjectileSpawnEffect = NULL;
    this->m_fEffectFadeOutDelaySeconds = 0.05f;
    this->m_fEffectFadeOutSeconds = 0.12f;
    this->m_fEffectFadeInDelaySeconds = 0.17f;
    this->m_fEffectFadeInSeconds = 0.17f;
}

