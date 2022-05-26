#include "TresEnemyPawn_e_ex781_GunShotMarker.h"

ATresEnemyPawn_e_ex781_GunShotMarker::ATresEnemyPawn_e_ex781_GunShotMarker() {
    this->m_MarkerParticleData = NULL;
    this->m_ShotFlashParticleData = NULL;
    this->m_ShotLoopParticleData = NULL;
    this->m_ShotWaitTime = 0.20f;
    this->m_MarkerEndWaitTime = 0.06f;
    this->m_MyParent = NULL;
    this->m_MarkerParticle = NULL;
    this->m_FlashParticle = NULL;
    this->m_LoopParticle = NULL;
    this->m_BulletProjectile = NULL;
}

