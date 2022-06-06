#include "RunAwayShipParam.h"

FRunAwayShipParam::FRunAwayShipParam() {
    this->m_defaultVelocity = 0.00f;
    this->m_MaxYawSpeed = 0.00f;
    this->m_turnRate = 0.00f;
    this->m_minSafeAreaYaw = 0.00f;
    this->m_maxSafeAreaYaw = 0.00f;
    this->m_minShotYaw = 0.00f;
    this->m_maxShotYaw = 0.00f;
    this->m_minShotDistance = 0.00f;
    this->m_maxShotDistance = 0.00f;
    this->m_shotRandamLength = 0.00f;
    this->m_shotRandamDistanceFactor = 0.00f;
    this->m_shotRandamMoveDirectionFactor = 0.00f;
    this->m_shotInterval = 0.00f;
    this->m_minShotPitchAngle = 0.00f;
    this->m_maxShotPitchAngle = 0.00f;
    this->m_maxShotPitchDistance = 0.00f;
    this->m_numProjectilePerFrame = 0;
    this->m_bStopMovement = false;
}

