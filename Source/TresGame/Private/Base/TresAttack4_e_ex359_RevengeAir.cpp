#include "TresAttack4_e_ex359_RevengeAir.h"

UTresAttack4_e_ex359_RevengeAir::UTresAttack4_e_ex359_RevengeAir() {
    this->m_fMaxMoveTime_Begin = 0.00f;
    this->m_VelocityType_Begin = EEX359_SplineMoveVelocityType_Constant;
    this->m_fVelocityExp_Begin = 0.00f;
    this->m_EQS_Move_Begin = NULL;
    this->m_fMaxMoveTime = 0.00f;
    this->m_VelocityType = EEX359_SplineMoveVelocityType_Constant;
    this->m_fVelocityExp = 0.00f;
    this->m_EQS_Move = NULL;
    this->m_fWarpHeight = 0.00f;
    this->m_fGoalToTargetDistance = 0.00f;
    this->m_bStartFromEnableChange = false;
    this->m_bEnableGravityOnTresTiming = true;
    this->m_fBlendTime = 0.00f;
}

