#include "EX359_BeamSpinMoveInfo.h"

FEX359_BeamSpinMoveInfo::FEX359_BeamSpinMoveInfo() {
    this->m_fMaxSpinTime = 0.00f;
    this->m_bSpinInversed = false;
    this->m_fInitSpinVelocity = 0.00f;
    this->m_bSpinAccel = false;
    this->m_fSpinAccel = 0.00f;
    this->m_fMaxSpinVelocity = 0.00f;
    this->m_Projectile = NULL;
}

