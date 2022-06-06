#include "EX355_ThrowFirstMoveInfo.h"

FEX355_ThrowFirstMoveInfo::FEX355_ThrowFirstMoveInfo() {
    this->m_bFirstMove = false;
    this->m_fFirstMoveTime = 0.00f;
    this->m_fInitVelocity_First = 0.00f;
    this->m_fMaxVelocity_First = 0.00f;
    this->m_fAccel_First = 0.00f;
    this->m_bInitRotOffset_First = false;
    this->m_bInitRotOffset_Roam_NoOwnerRot = false;
    this->m_fMinHomingDistance_Fisrt = 0.00f;
    this->m_fMaxHomingAngle_First = 0.00f;
    this->m_fInitHomingRotateVelocity_First = 0.00f;
    this->m_fMaxHomingRotateVelocity_First = 0.00f;
    this->m_fMaxHomingRotateAccel_First = 0.00f;
    this->m_fMaxHomingAngleIgnoreTime_First = 0.00f;
}

