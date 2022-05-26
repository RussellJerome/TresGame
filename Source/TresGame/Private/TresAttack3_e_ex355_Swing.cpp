#include "TresAttack3_e_ex355_Swing.h"

UTresAttack3_e_ex355_Swing::UTresAttack3_e_ex355_Swing() {
    this->m_fHorizontalJumpVelocity = 0.00f;
    this->m_fVerticalJumpVelocity = 0.00f;
    this->m_fMaxJumpHeight = 0.00f;
    this->m_fMinJumpHeight = 0.00f;
    this->m_fJumpBrakeTime = 0.00f;
    this->m_fVerticalJumpFinalVelocity = 0.00f;
    this->m_bTractionHorizontal = true;
    this->m_bDebugDispHorizontal = false;
    this->m_bTractionVertical = true;
    this->m_bDebugDispVertical = false;
    this->m_Projectile = NULL;
    this->m_ThrowDirectionHeightFromLand = 0.00f;
}

