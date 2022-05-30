#include "TresProjectile_EnemyShipBase_ShadowMissile.h"

ATresProjectile_EnemyShipBase_ShadowMissile::ATresProjectile_EnemyShipBase_ShadowMissile() {
    this->m_CenterSpeed = 6000.00f;
    this->m_CenterSpeedMin = 5000.00f;
    this->m_EndSpeed = 6000.00f;
    this->m_CenterTime = 0.25f;
    this->m_EndTime = 6.00f;
    this->m_EndTimeMin = 2.00f;
    this->m_SlowDist = 0.00f;
    this->m_OuOfViewportSpeed = 6000.00f;
    this->m_OuOfViewportSpeedRate = 0.05f;
    this->m_AngleCurve = NULL;
    this->m_CenterSpeedByAngleMin = 5000.00f;
    this->m_HomingMinDist = 0.00f;
    this->m_HomingType = ETresProjectileHomingType::NORMAL;
    this->m_HomingMaxAngle = 0.00f;
    this->m_HomingTurnMax = 0.00f;
    this->m_HomingTurnAccel = 0.00f;
    this->m_HomingMaxTurnMax = 0.00f;
    this->m_HomingTurnMaxByAngle = 0.00f;
    this->m_HomingTurnAccelByAngle = 0.00f;
}

