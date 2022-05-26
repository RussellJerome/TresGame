#include "TresAttack8_e_ex781_WarpGunShot.h"

UTresAttack8_e_ex781_WarpGunShot::UTresAttack8_e_ex781_WarpGunShot() {
    this->m_GunShotMarkerObjectClass = NULL;
    this->m_BulletProjectile = NULL;
    this->m_WarpWaitTime = 1.00f;
    this->m_ShotWaitTime = 0.20f;
    this->m_LoopTime = 0.00f;
    this->m_ShotPitch = -50.00f;
    this->m_PitchRate = 0.03f;
    this->m_PitchAddStartTime = 0.40f;
    this->m_PitchAddRate = 0.03f;
    this->m_PitchRateMax = 0.10f;
    this->m_AbortDist = 500.00f;
    this->m_MinHigh = 200.00f;
    this->PlayVoiceRate = 0;
    this->m_GunShotMarkerObject = NULL;
    this->m_Projectile = NULL;
}

