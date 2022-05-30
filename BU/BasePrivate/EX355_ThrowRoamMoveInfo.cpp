#include "EX355_ThrowRoamMoveInfo.h"

FEX355_ThrowRoamMoveInfo::FEX355_ThrowRoamMoveInfo() {
    this->m_bRoamMove = false;
    this->m_fRoamMoveTime = 0.00f;
    this->m_fRoamMoveVelocity = 0.00f;
    this->m_fRoamRotateYawVelocity = 0.00f;
    this->m_fRoamRotatePitchVelocity = 0.00f;
    this->m_RoamCenterType = EEX355_ClaymoreRoamCenterType_Owner;
    this->m_fRoamRadius = 0.00f;
    this->m_fRoamHeight = 0.00f;
    this->m_bEnableAttackCollision = false;
}

