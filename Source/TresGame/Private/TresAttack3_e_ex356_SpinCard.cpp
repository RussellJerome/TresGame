#include "TresAttack3_e_ex356_SpinCard.h"

UTresAttack3_e_ex356_SpinCard::UTresAttack3_e_ex356_SpinCard() {
    this->m_RiseProjectileClass = NULL;
    this->m_ProjectileClass = NULL;
    this->m_CardParticleSystem = NULL;
    this->m_RiseProjectileNum = 0;
    this->m_ProjectileNum = 0;
    this->m_ShotAngle = 60.00f;
    this->m_RiseSpeed = 0.00f;
    this->m_LoopTime = 0.00f;
    this->m_FallGravityScale = 1.00f;
    this->m_NotifyBodyCollReactionType = ETresBodyCollReactionType::TRES_BODY_RT_INVINCIBLE;
}

