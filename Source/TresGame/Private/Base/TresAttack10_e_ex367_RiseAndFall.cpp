#include "TresAttack10_e_ex367_RiseAndFall.h"

UTresAttack10_e_ex367_RiseAndFall::UTresAttack10_e_ex367_RiseAndFall() {
    this->m_BulletProjectile = NULL;
    this->m_OffsetTargetHigh = 0.00f;
    this->m_OffsetTargetHighKey = 2.00f;
    this->m_NotMoveZRange = 300.00f;
    this->m_InitSpeed = 1000.00f;
    this->m_AccelSpeed = 2000.00f;
    this->m_MaxSpeed = 4000.00f;
    this->m_BrakeSpeed = 7000.00f;
    this->m_rRotationSpeed = 3.00f;
    this->m_rCharaRotationSpeed = 0.30f;
    this->m_BrakeDistance = 300.00f;
    this->m_MinSpeed = 300.00f;
    this->m_IsHoldAtkDistance = false;
    this->m_HoldAtkDistance = 0.00f;
    this->m_MoveMaxTime = 3.00f;
    this->m_WarpEQSQuery = NULL;
    this->m_WarpRange = 0.00f;
    this->m_StrongAttack = false;
}

