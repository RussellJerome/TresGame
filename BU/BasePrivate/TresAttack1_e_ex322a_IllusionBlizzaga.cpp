#include "TresAttack1_e_ex322a_IllusionBlizzaga.h"

UTresAttack1_e_ex322a_IllusionBlizzaga::UTresAttack1_e_ex322a_IllusionBlizzaga() {
    this->m_AnimData = NULL;
    this->m_Projectile = NULL;
    this->m_Distance = 0.00f;
    this->m_Height = 0.00f;
    this->m_bIsBlizzagaAppearTimingAnimStart = false;
    this->m_BlizzagaVelocityRate = 2.00f;
    this->m_NextActionClass = NULL;
    this->m_AppearParticleSystem = NULL;
    this->m_bIsAppearEffectSpawnGround = false;
}

