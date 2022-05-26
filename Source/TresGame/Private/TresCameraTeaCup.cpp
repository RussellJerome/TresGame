#include "TresCameraTeaCup.h"

ATresCameraTeaCup::ATresCameraTeaCup() {
    this->m_LerpTimeLow = 1.00f;
    this->m_RotYawSpeedLow = -90.00f;
    this->m_DistanceLow = 900.00f;
    this->m_LerpTimeHigh = 1.00f;
    this->m_RotYawSpeedHigh = -270.00f;
    this->m_DistanceHigh = 900.00f;
    this->m_HitShake = NULL;
    this->m_LandingShake = NULL;
}

