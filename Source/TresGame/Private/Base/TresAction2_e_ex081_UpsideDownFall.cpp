#include "TresAction2_e_ex081_UpsideDownFall.h"

UTresAction2_e_ex081_UpsideDownFall::UTresAction2_e_ex081_UpsideDownFall() {
    this->m_DistanceJumpOff = 1000.00f;
    this->m_FallPoint = 250.00f;
    this->m_MapFallPoint = 100.00f;
    this->m_RandFallPoint = 200.00f;
    this->m_MaxFallDistance = 2000.00f;
    this->m_MinFallDistance = 200.00f;
    this->m_bIsJumpOffRandom = false;
    this->m_JumpOffWaitMin = 0.00f;
    this->m_JumpOffWaitMax = 1.00f;
    this->m_JumpOffWaitNotFogged = 0.10f;
}

