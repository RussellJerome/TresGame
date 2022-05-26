#include "TresAttack6_e_ex059_Tackle.h"

UTresAttack6_e_ex059_Tackle::UTresAttack6_e_ex059_Tackle() {
    this->m_fMoveVelocity = 0.00f;
    this->m_fRotateVelocity = 0.00f;
    this->m_fMinHomingDistance = 0.00f;
    this->m_DashLimit = ETresDashLimit::Distance;
    this->m_DashAmount = 0.00f;
    this->m_HitWallAction = ETresHitWallAction_e_ex059::None;
    this->m_bProhibitOutOfBattleVolume = true;
    this->m_MinLoopDashDistance = 0.00f;
    this->m_bMaxReflectCount = false;
    this->m_iMaxReflectCount = 1;
    this->m_fRootTransformAmount_Start = 576.40f;
    this->m_fRootTransformAmount_End = 1931.52f;
    this->m_bDispDebug = false;
}

