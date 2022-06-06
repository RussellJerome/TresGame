#include "TresGumiShipPlayerBaseMovementParameter.h"

FTresGumiShipPlayerBaseMovementParameter::FTresGumiShipPlayerBaseMovementParameter() {
    this->m_fMinOfSpeed = 0.00f;
    this->m_fMaxOfSpeed = 0.00f;
    this->m_fSpeedOfPitchUp = 0.00f;
    this->m_fSpeedOfPitchDown = 0.00f;
    this->m_fSpeedOfYaw = 0.00f;
    this->m_fSpeedOfRoll = 0.00f;
    this->m_fCoolDownTimeOfBoost = 0.00f;
    this->m_fDurationOfBoost = 0.00f;
    this->m_fScaleOfBoost = 0.00f;
    this->m_fLimitOfPitch = 0.00f;
    this->m_fSpeedOfAutoHorizontalCorrection = 0.00f;
    this->m_fCameraDepthLagDestDist = 0.00f;
    this->m_fCameraDepthLagAccSpeed = 0.00f;
    this->m_fCameraDepthLagDecSpeed = 0.00f;
    this->m_fCameraDepthLagScale = 0.00f;
}

