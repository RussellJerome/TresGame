#include "TresAttack2_e_ex304_LaserShot.h"

UTresAttack2_e_ex304_LaserShot::UTresAttack2_e_ex304_LaserShot() {
    this->m_bIsCoopAction = false;
    this->m_bModifyViewPos = false;
    this->m_bDisableLockon = false;
    this->m_LaserShotProjectileClass = NULL;
    this->m_SpawnNum = 15;
    this->m_OffsetHeight = 100.00f;
    this->m_TurnRadius = 750.00f;
    this->m_TurnSpeed = 3500.00f;
    this->m_ProjectileSpeed = 5000.00f;
    this->m_ProjectileFireDelayTime = 1.50f;
    this->m_TurnAngle = 360.00f;
    this->m_AppearMaxAngle = 30.00f;
    this->m_bIsCooperationLaserShot = false;
    this->m_CooperationVoice1 = NULL;
    this->m_CooperationVoice2 = NULL;
}

