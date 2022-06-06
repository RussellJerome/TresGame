#include "SQEX_BonamikFpsCorrectionDesc.h"

FSQEX_BonamikFpsCorrectionDesc::FSQEX_BonamikFpsCorrectionDesc() {
    this->m_FrameRate = 0.00f;
    this->m_WindDrag = 0.00f;
    this->m_WindLift = 0.00f;
    this->m_LocalForceDrag = 0.00f;
    this->m_LocalForceLift = 0.00f;
    this->m_Damping = 0.00f;
    this->m_Mass = 0.00f;
    this->m_Friction = 0.00f;
    this->m_Bounce = 0.00f;
    this->m_LateralLink = 0.00f;
    this->m_BendingLink = 0.00f;
    this->m_LongRangeAttachment = 0.00f;
    this->m_Cone = 0.00f;
}

