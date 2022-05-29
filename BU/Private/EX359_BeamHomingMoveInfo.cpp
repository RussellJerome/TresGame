#include "EX359_BeamHomingMoveInfo.h"

FEX359_BeamHomingMoveInfo::FEX359_BeamHomingMoveInfo() {
    this->m_fInitVelocity = 0.00f;
    this->m_bResetInitVelocity = false;
    this->m_bAccel = false;
    this->m_fAccel = 0.00f;
    this->m_fMaxVelocity = 0.00f;
    this->m_fMaxMoveDistance = 0.00f;
    this->m_bMaxMoveDistance = false;
    this->m_bHoming = false;
    this->m_fHomingAccel = 0.00f;
    this->m_fHomingMaxVelocity = 0.00f;
    this->m_fHomingMaxAngle = 0.00f;
    this->m_fHomingMinDistance = 0.00f;
    this->m_fHomingIgnoreMaxAngleTime = 0.00f;
    this->m_Projectile = NULL;
    this->m_Target = NULL;
}

