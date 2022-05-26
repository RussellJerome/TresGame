#include "TresDetectMarkerComponentBase.h"

void UTresDetectMarkerComponentBase::SetDetectValid(bool bValid) {
}

bool UTresDetectMarkerComponentBase::IsDetectValid() const {
    return false;
}

UTresDetectMarkerComponentBase::UTresDetectMarkerComponentBase() {
    this->m_bDetectValid = true;
    this->m_bValidWhenOwnerVisible = false;
    this->m_bLimitRotRange = true;
    this->m_RotRangeProp = 60.00f;
    this->m_RotRangePropHintRate = 1.00f;
    this->m_bLimitRollRange = true;
    this->m_RollRangeProp = 45.00f;
    this->m_RollRangePropHintRate = 1.00f;
    this->m_ValidDistanceMin = 0.00f;
    this->m_ValidDistanceMax = 2097152.00f;
    this->m_ValidDistanceMaxHintRate = 1.00f;
    this->m_ValidScreenRatioMin = 0.01f;
    this->m_ValidScreenRatioMinHintRate = 1.00f;
    this->m_bRaycastIgnoreNpc = false;
    this->m_HintFrameRatio = 1.00f;
    this->m_bDrawLimitRotRange = true;
}

