#include "TresAttack2_e_ex353_LaserShot.h"

UTresAttack2_e_ex353_LaserShot::UTresAttack2_e_ex353_LaserShot() {
    this->m_bModifyViewPos = false;
    this->m_bDisableLockon = false;
    this->m_LaserShotProjectileClass = NULL;
    this->m_SpawnNum = 15;
    this->m_OffsetHeight = 100.00f;
    this->m_TurnRadius = 750.00f;
    this->m_TurnSpeed = 3500.00f;
    this->m_StartDecelTime = 0.85f;
    this->m_DecelSpeed = 8000.00f;
    this->m_MinSpeed = 100.00f;
    this->m_ProjectileSpeed = 5000.00f;
    this->m_FireEffectSpawnTime = 1.00f;
    this->m_ProjectileFireDelayTime = 1.50f;
    this->m_TurnAngle = 360.00f;
    this->m_StartWarpOutAngle = 280.00f;
    this->m_AppearTime = 0.25f;
    this->m_AppearMaxAngle = 30.00f;
}

