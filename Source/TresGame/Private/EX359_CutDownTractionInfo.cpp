#include "EX359_CutDownTractionInfo.h"

FEX359_CutDownTractionInfo::FEX359_CutDownTractionInfo() {
    this->m_fTargetDistance = 0.00f;
    this->m_fMaxTractionDistance = 0.00f;
    this->m_fYaw = 0.00f;
    this->m_YawType = EEX359_CutDownYawType_Relative;
}

