#include "TresAttack1_e_ex731_DoubleClaw.h"

UTresAttack1_e_ex731_DoubleClaw::UTresAttack1_e_ex731_DoubleClaw() {
    this->m_ActionType = e_ex731_DoubleClawType_SINGLE;
    this->m_fDesiredTargetDistance = 0.00f;
    this->m_fMaxTractionSize = 0.00f;
    this->m_fMaxPitch = 0.00f;
    this->m_fMinPitch = 0.00f;
    this->m_fDesiredTargetDistance_Dash = 0.00f;
    this->m_fMaxTractionSize_Dash = 0.00f;
    this->m_fMaxPitch_Dash = 0.00f;
    this->m_fMinPitch_Dash = 0.00f;
    this->m_bDebug = false;
    this->m_fAttackLocDistanceThreshold = 500.00f;
    this->m_bDoubleClaw = false;
    this->m_bDashClaw = false;
}

