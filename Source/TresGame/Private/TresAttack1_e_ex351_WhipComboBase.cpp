#include "TresAttack1_e_ex351_WhipComboBase.h"

UTresAttack1_e_ex351_WhipComboBase::UTresAttack1_e_ex351_WhipComboBase() {
    this->m_AnimData = NULL;
    this->m_ComboKind = ETresEnemyex351ComboKind::Combo_VerticalSwing;
    this->m_KeepDistance = 500.00f;
    this->m_bBackStepAcction = false;
    this->m_WarpStartMinDistance = 250.00f;
    this->m_WarpStartMaxDistance = 550.00f;
    this->m_AppearDistance = 700.00f;
    this->m_AppearMinAngle = 20.00f;
    this->m_AppearMaxAngle = 30.00f;
    this->m_MovedCorrectionRate = 1.00f;
    this->m_NotCorrectionAngle = 60.00f;
}

