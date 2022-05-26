#include "TresRaDanceSplineGroup.h"

FTresRaDanceSplineGroup::FTresRaDanceSplineGroup() {
    this->m_eAreaType = ETresRaDanceAreaType::RA_DANCE_NONE;
    this->m_MaxMove = 0;
    this->m_fSpeed = 0.00f;
    this->m_fSpeedRate = 0.00f;
    this->m_fMaxSpeedScale = 0.00f;
    this->m_fInAddLength = 0.00f;
    this->m_fTotalLength = 0.00f;
    this->m_GroupIndex = 0;
    this->m_bIsReverse = false;
}

