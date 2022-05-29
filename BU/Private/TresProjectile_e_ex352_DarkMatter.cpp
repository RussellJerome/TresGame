#include "TresProjectile_e_ex352_DarkMatter.h"

ATresProjectile_e_ex352_DarkMatter::ATresProjectile_e_ex352_DarkMatter() {
    this->m_DefaultMoveSpeed = 1000.00f;
    this->m_DefaultAcceleration = 1000.00f;
    this->m_DefaultDeceleration = 1000.00f;
    this->m_PlanetBlasterChargeEffect = NULL;
    this->m_PlanetBlasterExplodeEffect = NULL;
    this->m_PlanetBlasterProjectile = NULL;
    this->m_DelayedSpawnPlanetBlasterProjectile = 0.35f;
    this->m_AtkColInterval = 1.00f;
    this->m_RestraintAtkColInterval = 0.01f;
    this->m_PlanetBlasterEffectCmp = NULL;
}

