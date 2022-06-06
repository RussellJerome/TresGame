#include "TresCameraFRPowerStrike.h"

ATresCameraFRPowerStrike::ATresCameraFRPowerStrike() {
    this->m_LerpTimeNormal = 1.00f;
    this->m_RotYawSpeedNormal = -90.00f;
    this->m_DistanceNormal = 900.00f;
    this->m_LerpTimeJump = 1.00f;
    this->m_RotYawSpeedJump = -90.00f;
    this->m_DistanceJump = 900.00f;
    this->m_HitShake = NULL;
    this->m_LandingShake = NULL;
}

