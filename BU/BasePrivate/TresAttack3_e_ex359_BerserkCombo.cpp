#include "TresAttack3_e_ex359_BerserkCombo.h"

UTresAttack3_e_ex359_BerserkCombo::UTresAttack3_e_ex359_BerserkCombo() {
    this->m_ComboType = EEX359_BerserkComboType0;
    this->m_fMaxMoveTime = 0.30f;
    this->m_VelocityType = EEX359_SplineMoveVelocityType_Constant;
    this->m_fVelocityExp = 0.00f;
    this->m_EQS_Move = NULL;
    this->m_fMoveEndAnimTime = 0.00f;
    this->m_EQS_Warp = NULL;
    this->m_fWarpTime = 0.00f;
    this->m_fWarpAppearTime = 0.00f;
    this->m_fComboGoalToTargetDistance = 0.00f;
    this->m_fComboMaxVelocity = 0.00f;
    this->m_fUpperGoalToTargetDistance = 0.00f;
    this->m_fUpperMaxDistance = 0.00f;
    this->m_fFinishJumpHeight = 300.00f;
    this->m_fFinishGoalToTargetDistance = 0.00f;
    this->m_fFinishMaxWarpDistance = 0.00f;
    this->m_fFinishWaitTime = 2.00f;
}

