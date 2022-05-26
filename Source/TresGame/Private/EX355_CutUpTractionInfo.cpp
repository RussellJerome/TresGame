#include "EX355_CutUpTractionInfo.h"

FEX355_CutUpTractionInfo::FEX355_CutUpTractionInfo() {
    this->iNotifyID = 0;
    this->fMaxTractionDistance = 0.00f;
    this->m_HorizontalVelocityType = EEX355_MoveVelocityType_Constant;
    this->m_fHorizontalVelocityExp = 0.00f;
    this->m_VerticalVelocityType = EEX355_MoveVelocityType_Constant;
    this->m_fVerticalVelocityExp = 0.00f;
}

