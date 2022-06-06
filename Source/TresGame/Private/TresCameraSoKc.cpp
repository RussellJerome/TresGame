#include "TresCameraSoKc.h"

ATresCameraSoKc::ATresCameraSoKc() {
    this->m_PitchUDMax = 100.00f;
    this->m_YawLRMax = 300.00f;
    this->m_PitchRatio = 2.00f;
    this->m_YawRatio = 200.00f;
    this->m_ReplacementTime = 0.00f;
    this->m_BackOffset = 100.00f;
    this->m_CenterDistance = 400.00f;
    this->m_SideDistance = 300.00f;
    this->m_WaitTime = 3.00f;
    this->m_FixPosTime = 2.00f;
    this->m_bDefaultPosR = false;
}

