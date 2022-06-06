#include "TresAttack3_e_ex781_BackStepGunShot.h"

UTresAttack3_e_ex781_BackStepGunShot::UTresAttack3_e_ex781_BackStepGunShot() {
    this->m_MoveSpeed = 1000.00f;
    this->m_BulletProjectile = NULL;
    this->m_ShotCount = 2;
    this->m_ShotIntervalTime = 0.20f;
    this->m_RiseSpeed = 0.00f;
    this->m_FallStartTime = 0.50f;
    this->m_FallSpeed = 0.00f;
    this->m_WarpWaitTime = 0.50f;
    this->m_GunShotMarkerObjectClass = NULL;
    this->m_GunShotMarkerObject = NULL;
}

