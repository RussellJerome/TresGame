#include "TresCameraSpecialShipLoc.h"

ATresCameraSpecialShipLoc::ATresCameraSpecialShipLoc() {
    this->m_PluralLimitYawMin[0] = -65.00f;
    this->m_PluralLimitYawMin[1] = -65.00f;
    this->m_PluralLimitYawMin[2] = -65.00f;
    this->m_PluralLimitYawMin[3] = -65.00f;
    this->m_PluralLimitYawMax[0] = 65.00f;
    this->m_PluralLimitYawMax[1] = 65.00f;
    this->m_PluralLimitYawMax[2] = 65.00f;
    this->m_PluralLimitYawMax[3] = 65.00f;
    this->m_LimitPitchMin = -45.00f;
    this->m_LimitPitchMax = 45.00f;
    this->m_SwitchWaitTime = 1.00f;
    this->m_SwitchInterpTime = 1.00f;
}

