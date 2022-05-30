#include "EX355_ThrowHomingSecondInfo.h"

FEX355_ThrowHomingSecondInfo::FEX355_ThrowHomingSecondInfo() {
    this->m_fMinHomingDistance = 0.00f;
    this->m_fMaxHomingAngle = 0.00f;
    this->m_fInitHomingRotateVelocity = 0.00f;
    this->m_fMaxHomingRotateVelocity = 0.00f;
    this->m_fHomingRotateAccel = 0.00f;
    this->m_fMaxHomingAngleIgnoreTime = 0.00f;
    this->m_bEnableGrabityOnDisablingHomingToLandTarget = false;
    this->m_fGravityScale = 0.00f;
}

